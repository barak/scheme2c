;;; This phase of the Scheme compiler figures out whether closures must be
;;; stack or heap allocated.  According to Steele's RABBIT paper, a heap
;;; allocated closure is needed for the following reasons:
;;;
;;;	- the Lambda expression is used as an argument to a function.
;;;
;;;	- the Lambda expression is bound to a variable which is used as an
;;;	  argument to a function.
;;;
;;;	- the Lambda expression is bound to a variable which is used as a 
;;;	  function within a closure.
;;;

;* Copyright (c) 1989-1993 Hewlett-Packard Development Company, L.P.
;*		All Rights Reserved

;* Permission is hereby granted, free of charge, to any person obtaining a
;* copy of this software and associated documentation files (the "Software"),
;* to deal in the Software without restriction, including without limitation
;* the rights to use, copy, modify, merge, publish, distribute, sublicense,
;* and/or sell copies of the Software, and to permit persons to whom the
;* Software is furnished to do so, subject to the following conditions:
;* 
;* The above copyright notice and this permission notice shall be included in
;* all copies or substantial portions of the Software.
;* 
;* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
;* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
;* DEALINGS IN THE SOFTWARE.

(module closeana)

;;; External and in-line definitions.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")
(include "miscexp.sch")

;;; Closure analysis before transformations is done by the following functions.
;;; The first is called to identify top-level functions which can be directly
;;; called, i.e. they are never assigned.  Once this is done, then further
;;; analysis is done to identify lambda expressions that must be closed over
;;; some variables.

(define (ANALYZE-CLOSURES1A exp)
    (if ($define? exp)
	(let ((var ($define-id exp))
	      (value ($define-exp exp)))
	     (if (and ($lambda? value) (not (id-set! var)))
		 (name-a-lambda var value)))))

