;;; This file contains the functions which handle LAMBDA expressions.  LET
;;; expressions are converted to LAMBDA expressions to ease later analysis at
;;; the expense of muddying the intermediate code.
;;;

;*           Copyright 1989-1993 Digital Equipment Corporation
;*                         All Rights Reserved
;*
;* Permission to use, copy, and modify this software and its documentation is
;* hereby granted only under the following terms and conditions.  Both the
;* above copyright notice and this permission notice must appear in all copies
;* of the software, derivative works or modified versions, and any portions
;* thereof, and both notices must appear in supporting documentation.
;*
;* Users of this software agree to the terms and conditions set forth herein,
;* and hereby grant back to Digital a non-exclusive, unrestricted, royalty-free
;* right and license under any changes, enhancements or extensions made to the
;* core functions of the software, including but not limited to those affording
;* compatibility with other hardware or software environments, but excluding
;* applications which incorporate this software.  Users further agree to use
;* their best efforts to return to Digital any such changes, enhancements or
;* extensions that they make and inform Digital of noteworthy uses of this
;* software.  Correspondence should be provided to Digital at:
;* 
;*                       Director of Licensing
;*                       Western Research Laboratory
;*                       Digital Equipment Corporation
;*                       250 University Avenue
;*                       Palo Alto, California  94301  
;* 
;* This software may be distributed (but not offered for sale or transferred
;* for compensation) to third parties, provided such third parties agree to
;* abide by the terms and conditions of this notice.  
;* 
;* THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
;* WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
;* MERCHANTABILITY AND FITNESS.   IN NO EVENT SHALL DIGITAL EQUIPMENT
;* CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
;* DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
;* PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
;* ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
;* SOFTWARE.

(module lambdaexp)

;;; External and in-line definitions.

(include "plist.sch")
(include "lambdaexp.sch")

