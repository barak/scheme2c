;;; This file contains the "hard-wired" macros that are recognized by the
;;; compiler.  For the most part, they are "old-fashioned" macros and thus are
;;; invoked by the following function.
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

(module macros)

(define (OLD-MACRO expand)
    (lambda (exp exp-func) (exp-func (expand exp) exp-func)))

;;; (quasiquote x)  ==> ?
;;;
;;; Quasiquote expansion is done using the function built into the Scheme
;;; interpreter.  The result is then macro expanded.

(define (QUASIQUOTE-MACRO exp)
    (if (islist exp 2 2)
	(quasiquotation 1 exp)
	(expand-error 'quasiquote exp)))

;;; Derived expression types are expanded in this module using the rules
;;; given in section 7.3 of Revised**3.

;;; Conditional forms are expanded into if sequences.

(define (COND-MACRO exp)
    (let* ((clauses  (cdr exp))
	   (clause1  (and clauses (car clauses)))
	   (clause2+ (and clause1 (cdr clauses))))
	  (cond ((null? clause1)
		 #f)
		((or (not (pair? clause1)) (equal? clause1 '(else)))
		 (expand-error 'cond-clause exp))
		((null? (cdr clause1))
		 `(or ,(car clause1) (cond ,@clause2+)))
		((and (eq? (cadr clause1) '=>) (= (length clause1) 3))
		 (let ((test-result (string->uninterned-symbol "TEST")))
		      `(let ((,test-result ,(car clause1)))
			    (if ,test-result
				(,(caddr clause1) ,test-result)
				(cond ,@clause2+)))))
		((eq? (car clause1) 'else)
		 `(begin ,@(cdr clause1)))
		(else `(if ,(car clause1)
			   (begin ,@(cdr clause1))
			   (cond ,@clause2+))))))

(define (CASE-MACRO exp)
    (cond ((islist exp 3)
	   (do ((keyval (cadr exp))
		(key (make-alpha 'k))
		(cases (cddr exp) (cdr cases))
		(ccs '()))
	       ((or (not (pair? cases)) (not (islist (car cases) 2)))
		(cond (cases
		       (expand-error 'case exp))
		      (else
		       `(let ((,key ,keyval)) (cond ,@(reverse ccs))))))
	       (cond ((eq? (caar cases) 'else)
		      (set! ccs (cons (car cases) ccs)))
		     ((and (= (length (caar cases)) 1)
		           (not (float? (caaar cases))))
		      (set! ccs
			    (cons `((eq? ,key (quote ,(caaar cases)))
				    ,@(cdar cases))
				  ccs)))
		     ((= (length (caar cases)) 1)
		      (set! ccs
			    (cons `((eqv? ,key (quote ,(caaar cases)))
				    ,@(cdar cases))
				  ccs)))
		     (else
		      (set! ccs
			    (cons `((memv ,key (quote ,(caar cases)))
				    ,@(cdar cases))
				  ccs))))))
	  (else
	   (expand-error 'case exp))))

;;; Boolean expressions are expanded here.  Boolean expressions involving
;;; constants are simplified here to save time during transformations.

(define (AND-MACRO exp)
    (if (cdr exp)
	(let ((x (boolean-constant (cadr exp))))
	     (cond ((pair? x)
		    (if (car x)
			(if (cddr exp) `(and ,@(cddr exp)) (car x))
			(car x)))
		   ((null? (cddr exp)) (cadr exp))
		   (else (let ((y (boolean-constant `(and ,@(cddr exp)))))
			      (if (pair? y)
				  `(let ((x ,(cadr exp)))
					(if x ,(car y) x))
				  `(let ((x ,(cadr exp))
					 (thunk (lambda ()
							(and ,@(cddr exp)))))
					(if x (thunk) x)))))))
	#t))

(define (OR-MACRO exp)
    (if (cdr exp)
	(let ((x (boolean-constant (cadr exp))))
	     (cond ((pair? x)
		    (if (car x)
			(car x)
			(if (cddr exp) `(or ,@(cddr exp)) (car x))))
		   ((null? (cddr exp)) (cadr exp))
		   (else (let ((y (boolean-constant `(or ,@(cddr exp)))))
			      (if (pair? y)
				  `(let ((x ,(cadr exp)))
					(if x x ,(car y)))
				  `(let ((x ,(cadr exp))
					 (thunk (lambda () (or ,@(cddr exp)))))
					(if x x (thunk))))))))
	#f))

(define (NOT-MACRO exp)
    (if (islist exp 2 2)
	(let ((x (boolean-constant (cadr exp))))
	     (if (pair? x)
		 (if (car x) #f #t)
		 `(if ,(cadr exp) #f #t)))
	(expand-error 'not exp)))

;;; Boolean constant expressions are evaluated by the following function.  It
;;; returns (<constant-value>) when a boolean constant is found, or #f when
;;; one is not found.

(define (BOOLEAN-CONSTANT exp)
    (cond ((or (number? exp) (boolean? exp) (string? exp)
	       (and (pair? exp) (eq? (car exp) 'quote) (cadr exp)))
	   (list exp))
	  ((symbol? exp)
	   (let ((x (get exp 'macro)))
		(if (pair? x)
		    (boolean-constant (car x))
		    #f)))
	  ((pair? exp)
	   (case (car exp)
		 ((not) (boolean-constant (not-macro exp)))
		 ((and) (boolean-constant (and-macro exp)))
		 ((or)  (boolean-constant (or-macro exp)))
		 (else #f)))
	  (else #f)))
		    
;;; (begin expression ...)  ==>  ((lambda () expression ...))
;;;
;;; BEGIN becomes a let expression with no bindings.  Note the special case
;;; where a begin with only one expression simply becomes that expression.

(define (BEGIN-MACRO exp)
    (cond ((not (islist exp 2))	   (expand-error 'begin exp))
	  ((= (length exp) 2)	   (cadr exp))
	  (else			   `((lambda () ,@(cdr exp))))))

;;; (let ((var init)...) body)  ==>  ((lambda (var...) body) init...)
;;;
;;; (let () body)		==>  ((lambda X body))
;;;
;;; (let var ((v init) ...) body)  ==>
;;;				(let ((gv init) ....)
;;;				     (letrec ((var (lambda (v ...) body)))
;;;					     (var init ...)))
;;;
;;; LET is expanded into a lambda expression.  While this may make the
;;; resulting expanded code more difficult to read, later analysis is eased
;;; because there are fewer forms.  Variable order is retained to make the
;;; resulting tree easier to compare against the original tree.
;;;
;;; A LET with no variable bindings is expanded into a lambda expression that
;;; takes a variable number of arguments.  This is to differentiate it from
;;; a BEGIN as when a BEGIN appears at the top level, it is spliced into the
;;; input stream.
;;;
;;; A "named let" is expanded into the appropriate letrec expression.  That in
;;; turn is expanded into the appropriate lambda expression when the letrec
;;; is expanded.

(define (LET-MACRO exp)
    (cond ((and (islist exp 3) (islist (cadr exp) 0))
	   (do ((var-inits (cadr exp) (cdr var-inits))
		(vars      '())
		(inits     '()))
	       ((or (not (pair? var-inits))
		    (not (islist (car var-inits) 2 2))
		    (not (symbol? (caar var-inits))))
		(if var-inits
		    (expand-error 'let exp)
		    `((lambda ,(if (null? vars)
				   (string->uninterned-symbol "x")
				   (reverse vars))
			      ,@(cddr exp))
		      ,@(reverse inits))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! inits (cons (cadar var-inits) inits))))
	  ((and (islist exp 4) (symbol? (cadr exp)))
	   (do ((var-inits (caddr exp) (cdr var-inits))
		(gvx	   0 (+ gvx 1))
		(gvs	   '())
		(vars      '())
		(inits     '()))
	       ((or (not (pair? var-inits))
		    (not (islist (car var-inits) 2 2))
		    (not (symbol? (caar var-inits))))
		(if var-inits
		    (expand-error 'let exp)
		    `(let ,(reverse inits)
			  (letrec ((,(cadr exp)
				    (lambda ,(reverse vars) ,@(cdddr exp))))
				  (,(cadr exp) ,@(reverse gvs))))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! gvs (cons (string->uninterned-symbol (format "$_~s" gvx))
			       gvs))
	       (set! inits (cons (list (car gvs) (cadar var-inits)) inits))))
	  (else (expand-error 'let exp))))

;;; (let* ((var init)...) body)  ==>  ((lambda (var)
;;;					       ((lambda (var) body) init))
;;;				       init)
;;;
;;; LET* is expanded into a set of nested lambda expressions.  While this may
;;; make the resulting code more difficult to read, later analysis is eased
;;; because there fewer types of forms to analyze.

(define (LET*-MACRO exp)
    (cond ((and (islist exp 3) (islist (cadr exp) 1))
	   (do ((var-inits (cadr exp) (cdr var-inits))
		(vars      '())
		(inits     '()))
	       ((or (not (pair? var-inits))
		    (not (islist (car var-inits) 2 2))
		    (not (symbol? (caar var-inits))))
		(if var-inits
		    (expand-error 'let* exp)
		    (car (let*-result vars inits (cddr exp)))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! inits (cons (cadar var-inits) inits))))
	  ((and (islist exp 3) (null? (cadr exp)))
	   `((lambda () ,@(cddr exp))))
	  (else	(expand-error 'let* exp))))

(define (LET*-RESULT vars inits body)
    (cond ((null? vars) body)
	  (else
	   (let*-result (cdr vars) (cdr inits)
	       `(((lambda (,(car vars)) ,@body) ,(car inits)))))))

;;; (letrec ((var init)...) body)  ==>  ((lambda (var...)
;;;						 (set! var init) ...)
;;;						 (begin body ...))
;;;					 undefined ...)
;;;
;;; LETREC is expanded into a lambda expression which first binds the vars to
;;; some undefined value and then evalutes the initialization expressions
;;; within the lambda expression.  Note that the order of evaluation is
;;; undefined.

(define (LETREC-MACRO exp)
    (cond ((and (islist exp 3) (islist (cadr exp) 1))
	   (do ((var-inits (cadr exp) (cdr var-inits))
		(vars      '())
		(inits     '())
		(sets      '()))
	       ((or (not (pair? var-inits))
		    (not (islist (car var-inits) 2 2))
		    (not (symbol? (caar var-inits))))
		(if var-inits
		    (expand-error 'letrec exp)
		    `((lambda ,(reverse vars)
			      ,@(reverse sets)
			      (begin ,@(cddr exp)))
		      ,@(reverse inits))))
	       (let ((var (caar var-inits))
		     (init (cadar var-inits)))
		    (if (or (number? init)
			    (string? init)
			    (char? init)
			    (memq init '(#t #f))
			    (and (pair? init) (eq? (car init) 'quote)))
			(set! inits (cons init inits))
			(begin (set! inits (cons 0 inits))
			       (set! sets (cons `(set! ,var ,init) sets))))
		    (set! vars (cons var vars)))))
	  ((and (islist exp 3) (null? (cadr exp)))
	   `((lambda () ,@(cddr exp))))
	  (else	(expand-error 'letrec exp))))

;;; (do ((v1 i1 s1) ...) (test sequence) body ...)  ==>  (letrec ...)
;;;
;;; Expands a DO form into the corresponding letrec form.

(define  (DO-MACRO exp)
    (cond ((and (islist exp 3) (islist (cadr exp) 0) (islist (caddr exp) 1))
	   (let ((let-bindings  (cadr exp))
		 (vars 		'())
		 (inits 	'())
		 (steps 	'())
		 (loop		(string->uninterned-symbol "DOLOOP"))
		 (test	     	(caaddr exp))
		 (sequence      (or (cdaddr exp) '(#f)))
		 (body	     	(cdddr exp)))
		(for-each
		    (lambda (var-init-step)
			    (if (islist var-init-step 2 3)
				(let* ((var (car var-init-step))
				       (init (cadr var-init-step))
				       (step (if (cddr var-init-step)
						 (caddr var-init-step)
						 var)))
				      (set! vars (cons var vars))
				      (set! steps (cons step steps))
				      (set! inits (cons init inits)))
				(expand-error 'do var-init-step)))
		    (reverse let-bindings))
		`(letrec ((,loop (lambda ,vars
					 (if ,test
					     (begin ,@sequence)
					     (begin ,@body
						    (,loop ,@steps))))))
			 (,loop ,@inits))))
	  (else
	       (expand-error 'do exp))))

;;; The forms QUOTE, INCLUDE, DEFINE-EXTERNAL and MODULE should not be
;;; expanded.  This is done by having them use the following macro.

(define (QUOTE-MACRO form expander) form)

;;; The form DEFINE is expanded by the following.  Poorly formed
;;; expressions will be ignored for now, and picked up later when the
;;; form is evaluated.  Lambda variable lists are checked for duplicates.

(define (DEFINE-MACRO form expander)
    (if (islist form 3)
	(begin (cond ((symbol? (cadr form))
		      (set! current-define-name (cadr form)))
		     ((and (pair? (cadr form)) (symbol? (caadr form)))
		      (set! current-define-name (caadr form))
		      (duplicate-lambda-vars (cdadr form))))
	       (cons* (car form)
		      (cadr form)
		      (map (lambda (x) (expander x expander)) (cddr form))))
	form))

;;; The form LAMBDA is expanded by the following.  Poorly formed
;;; expressions will be ignored for now, and picked up later when the
;;; form is evaluated.  Variable lists are checked for duplicates.

(define (LAMBDA-MACRO form expander)
    (if (islist form 3)
	(begin (duplicate-lambda-vars (cadr form))
	       (cons* (car form)
		      (cadr form)
		      (map (lambda (x) (expander x expander)) (cddr form))))
	form))

;;; The following function checks lambda expression argument lists for
;;; duplicate or illegal variable names.

(define (DUPLICATE-LAMBDA-VARS vl)
    (let loop ((vl vl) (seen '()))
	 (if (not (null? vl))
	     (let ((var (if (pair? vl) (car vl) vl)))
		  (if (not (symbol? var))
		      (report-error "Argument must be a symbol:" var))
		  (if (memq var seen)
		      (report-error "Duplicately defined symbol:" var))
		  (if (pair? vl) (loop (cdr vl) (cons var seen)))))))

;;; The form DEFINE-MACRO is evaluated at macro expansion time as later macro
;;; expansion may wish to use it.

(define (DEFINE-MACRO-MACRO form expander)
    (do-define-macro form)
    form)

;;; The form DEFINE-CONSTANT is evaluated at macro expansion time as later
;;; macro expansion may wish to use it.

(define (DEFINE-CONSTANT-MACRO form expander)
    (do-define-constant form)
    form)
	
;;; The form EVAL-WHEN is used to provide conditional evaluation in
;;; various environments.
;;;
;;; (EVAL-WHEN situation form ...) ==> (begin form ...)
;;;				   ==> #f
;;;
;;; where situation is a list of any of COMPILE, EVAL, or LOAD.

(define (EVAL-WHEN-MACRO form expander)
    (if (and (islist form 3) (islist (cadr form) 1))
	(cond ((and (memq 'compile (cadr form)) (not (memq 'load (cadr form))))
	       form)
	      ((memq 'load (cadr form))
	       (let ((save-define-macro (get 'define-macro 'macro))
		     (save-define-constant (get 'define-constant 'macro)))
		    (put 'define-macro 'macro
			 (lambda (form expander)
				 (expander `(putprop ',(cadr form)
						'*expander*
						,(caddr form))
				     expander)))
		    (put 'define-constant 'macro
			 (lambda (form expander)
				 (expander `(putprop ',(cadr form)
						'*expander*
						(list ,(caddr form)))
				     expander)))
		    (expander
			`(begin ,@(cddr form)
				(eval-when (compile)
				    (put 'define-macro 'macro
					 ',save-define-macro)
				    (put 'define-constant 'macro
					 ',save-define-constant))
				,@(if (memq 'compile (cadr form))
				      `((eval-when (compile) ,@(cddr form)))
				      '()))
			expander))))
	(expand-error 'EVAL-WHEN form)))

;;; (WHEN test exp ...)  ==>  (if test (begin exp ...))

(define (WHEN-MACRO exp)
    (if (islist exp 3)
        `(if ,(cadr exp) (begin ,@(cddr exp)))
        (expand-error 'WHEN exp)))

;;; (UNLESS test exp ...)  ==>  (if (not test) (begin exp ...))

(define (UNLESS-MACRO exp)
    (if (islist exp 3)
        `(if (not ,(cadr exp)) (begin ,@(cddr exp)))
        (expand-error 'UNLESS exp)))

;;; LAP and LAP? expressions have their constants expanded by these functions.

(define (LAP-MACRO form expander)
    (if (islist form 3)
	(cons* (car form)
	       (cadr form)
	       (lap-constant-expand (cddr form) lap-constant-expand))
	(expand-error (car form) form)))

(define (LAP-CONSTANT-EXPAND x e)
    ((cond ((pair? x)   *sc-application-expander*)
	   ((symbol? x) *sc-identifier-expander*)
	   (else           (lambda (x e) x)))
     x e))