(define (ANALYZE-CLOSURES1B exp)
    (set! walk-lambda-id 'top-level)
    (update-lambda-slots exp)
    (walk-$tree assign-lambdas exp)
    (update-lambda-slots exp)
    (walk-$tree inherit-closed exp))

;;; Given that the bindings of lambda functions are now known, it is possible
;;; to count the number of calls to the function.  Those calls which are
;;; marked tail-recursive and actually are, will not be counted.  All others
;;; will have their tail-recursive flag cleared and will be counted.  When
;;; this is done, the following will be known:
;;;
;;;	- all call's with the tail-recursive flag set will become branches.
;;;
;;;	- all lambda expressions which are stack allocated and have 1 real-call
;;;	  can be open coded at the point that they are called and any variable
;;;	  binding can be ignored.

(define (ANALYZE-CLOSURES2 exp)
    (set! walk-lambda-id 'top-level)
    (set! close-lambda-list '())
    (update-lambda-slots exp)
    (walk-$tree mark-tail-calls exp)
    (walk-$tree count-calls exp)
    (generate-lambdas close-lambda-list)
    (update-lambda-slots exp)
    (walk-$tree display-close exp))

;;; WALK-$TREE walks the tree for a function produced by PASS1 and calls the
;;; inspection function.  During the walk, WALK-LAMBDA-ID will be set to the
;;; current lambda-id.

(define (WALK-$TREE function leaf)
    (if (pair? leaf)
	(begin (function leaf)
	       (cond (($set? leaf)
		      (walk-$tree function ($set-exp leaf)))
		     (($define? leaf)
		      (walk-$tree function ($define-exp leaf)))
		     (($lambda? leaf)
		      (let ((old-walk-lambda-id walk-lambda-id))
			   (set! walk-lambda-id ($lambda-id leaf))
			   (walk-$tree-list function ($lambda-body leaf))
			   (set! walk-lambda-id old-walk-lambda-id)))
		     (($call? leaf)
		      (let ((func ($call-func leaf)))
			   (walk-$tree-list function ($call-argl leaf))
			   (walk-$tree function func)))
		     (($if? leaf)
		      (walk-$tree-list function (cdr leaf)))))))

(define (WALK-$TREE-LIST function forms)
    (for-each (lambda (leaf) (walk-$tree function leaf)) forms))

(define WALK-LAMBDA-ID 'top-level)
    
(define WALK-LAMBDA-IDS '(top-level))

(define WALK-LAMBDA-LEXICAL '())

(define CLOSE-LAMBDA-LIST '())

;;; ASSIGN-LAMBDAS tries to figure out if any lambda expression is ever
;;; used for something besides a function.  If so, it must be "closed" on the
;;; heap.
;;;
;;; Once that information has been obtained, then the closure property is
;;; propogated by INHERIT-CLOSED.

(define (ASSIGN-LAMBDAS exp)
    (cond (($set? exp)
	   (if (or (not ($lambda? ($set-exp exp)))
		   (not (eq? (id-lambda ($set-id exp))
			     ($lambda-id ($set-exp exp)))))
	       (assign-lambdas-arg ($set-exp exp))))
	  (($lambda? exp)
	   (for-each assign-lambdas-arg ($lambda-body exp)))
	  (($if? exp)
	   (assign-lambdas-arg ($if-test exp))
	   (assign-lambdas-arg ($if-true exp))
	   (assign-lambdas-arg ($if-false exp)))
	  (($call? exp)
	   (let ((func ($call-func exp)))
		(if ($lambda? func)
		    (begin (let loop ((vars (lambda-reqvars ($lambda-id func)))
				      (vals ($call-argl exp)))
 				(if vars
				    (let ((var (car vars))
					  (val (car vals)))
					 (if (and (symbol? val)
						  (id-lambda val))
					     (set-id-lambda! var
						 (id-lambda val)))
					 (loop (cdr vars) (cdr vals))))))
		    (for-each assign-lambdas-arg ($call-argl exp)))))))

(define (ASSIGN-LAMBDAS-ARG exp)
    (let ((lid (or (and (symbol? exp) (id-lambda exp))
		   ($lambda-id exp))))
	 (if lid
	     (begin (if (or (not (eq? (lambda-nestin lid) 'top-level))
			    (and (symbol? exp)
				 (not (eq? (id-use exp) 'global))))
			(begin (set-lambda-closed! lid #t)
			       (if (log? 'closed)
				   (format sc-icode
					   "~A must be a closed procedure~%"
					   lid))))
		    (lambda-is-procedure lid)))))
  
(define (INHERIT-CLOSED exp)
    (let ((closed-id ($lambda-id exp)))
	 (if (and closed-id (lambda-closed closed-id))
	     (let ((vars (indirect-lambda-lexical closed-id)))
		  (if (log? 'closed)
		      (format sc-icode "~A forces ~A to the display~%"
			      closed-id vars))
		  (for-each
		      (lambda (var) (set-id-display! var #t))
		      vars)))))

;;; The list of lexical variables used with-in the body of lid and all the
;;; lambda expressions which it calls.

(define INDIRECT-LAMBDA-CHECKED '())

(define (INDIRECT-LAMBDA-LEXICAL lid)
    (set! indirect-lambda-checked '())
    (indirect-lambda-lexical1 lid '() '()))

(define (INDIRECT-LAMBDA-LEXICAL1 lid lexvars bound)
    (if (memq lid indirect-lambda-checked)
	lexvars
	(let* ((bound (append (append (lambda-reqvars lid)
				      (lambda-optvars lid))
			      bound))
	       (calls (lambda-calls lid))
	       (lexvars (let loop ((mine (lambda-lexical lid))
				   (lexvars lexvars))
			     (define (ADD-TO-CALLS var)
				     (if (not (memq var calls))
					 (set! calls
					       (cons (id-lambda var)calls)))
				     #t)
			     (if mine
				 (let ((var (car mine)))
				      (if (or (memq var lexvars)
					      (memq var bound)
					      (and (id-lambda var)
						   (lambda-generate
						       (id-lambda var))
						   (not (eq?
							    (lambda-generate
								(id-lambda var))
							    'closed-procedure))
						   (add-to-calls var)))
					  (loop (cdr mine) lexvars)
					  (loop (cdr mine)
						(cons var lexvars))))
				 lexvars))))
	      (set! indirect-lambda-checked (cons lid indirect-lambda-checked))
	      (let loop ((calls calls) (lexvars lexvars))
		   (if calls
		       (let ((call (car calls)))
			    (if (eq? (lambda-nestin call) 'top-level)
				(loop (cdr calls) lexvars)
				(loop (cdr calls)
				      (indirect-lambda-lexical1
					  call
					  lexvars
					  bound))))
		       lexvars)))))
	     
;;; UPDATE-LAMBDA-SLOTS is called to update fields in the lambda records which
;;; may change because of transformations.  The fields updated are
;;; LAMBDA-LEXICAL and LAMBDA-CALLS.

(define (UPDATE-LAMBDA-SLOTS exp)
    (cond ((or ($set? exp) ($if? exp))
	   (for-each update-lambda-slots (cdr exp)))
	  (($define? exp)
	   (set! walk-lambda-id 'top-level)
	   (set! walk-lambda-ids '(top-level))
	   (set! walk-lambda-lexical '())
	   (update-lambda-slots ($define-exp exp)))
	  ((and ($lambda? exp) (not (memq ($lambda-id exp) walk-lambda-ids)))
	   (set! walk-lambda-ids (cons ($lambda-id exp) walk-lambda-ids))
	   (set! walk-lambda-id (car walk-lambda-ids))
	   (set-lambda-calls! walk-lambda-id '())
	   (let ((save-walk-lambda-lexical walk-lambda-lexical)
		 (lex '()))
		(for-each
		    (lambda (exp)
			    (set! walk-lambda-lexical '())
			    (update-lambda-slots exp)
			    (let loop ((vars walk-lambda-lexical))
				 (cond ((null? vars))
				       ((or (memq (car vars) lex)
					    (eq? (id-boundid (car vars))
						 walk-lambda-id))
					(loop (cdr vars)))
				       (else (set! lex (cons (car vars) lex))
					     (loop (cdr vars))))))
		    ($lambda-body exp))
		(set-lambda-lexical! walk-lambda-id lex)
		(set! walk-lambda-lexical save-walk-lambda-lexical)
		(for-each
		    (lambda (x)
			    (set! walk-lambda-lexical
				  (mergeq x walk-lambda-lexical)))
		    lex))
	   (set! walk-lambda-ids (cdr walk-lambda-ids))
	   (set! walk-lambda-id (car walk-lambda-ids)))
	  (($call? exp)
	   (let* ((func ($call-func exp))
		  (lid (or ($lambda-id func)
			   (and (symbol? func) (id-lambda func)))))
		 (when lid
		       (set-lambda-calls! walk-lambda-id
			   (mergeq lid (lambda-calls walk-lambda-id)))
		       (if (symbol? func)
			   (if (memq (lambda-generate lid)
				     '(inline inline-closed))
			       (update-lambda-slots (lambda-$lambda lid)))))
		 (update-lambda-slots func)
		 (for-each update-lambda-slots ($call-argl exp))))
	  ((and (symbol? exp)
		(id-boundid exp)
		(not (eq? (id-boundid exp) walk-lambda-id)))
	   (set! walk-lambda-lexical (mergeq exp walk-lambda-lexical)))))

;;; A simple merge function based on EQ?.

(define (MERGEQ x y)
    (cond ((null? x) y)
	  ((memq x y) y)
	  (else (cons x y))))

;;; MARK-TAIL-CALLS is called to flag all function calls which exit their
;;; containing lambda expression.  The flag is the id of the outer-most lambda
;;; expression that they exit.  Lambda expressions which are called inline
;;; will be so noted and have their generate field set to INLINE and their
;;; nestin field set correctly  at this time.  Similarly, top-level functions
;;; will have their generate field set to PROCEDURE.  Finally, a list of all
;;; lambda-id's will be collected in CLOSE-LAMBDA-LIST.

(define (MARK-TAIL-CALLS exp)
    (cond (($lambda? exp)
	   (let ((lid ($lambda-id exp)))
		(set! close-lambda-list (cons lid close-lambda-list))
		(set-lambda-str-calls! lid '())
		(set-lambda-tail-calls! lid '())
		(set-lambda-real-calls! lid '())	
		(if (eq? (lambda-nestin lid) 'top-level)
		    (if (not (lambda-generate lid)) (lambda-is-procedure lid))
		    (set-lambda-$lambda! lid exp))
		(mark-tail-calls1 (car (last-pair ($lambda-body exp))) lid)))
	  ((and ($call? exp) ($lambda? ($call-func exp)))
	   (let ((lid ($lambda-id ($call-func exp))))
		(set-lambda-nestin! lid walk-lambda-id)
		(lambda-is-inline lid)))))

(define (MARK-TAIL-CALLS1 exp exitid)
    (cond ((and ($call? exp) (not ($call-tail exp)))
	   (set-$call-tail! exp exitid)
	   (if ($lambda? ($call-func exp))
	       (begin (set-lambda-exits! ($lambda-id ($call-func exp)) exitid)
		      (mark-tail-calls1
			  (car (last-pair ($lambda-body ($call-func exp))))
			  exitid))))
	  (($if? exp)
	   (mark-tail-calls1 ($if-true exp) exitid)
	   (mark-tail-calls1 ($if-false exp) exitid))))

;;; Calls are counted by the following function.  Three lists are maintained,
;;; STR-CALLS (self-tail-recursive calls), TAIL-CALLS (other tail calls), and
;;; REAL-CALLS (other calls).  The STR-CALLS and REAL-CALLS are composed of
;;; the caller's lambda-id.  The TAIL-CALLS list is composed of two item
;;; entries of the form (caller-id tail-exit-id).  Note that calls are only
;;; counted for lambda expressions which are internal to a function as those
;;; are the only ones that can be relocated.
 
(define (COUNT-CALLS exp)
    (let* ((func (if ($call? exp) ($call-func exp) #f))
	   (id   (if (symbol? func) (id-lambda func) #f)))
	  (if (and id (not (id-external func)))
	      (cond ((eq? ($call-tail exp) id)
		     (set-lambda-str-calls! id
			 (cons walk-lambda-id (lambda-str-calls id))))
		    (($call-tail exp)
		     (set-lambda-tail-calls! id
			 (cons (list walk-lambda-id ($call-tail exp))
			       (lambda-tail-calls id))))
		    (else
		     (set-lambda-real-calls! id
			 (cons walk-lambda-id (lambda-real-calls id))))))))

;;; Once calls have been counted, it is possible to assign code generation
;;; methods to each of the lambda expressions.  This is done by this function
;;; which is called with a list of lambda expressions.  It makes an initial
;;; pass over the list and inspects those which don't have a code generation
;;; method.  Any lambda expressions that are called once are marked INLINE.
;;; Any others which have real-calls are marked (CLOSED-)PROCEDURE, and the
;;; rest (which have several tail calls) are saved for processing by
;;; GENERATE-TAILS.  Following this, any items with unknown generation methods
;;; are marked as PROCEDURE.

(define (GENERATE-LAMBDAS lambda-list)
    (let ((unknown '()))
	 (for-each
	     (lambda (lid)
		     (let ((real (lambda-real-calls lid))
			   (tail (lambda-tail-calls lid)))
			  (cond ((lambda-generate lid) #t)
				((= 1 (+ (length real) (length tail)))
				 (if tail (set-lambda-exits! lid (cadar tail)))
				 (let ((nestin (if real (car real)
						   (caar tail))))
				      (if (la-nestin-lb? nestin lid)
					  (lambda-is-procedure lid)
					  (begin (set-lambda-nestin! lid
						     nestin)
						 (lambda-is-inline lid)))))
				(real
				 (lambda-is-procedure lid))
				(else (set! unknown (cons lid unknown))))))
	     lambda-list)
	 (for-each lambda-is-procedure
	     (generate-tails (generate-tails unknown 1) 2))))

;;; GENERATE-TAILS attempts to turn the left overs into either INLINE or
;;; INLINE-TAIL calls. This is an iterative process and when no more
;;; conversions can be made, it will mark those left as PROCEDURE.  A lambda
;;; expression may be designated INLINE-TAIL when:
;;;
;;;     1.  All the callers are tail calls within the same procedure.
;;;     2.  All the calls exit the same lambda expression.
;;;
;;; FSM's are defered to the second pass to prevent lambda expressions from
;;; becoming inline-tails that could be inline.

(define (GENERATE-TAILS unknown pass)
    (let ((progress #f)
	  (still-unknown '()))
	 (for-each
	     (lambda (lid)
		     (let ((tails (remove-self-tails lid)))
			  (if (= (length tails) 1)
			      (begin (set-lambda-exits! lid (cadar tails))
				     (set-lambda-nestin! lid (caar tails))
				     (lambda-is-inline lid))
			      (verify-tails lid pass))
			  (if (lambda-generate lid)
			      (set! progress #t)
			      (set! still-unknown (cons lid still-unknown)))))
	     unknown)
	 (if progress
	     (generate-tails still-unknown pass)
	     unknown)))

(define (LAMBDA-IS-PROCEDURE lid)
    (set-lambda-$lambda! lid '())
    (if (lambda-name lid) (assign-known-name (lambda-name lid)))
    (if (lambda-closed lid)
	(begin (set-lambda-nestin! lid 'top-level)
	       (set-lambda-generate! lid 'closed-procedure))
	(set-lambda-generate! lid 'procedure)))

(define (LAMBDA-IS-INLINE lid)
    (if (lambda-name lid) (set-id-display! (lambda-name lid) #f))
    (set-lambda-generate! lid 'inline))

(define (LAMBDA-IS-INLINE-TAIL lid)
    (if (lambda-name lid) (set-id-display! (lambda-name lid) #f))
    (set-lambda-generate! lid 'inline-tail))

(define (REMOVE-SELF-TAILS lid)
    (do ((tails (lambda-tail-calls lid) (cdr tails))
	 (newtails '()))
	((null? tails)
	 (set-lambda-tail-calls! lid newtails)
	 newtails)
	(if (not (eq? (generate-tails-exits (cadar tails)) lid))
	    (set! newtails (cons (car tails) newtails)))))

(define (VERIFY-TAILS lid pass)
    (do ((tails (lambda-tail-calls lid) (cdr tails))
	 (exits  '()))
	((null? tails)
	 (let ((exits (if (= (length exits) 1) (car exits) #f)))
	      (if exits	 
		  (begin (do ((inline-tails (lambda-inline-tails exits)
				  (merge-inline-tails (car ids) inline-tails))
			      (ids (cons lid (lambda-inline-tails lid)) 
				   (cdr ids)))
			     ((null? ids)
			      (set-lambda-inline-tails! exits inline-tails))
			     (set-lambda-exits! (car ids) exits))
			 (set-lambda-inline-tails! lid '())
			 (set-lambda-nestin! lid exits)
			 (lambda-is-inline-tail lid)))))
	(let ((x (generate-tails-exits (cadar tails))))
	     (if (and (not (memq x exits))
		      (or (eq? pass 1)
			  (not (could-inline-tail? (cadar tails) exits))))
		 (set! exits (cons x exits))))))

(define (GENERATE-TAILS-EXITS lid)
    (if (and (memq (lambda-generate lid) '(inline inline-tail))
	     (lambda-exits lid))
	(generate-tails-exits (lambda-exits lid))
	lid))

;;; A lambda expression that could be inline-tailed in the current context is
;;; one whose generation method is unknown and who only tail calls items who's
;;; generation methods are unknown or a member of the exits list.

(define (COULD-INLINE-TAIL? lid exits)
    (and (not (lambda-generate lid))
	 (let loop ((tails (lambda-tail-calls lid)))
	      (if tails
		  (let ((exit (generate-tails-exits (cadar tails))))
		       (if (and (lambda-generate exit) (not (memq exit exits)))
			   #f
			   (loop (cdr tails))))
		  #t))))

;;; The INLINE-TAILS list is ordered such that lambda expressions occur before
;;; those which nest in them and before those which they call.  This is
;;; required to generate correct code.
 
(define (MERGE-INLINE-TAILS lid tails)
    (cond ((null? tails) (list lid))
	  ((or (la-nestin-lb? (car tails) lid)
	       (memq (car tails) (lambda-calls lid)))
	   (cons lid tails))
	  (else (cons (car tails) (merge-inline-tails lid (cdr tails))))))

;;; The following boolean tests whether lambda expression "a" is nested in
;;; lambda expression "b".

(define (LA-NESTIN-LB? la lb)
    (cond ((eq? la lb)          #t)
          ((eq? la 'top-level)  #f)
          (else                 (la-nestin-lb? (lambda-nestin la) lb))))

;;; Once all the code generation modes for each lambda expression have been
;;; decided, the final analysis step is to decide which lexical variables must
;;; be allocated in the display.  A variable must be allocated to the display
;;; if it is used by a "closed" procedure, or it is lexically referenced
;;; across a C procedure boundary.

(define (DISPLAY-CLOSE exp)
    (if ($lambda? exp)
	(let ((id ($lambda-id exp)))
	     (if (memq (lambda-generate id) '(procedure closed-procedure))
		 (for-each
		     (lambda (var)
			     (cond ((and (id-lambda var)
					 (not (eq? (lambda-generate
						       (id-lambda var))
						   'closed-procedure)))
				    (set-id-display! var #f))
				   ((not (id-display var))
				    (if (log? 'closed)
					(format sc-icode
						"~A forces ~A to display~%"
						id var))
				    (set-id-display! var #t))))
		     (all-lexical-vars id))))))

;;; Returns a list of all lexical variables associated with a procedure,
;;; including those picked up by inline-tail calls.  This was introduced as a
;;; conservative way to fix a problem.

(define (ALL-LEXICAL-VARS id)
    (let loop ((vars (lambda-lexical id))
	       (inline-tails (lambda-inline-tails id)))
	 (if (null? inline-tails)
	     vars
	     (begin (for-each
			(lambda (var)
				(if (and (not (la-nestin-lb? (id-boundid var)
						  id))
					 (not (memq var vars)))
				    (set! vars (cons var vars))))
			(lambda-lexical (car inline-tails)))
		    (loop vars (cdr inline-tails))))))
    