;;; (lambda <vars> <body>...)  ==>  ($lambda <id> <body>'...)
;;;
;;; Renames variables and then expands the body of the lambda expression.
;;; The result is a form which contains an id for later reference in <id>,
;;; and the converted body in <body>'.

(define (LAMBDA-EXP exp exp-func)
    (let ((body        	       	    (lambda-defines (cddr exp)))
	  (old-lexical-bound-vars   lexical-bound-vars)
	  (old-lexical-free-vars    lexical-free-vars)
	  (old-current-lambda-id    current-lambda-id)
	  (id		            (newv 'l 'use 'lambda))
	  (result		    '()))
	 (set! lexical-free-vars (append lexical-bound-vars lexical-free-vars))
	 (set! lexical-bound-vars '())
	 (set-lambda-nestin! id current-lambda-id)
	 (set! current-lambda-id id)
	 (lambda-vars-bind (cadr exp) body id)
	 (set! body (exp-form-list body exp-func))
	 (set! result `($lambda ,id ,@body))
	 (set! lexical-bound-vars old-lexical-bound-vars)
	 (set! lexical-free-vars old-lexical-free-vars)
	 (set! current-lambda-id old-current-lambda-id)
	 result))

(define (LAMBDA-VARS-BIND vars name id)
    (cond ((null? vars))
	  ((symbol? vars)
	   (set! vars (newv vars 'use 'lexical 'boundid id))
	   (if name (assign-known-name vars))
	   (set-lambda-optvars! id (list vars)))
	  ((pair? vars)
	   (let ((var (car vars)))
		(set! var (newv var 'use 'lexical 'boundid id))
		(if name (assign-known-name var))
		(lambda-vars-bind (cdr vars) name id)
		(set-lambda-reqvars! id (cons var (lambda-reqvars id)))))
	  (else (expand-error 'lambda-variables vars))))

;;; The following procedure is called to rewrite the body of any lambda
;;; expression which contains DEFINE's to an equivilant lambda form.

(define (LAMBDA-DEFINES body)
    (let loop ((oldforms body) (newforms '()) (vars '()) (sets '()))
	 (if oldforms
	     (let ((form (car oldforms)))
		  (cond ((or (not (pair? form))
			     (not (eq? (car form) 'define)))
			 (loop (cdr oldforms) (cons form newforms)
			       vars sets))
			((pair? (cadr form))
			 (loop (cdr oldforms) newforms
			       (cons (caadr form) vars)
			       (cons `(set! ,(caadr form)
					    (lambda ,(cdadr form)
						    ,@(cddr form)))
				     sets)))
			(else
			 (loop (cdr oldforms) newforms
			       (cons (cadr form) vars)
			       (cons `(set! ,@(cdr form)) sets)))))
	     (if vars
		 `(((lambda ,vars ,@(reverse sets) ,@(reverse newforms))
		    ,@(vector->list (make-vector (length vars) 0))))
		 body))))

;;; Attributes of the lambda expression are stored as properties of the <id>:
;;;
;;;	REQVARS		list of required arguments
;;;	OPTVARS		list of optional arguments
;;;	LEXICAL		lexically bound variables used in <body>
;;;	CALLS		lambda id's which it uses
;;;	NAME		name bound to the function
;;;	GENERATE	indicates code generation strategy.  The possible
;;;			values are INLINE, INLINE-TAIL, CLOSED-PROCEDURE,
;;;			and PROCEDURE.
;;;     CLOSED		lambda expression must be closed.
;;;     DISPLAY-CLOSEP  closure pointer must be placed in the display.
;;;     NESTIN		lambda id that this is nested in
;;;     EXITS           lambda id which this lambda expression exits when it
;;;                     is tail-called
;;;     INLINE-TAILS    list of lambda id's for expressions which are tail
;;;			called to exit this expression
;;;	STR-CALLS	list of (caller-lambda-id exit-lambda-id) for "self"
;;;			tail-recursive calls
;;;	TAIL-CALLS      list of (caller-lambda-id exit-lambda-id) for
;;;			tail-calls from other lambda expressions
;;;     REAL-CALLS	list of lambda-id's for "real" (not tail-recursive)
;;;		        calls
;;;     CODE-LABEL	label for start of function's code
;;;     $LAMBDA		$lambda expression for in-line compilation

(define ($LAMBDA? x) ($lambda? x))

(define ($LAMBDA-ID x) ($lambda-id x))

(define ($LAMBDA-BODY x) ($lambda-body x))

(define (SET-$LAMBDA-BODY! x body) (set-$lambda-body! x body))

(define (LAMBDA-REQVARS id) (lambda-reqvars id))

(define (SET-LAMBDA-REQVARS! id vars) (set-lambda-reqvars! id vars))

(define (LAMBDA-OPTVARS id) (lambda-optvars id))

(define (SET-LAMBDA-OPTVARS! id vars) (set-lambda-optvars! id vars))

(define (LAMBDA-LEXICAL id) (lambda-lexical id))

(define (SET-LAMBDA-LEXICAL! id lexvars) (set-lambda-lexical! id lexvars))

(define (LAMBDA-CALLS id) (lambda-calls id))

(define (SET-LAMBDA-CALLS! id x)  (set-lambda-calls! id x))

(define (LAMBDA-GENERATE id) (lambda-generate id))

(define (SET-LAMBDA-GENERATE! id x) (set-lambda-generate! id x))

(define (LAMBDA-CLOSED id) (lambda-closed id))

(define (SET-LAMBDA-CLOSED! id x) (set-lambda-closed! id x))

(define (LAMBDA-DISPLAY-CLOSEP id) (lambda-display-closep id))

(define (SET-LAMBDA-DISPLAY-CLOSEP! id x) (set-lambda-display-closep! id x))
    
(define (LAMBDA-NESTIN id) (lambda-nestin id))

(define (SET-LAMBDA-NESTIN! id nestin) (set-lambda-nestin! id nestin))

(define (LAMBDA-EXITS id) (lambda-exits id))

(define (SET-LAMBDA-EXITS! id exits) (set-lambda-exits! id exits))

(define (LAMBDA-INLINE-TAILS id) (lambda-inline-tails id))

(define (SET-LAMBDA-INLINE-TAILS! id tails)
    (set-lambda-inline-tails! id tails))
    
(define (LAMBDA-STR-CALLS id) (lambda-str-calls id))

(define (SET-LAMBDA-STR-CALLS! id x) (set-lambda-str-calls! id x))
    
(define (LAMBDA-TAIL-CALLS id) (lambda-tail-calls id))

(define (SET-LAMBDA-TAIL-CALLS! id x) (set-lambda-tail-calls! id x))
    
(define (LAMBDA-REAL-CALLS id) (lambda-real-calls id))

(define (SET-LAMBDA-REAL-CALLS! id x) (set-lambda-real-calls! id x))

(define (LAMBDA-CODE-LABEL id) (lambda-code-label id))

(define (SET-LAMBDA-CODE-LABEL! id x) (set-lambda-code-label! id x))
    
(define (LAMBDA-$LAMBDA id) (lambda-$lambda id))

(define (SET-LAMBDA-$LAMBDA! id exp) (set-lambda-$lambda! id exp))

(define (LAMBDA-NAME id) (lambda-name id))

(define (SET-LAMBDA-NAME! id x) (set-lambda-name! id x))
		    
;;; All information relating to lambda expressions can be dumped by the
;;; following function.  Note that the body is not printed as it is a little
;;; large.

(define (PRINT-LAMBDA-INFO id  . out)
    (if out (set! out (car out)) (set! out (current-output-port)))
    (format out " LAMBDA-NAME:  ~a ~a ~a~%" (lambda-name id) id
	    				    (id-printname (or (lambda-name id)
							      id)))
    (format out "        VARS:  ~a ~a~%"    (lambda-reqvars id)
    					    (lambda-optvars id))
    (format out "     LEXICAL:  ~a~%"	    (lambda-lexical id))
    (format out "       CALLS:  ~a~%"	    (lambda-calls id))
    (format out "    GENERATE:  ~a ~a ~a~%" (lambda-generate id)
	    				    (lambda-closed id)
					    (lambda-display-closep id))
    (format out "      NESTIN:  ~a~%"	    (lambda-nestin id))
    (format out "       EXITS:  ~a~%"       (lambda-exits id))
    (format out "INLINE-TAILS:  ~a~%"       (lambda-inline-tails id))
    (format out "   STR-CALLS:  ~a~%"       (lambda-str-calls id))
    (format out "  TAIL-CALLS:  ~a~%"       (lambda-tail-calls id))
    (format out "  REAL-CALLS:  ~a~%"	    (lambda-real-calls id))
    (format out "  CODE-LABEL:  ~a~%"       (lambda-code-label id)))
