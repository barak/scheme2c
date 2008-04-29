;;; Code generator for $lambda expressions.
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

(module lambdacode)

;;; External and in-line declarations.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")
(include "miscexp.sch")
(include "gencode.sch")
(include "lap.sch")

;;; ($lambda id body)  ==>  just about anything.
;;;
;;; The first part of lambda code generation is to decide whether the code is
;;; really going to be generated at this place.  If it is, then the actual
;;; code generation will be done in PROCEDURE-EMIT or CLOSED-PROCEDURE-EMIT.
;;; Functions which are identified as INLINE-TAIL will have their label
;;; allocated here.  Their code will be generated in LAMBDA-TAILS-GENC.

(define ($LAMBDA-GENC loc exp bindings)
    (let* ((id       ($lambda-id exp))
	   (generate (lambda-generate id)))
	  (cond ((eq? generate 'procedure)
		 (procedure-emit loc id exp bindings))
		((eq? generate 'closed-procedure)
		 (closed-procedure-emit loc id exp bindings)))))

;;; The most straight forward case to generate is that of a procedure which
;;; does not have a closure pointer.

(define (PROCEDURE-EMIT loc id exp bindings)
    (let* ((req      (lambda-reqvars id))
	   (opt      (optional-args id))	   
	   (formals  (append req (if opt (list opt) '())))
	   (name     (cname id))
	   (save-lap '())
	   (top      (eq? (lambda-nestin id) 'top-level)))
	  (if (not (eq? loc 'no-value))
	      (emit-lap `(SET ,(vname loc)
			      ("MAKEPROCEDURE"
			       ,(length req)
			       ,(if opt 1 0)
			       ,(cname name)
			       "EMPTYLIST"))))
	  (set! save-lap (save-current-lap '()))
	  (emit-lap `(PROC ,(cname name) ,@(map vname formals)))
	  (emit-lap '(LIT "{"))
	  (emit-lap '(INDENT 8))
	  (emit-lap `(LOCALS DISPLAY ,free-display))
	  (stack-trace-emit id)
	  (lambda-body-genc 'return exp formals
	      (proc-args-to-display formals free-display) bindings)
	  (emit-lap `(INDENT 0))
	  (emit-lap '(LIT "}"))
	  (if (not (null? (lambda-name id)))
	      (set-id-external! (lambda-name id) #t))
	  (done-lap (save-current-lap save-lap))))

;;; The next type of procedure to emit is one which is closed over its free
;;; variables.  The pointer to the closure will be added as the last argument
;;; to the function.

(define (CLOSED-PROCEDURE-EMIT loc id exp bindings)
    (let* ((req      (lambda-reqvars id))
	   (opt      (optional-args id))
	   (closep   (newv 'close 'use 'closurep
			   'display (lambda-display-closep id)))
	   (formals  (append req
			     (append (if opt (list opt) '()) (list closep))))
	   (name     (cname id))
	   (save-lap '()))
	  (emit-lap `(SET ,(vname loc)
			  ("MAKEPROCEDURE"
			   ,(length req)
			   ,(if opt 1 0)
			   ,(cname name)
			   ,(closed-proc-closure id))))
	  (set! save-lap (save-current-lap '()))
	  (emit-lap `(PROC ,(cname name) ,@(map vname formals)))
	  (emit-lap '(LIT "{"))
	  (emit-lap '(INDENT 8))
	  (emit-lap `(LOCALS DISPLAY ,free-display))
	  (stack-trace-emit id)
	  (let ((restore (closed-proc-display id closep)))
	       (if restore
		   (let ((temp (use-lap-temp)))
			(lambda-body-genc temp exp formals
			    (proc-args-to-display formals free-display)
			    bindings)
			(map emit-lap restore)
			(emit-lap `(SET return ,(vname temp))))
		   (lambda-body-genc 'return exp formals formals bindings)))
	  (emit-lap `(INDENT 0))
	  (emit-lap '(LIT "}"))
	  (if (not (null? (lambda-name id)))
	      (set-id-external! (lambda-name id) #t))
	  (done-lap (save-current-lap save-lap))))

;;; The following function is called to load procedure arguments into their
;;; appropriate display slots.  It will return a list of the locations holding
;;; the values to be bound to the variables, for use by lambda-body-genc.

(define (PROC-ARGS-TO-DISPLAY formals displayx)
    (if formals
	(let ((var (car formals)))
	     (if (id-display var)
		 (begin (emit-lap `(SET ("DISPLAY" ,displayx) ,(vname var)))
			(cons `("DISPLAY" ,displayx)
			      (proc-args-to-display (cdr formals)
				  (+ displayx 1))))
		 (cons var (proc-args-to-display (cdr formals) displayx))))
	'()))

;;; The following function is called to make code for creating a closure
;;; with copies of the appropriate slots in the display.

(define (CLOSED-PROC-CLOSURE id)
    (let ((lexvars (indirect-lambda-lexical id)))
	 (if lexvars
	     `("MAKECLOSURE"
	       "EMPTYLIST"
	       ,(length lexvars)
	       ,@(map (lambda (v) `("DISPLAY" ,(id-display v))) lexvars))
	     "EMPTYLIST")))

;;; The following function emits code to save the appropriate portions of the
;;; display.  It will return code to restore the display.

(define (CLOSED-PROC-DISPLAY id closep)
    (let loop ((i 0) (vars (indirect-lambda-lexical id)))
	 (if vars
	     (let ((temp (use-lap-temp))
		   (displayx (id-display (car vars))))
		  (emit-lap `(SET ,(vname temp) ("DISPLAY" ,displayx)))
		  (emit-lap `(SET ("DISPLAY" ,displayx)
				  ("CLOSURE_VAR" ,(vname closep) ,i)))
		  (cons `(SET ("DISPLAY" ,displayx) ,(vname temp))
			(loop (+ i 1) (cdr vars))))
	     '())))

;;; Code for the stack trace-back is emitted by the following routine when
;;; SC-STACK-TRACE is true.

(define (STACK-TRACE-EMIT lid)
    (if sc-stack-trace
	(let ((id (lambda-name lid)))
	     (if (and id (eq? (id-printname id) current-define-name)
		      (eq? (lambda-nestin lid) 'top-level))
		 (emit-lap `(PUSHSTACKTRACE ,(vname current-define-string)))
		 (let ((name (string-append
				 (if id
				     (symbol->string (id-printname id))
				     (cname lid))
				 " [inside "
				 (symbol->string current-define-name)
				 "]")))
		      (emit-lap `(PUSHSTACKTRACE (CSTRING ,name))))))))

;;; Code for $LAMBDA bodies is generated by the following function.  Any
;;; lambda bodies that are designated as "inline-tails" will have their
;;; lambda variables allocated and deallocated here.  Any lexical variables
;;; that they reference will also be allocated here.

(define (LAMBDA-BODY-GENC loc exp vars vals bindings)
    (let* ((id ($lambda-id exp))
	   (save-current-code-lambda current-code-lambda)
	   (save-loc loc)
	   (save-free-display free-display)
	   (tails (lambda-inline-tails id)))
         (set! current-code-lambda id)
	 (for-each
	     (lambda (lid)
	             (for-each
		         (lambda (var)
			         (unless (memq var vars)
					 (set! vars (append vars (list var)))
					 (set! vals
					       (append vals '(undefined)))))
			 (append (indirect-lambda-lexical lid)
				 (append (lambda-reqvars lid)
					 (lambda-optvars lid)))))
	     tails)
	  (if (and tails (eq? loc 'tos))
	      (set! loc (use-lap-temp)))
	  (reserve-display vars bindings)
	  (emit-lap `(LABEL ,(code-label id)))
	  (do ((bindings (lambda-bind-vars vars vals bindings))
	       (expl ($lambda-body exp) (cdr expl)))
	      ((null? expl)
	       (lambda-tails-genc loc exp bindings))
	      (if (cdr expl)
		  (exp-genc 'no-value (car expl) bindings)
		  (exp-genc loc (car expl) bindings)))
	  (when (not (eq? loc save-loc))
		(emit-lap `(SET ,(vname save-loc) ,(vname loc)))
		(drop-lap-temp loc))
	  (set! free-display save-free-display)
	  (set! current-code-lambda save-current-code-lambda)
	  (if tails
	      (intersect-with-global-condition-info
	       (stored-conditions-intersection tails)))))

;;; Code for lambda expressions which are INLINE-TAIL's is generated after the
;;; code for the lambda body which they exit by this function.

(define (LAMBDA-TAILS-GENC loc exp bindings)
    (let* ((id    ($lambda-id exp))
	   (tails (lambda-inline-tails id))
	   (next  (if (and tails (not (eq? loc 'return)))
		      (make-label)
		      #f))
	   (save-condition global-condition-info))
	  (do ((tails tails (cdr tails)))
	      ((null? tails))
	      (if next (emit-lap `(GOTO ,next)))
	      (let* ((save-temp (save-lap-temps))
		     (save-display free-display)
		     (tail (car tails))
		     (vars (append (lambda-reqvars tail)
				   (lambda-optvars tail))))
		    (set! global-condition-info (retrieve-condition-info tail))
		    (lambda-body-genc loc (lambda-$lambda tail) vars
			(map (lambda (var)
				     (let ((x (id-display var)))
					  (if x `("DISPLAY" ,x) var)))
			     vars)	
			bindings)
		    (store-condition-info tail)
		    (restore-lap-temps save-temp)
		    (set! free-display save-display)))
	  (if next (emit-lap `(LABEL ,next)))
	  (set! global-condition-info save-condition)))

;;; The following function is called to allocate variables to the display.

(define (RESERVE-DISPLAY vars bindings)
    (let loop ((vars vars))
	 (if vars
	     (let ((var (car vars)))
		  (if (and (id-display var) (not (memq var bindings)))
		      (let ((displayx (let ((x free-display))
					   (set! free-display
						 (+ free-display 1))
					   x)))
			   (set-id-display! var displayx)))
		  (loop (cdr vars)))
	     (begin (set! lap-max-display (max lap-max-display free-display))
		    (set! max-display (max max-display free-display))))))

;;; Variables are bound by calling the following function with the variables,
;;; the cells holding their initial values, and the current bindings.  It
;;; will return the new bindings, which is a list of variables which are
;;; currently bound to the value held in either a display slot or a temporary.

(define (LAMBDA-BIND-VARS vars vals bindings)
    (do ((vars      vars (cdr vars))
	 (vals      vals (cdr vals))
	 (bindings  bindings (if (memq (car vars) bindings)
				 bindings
				 (cons (car vars) bindings))))
	((null? vals) bindings)
	(let ((var (car vars))
	      (val (car vals)))
	     (cond ((and (eq? val 'undefined) (memq var bindings)))
		   ((id-display var)
		    (cond ((eq? val 'undefined))
			  ((id-set! var)
			   (emit-lap `(SET ("DISPLAY" ,(id-display var))
					   (CONS ,(vname val) "EMPTYLIST"))))
			  ((not (equal? val `("DISPLAY" ,(id-display var))))
			   (emit-lap `(SET ("DISPLAY" ,(id-display var))
					   ,(vname val))))))
		   ((and (id-set! var)
			 (or (not (id-lambda var))
			     (eq? (lambda-generate (id-lambda var))
				  'closed-procedure)))
		    (cond ((eq? val 'undefined)
			   (set-id-vname! var (use-lap-temp)))
			  ((memq var bindings)
			   (emit-lap `(SET ,(vname var)
					   ("CONS" ,(vname val)
					    "EMPTYLIST"))))
			  (else
			   (let ((vn (id-vname
					 (if (eq? var val)
					     val
					     (use-lap-temp)))))
				(emit-lap `(SET ,vn
						("CONS" ,(vname val)
						 "EMPTYLIST")))
				(set-id-vname! var vn)))))
		   ((eq? val 'undefined)
		    (if (or (not (id-lambda var))
			    (eq? (lambda-generate (id-lambda var))
				 'closed-procedure))
			(set-id-vname! var (use-lap-temp))))
		   ((not (eq? var val))
		    (if (not (memq var bindings))
			(set-id-vname! var (use-lap-temp)))
		    (emit-lap `(SET ,(vname var) ,(vname val))))))))
