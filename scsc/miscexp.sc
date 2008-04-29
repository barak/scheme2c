;;; The functions in this file expand those special forms which don't require
;;; gobs of code.  The global variables that are visible outside this module
;;; include:
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

(module miscexp)

;;; External and in-line definitions.

(include "plist.sch")
(include "miscexp.sch")

(define QUOTE-CONSTANTS '())	; A-list for constants.

;;; Find a constant of the right type in QUOTE-CONSTANTS.

(define (FIND-QUOTE-CONSTANT constant type)
    (let loop ((l quote-constants))
	 (if (pair? l)
	     (let* ((const-var (car l))
		    (const (car const-var))
		    (var (cadr const-var)))
		   (if (and (equal? const constant) (eq? (id-use var) type))
		       var
		       (loop (cdr l))))
	     #f)))

;;; (f a b c)  ==>  ($call tail-call f' a' b' c')
;;;
;;; Expands a function call, where x' denotes x expanded by exp-func.  The
;;; tail-call flag is set later on calls that could be tail recursive.
;;; Functions with are lambda expressions with optional arguments require
;;; special processing.  This is done so TRANSFORM will only have to transform
;;; calls to lambda expressions with a fixed number of elements.  Lambda
;;; variables which are bound to functions are also noted here.

(define (CALL-EXP exp exp-func)
    (let* ((call  (exp-func (car exp) exp-func))
	   (id    (if ($lambda? call) ($lambda-id call) #f)))
	  (cond (id
		   (do ((vals (cdr exp) (cdr vals))
			(vars (lambda-reqvars id) (cdr vars))
			(opt  (lambda-optvars id))
			(newvars '())
			(newvals '())
			(const-bnd '()))
		       ((or (null? vars) (not (pair? vals)))
			(if const-bnd
			    (letrec-lambdas const-bnd ($lambda-body call)))
			(cond ((and (null? opt) (null? vals) (null? vars))
			       `($call () ,call ,@(reverse newvals)))
			      ((and opt (islist vals 0))
			       (set-lambda-reqvars! id
				   (reverse (cons (car opt) newvars)))
			       (set-lambda-optvars! id '())
			       `($call () ,call
				       ,@(reverse newvals)
				       ,(exp-form (call-exp-cons vals)
					    exp-func)))
			      (else (expand-error 'call exp))))
		       (let ((var (car vars))
			     (val (exp-func (car vals) exp-func)))
			    (set! newvars (cons var newvars))
			    (set! newvals (cons val newvals))
			    (if (and (symbol? val)
				     (eq? (id-use val) 'constant))
				(set! const-bnd (cons var const-bnd)))
			    (if (and ($lambda? val) (not (id-set! var)))
				(name-a-lambda var val)))))
		(else
		     (set! exp (cons call (exp-form-list (cdr exp) exp-func)))
		     `($call () ,@exp)))))

(define (LETREC-LAMBDAS vars exps)
    (if (pair? exps)
	(let ((var ($set-id (car exps)))
	      (val ($set-exp (car exps))))
	     (if (memq var vars)
		 (begin (if (and ($lambda? val) (eq? (id-set! var) 1))
			    (name-a-lambda var val))
			(letrec-lambdas vars (cdr exps)))))))

(define (CALL-EXP-CONS vals)
    (cond (vals `(cons ,(car vals) ,(call-exp-cons (cdr vals))))
	  (else ''())))

(define ($CALL? x) ($call? x))

(define ($CALL-TAIL x) ($call-tail x))

(define (SET-$CALL-TAIL! x v) (set-$call-tail! x v))

(define ($CALL-FUNC x) ($call-func x))

(define (SET-$CALL-FUNC! x f) (set-$call-func! x f))

(define ($CALL-ARGL x) ($call-argl x))

(define (SET-$CALL-ARGL! x al) (SET-$CALL-ARGL! x al))

;;; The special form LAP allows the definition of "inline" C code.  An inline
;;; function is called by:
;;;
;;;	((lap (vars ... ) <lap code> ...) args ...)
;;;
;;; The arguments will be evaluated and then the values are substituted for
;;; the variables in the lap code.  The form returns a tagged scheme pointer
;;; as its value.
;;;
;;; Unless the <lap code> contains the macro SET, then it is assumed that the
;;; code does not change any cells.  The macro BOOLEAN converts a C boolean
;;; into a Scheme boolean.  When it is the outermost form, it allows some
;;; optimizing transforms.

(define (LAP-EXP exp exp-func)
    (if (and (islist exp 3) (islist (cadr exp) 0))
	(let* ((vars (cadr exp))
	       (body (cddr exp))
	       (set  (let loop ((exp body))
			  (cond ((and (pair? exp) (eq? (car exp) 'set))
				 #t)
				((pair? exp)
				 (or (loop (car exp)) (loop (cdr exp))))
				(else #f)))))
	      `($lap ,(cond (set 'set)
			    ((and (= (length body) 1)
				  (pair? (car body))
				  (eq? (caar body) 'boolean))
			     'boolean)
			    (else 'read-only))
		     ,vars
		     ,@body))
	(expand-error (car exp) exp)))

(define ($LAP? x) ($lap? x))

(define ($LAP-TYPE x) ($lap-type x))

(define ($LAP-VARS x) ($lap-vars x))

(define ($LAP-BODY x) ($lap-body x))

(define (SET-$LAP-BODY! exp body) (set-$lap-body! exp body))

;;; (quote x)  ==>  const_<id>
;;;
;;; Quoted objects become constant variables.  Multiple occurences of the same
;;; object will share the same variable.  Note that some constants are
;;; globally defined so they get turned into a reference to that external
;;; variable.

(define (QUOTE-EXP exp exp-func)
    (if (islist exp 2 2)
	(let* ((const (cadr exp))
	       (var (find-quote-constant const 'constant)))
	      (cond (var var) 
		    ((eq? const '#t) true-alpha)
		    ((eq? const '()) empty-list-alpha)
		    ((eq? const '#f) false-alpha)
		    ((equal? const "") (bound '$_empty-string))
		    ((equal? const '#()) (bound '$_empty-vector))
		    (else
			 (let ((var (newv 'c 'use 'constant 'value const)))
			      (set! quote-constants
				    (cons (list const var) quote-constants))
			      var))))
	(expand-error 'quote exp)))

;;; (set! x y)  ==>  ($set 'x 'y)
;;;
;;; Covert the arguments, set! is retained as a special form.

(define (SET!-EXP exp exp-func)
    (if (and (islist exp 3 3) (symbol? (cadr exp)))
	(let ((var (exp-func (cadr exp) exp-func))
	      (value (exp-func (caddr exp) exp-func)))
	     (set-id-set!! var (if (id-set! var) (+ 1 (id-set! var)) 1))
	     `($set ,var ,value))  
	(expand-error 'set exp)))

(define ($SET? x) ($SET? x))

(define ($SET-ID x) ($SET-ID x))

(define ($SET-EXP x) ($SET-EXP x))

(define (SET-$SET-EXP! x e) (SET-$SET-EXP! x e))

;;; (if a b [ c ])  ==>  ($if a' b' c')
;;;		    ==>  b'
;;;		    ==>	 c'
;;;
;;; Convert the arguments, if is retained as a special form.  If the test
;;; turns out to be a constant expression, then only the appropriate leg of
;;; the if will be expanded and retained.

(define (IF-EXP exp exp-func)
    (cond ((islist exp 3 4)
	   (let ((test (exp-func (cadr exp) exp-func))
		 (true (caddr exp))
		 (false (if (cdddr exp) (cadddr exp) #f)))
		(cond ((and (symbol? test) (eq? (id-use test) 'constant))
		       (if (id-value test)
			   (exp-func true exp-func)
			   (exp-func false exp-func)))
		      (else `($if ,test
				  ,(exp-func true exp-func)
				  ,(exp-func false exp-func))))))
	  (else (expand-error 'if exp))))

(define ($IF? x) ($if? x))

(define ($IF-TEST x)($if-test x))

(define (SET-$IF-TEST! x test) (set-$if-test! x test))

(define ($IF-TRUE x) ($if-true x))

(define (SET-$IF-TRUE! x v)(set-$if-true! x v))

(define ($IF-FALSE x) ($if-false x))

(define (SET-$IF-FALSE! x v) (set-$if-false! x v))

;;; Defines come in two flavors:
;;;
;;; (define (f x y ...) body ... )	defines a function.
;;; (define f body)			defines a top-level variable.
;;;
;;; The first is converted to a lambda expression and then processed.  The
;;; second processed as is.  All forms end up as: ($define id body).

(define (DEFINE-EXP exp exp-func)
    (if (and (islist exp 3)
	     (or (symbol? (cadr exp))
		 (and (pair? (cadr exp)) (symbol? (caadr exp)))))
	(let* ((name   (cadr exp))
	       (body   (cddr exp))
	       (var    (if (pair? name) (car name) name)))
	      (set! current-define-name var)
	      (set! var
		    (newv var 'use 'global 'module module-name 'defined #t))
	      (assign-known-name var)
	      (if (pair? name)
		  `($define ,var
		       ,(exp-func `(lambda ,(cdr name) ,@body) exp-func))
		  `($define ,var ,(exp-func (car body) exp-func))))
	(expand-error 'define exp)))

(define ($DEFINE? x) ($define? x))

(define ($DEFINE-ID x) ($define-id x))

(define ($DEFINE-EXP x) ($define-exp x))

(define (SET-$DEFINE-EXP! x e) (set-$define-exp! x e))
