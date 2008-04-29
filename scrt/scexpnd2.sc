;;; This module contains the more macro expanders required by Scheme.

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

(module scexpnd2 (top-level))

(include "repdef.sc")

;;; (let ((var init)...) body)  ==>  ((lambda (var...) body) init...)
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
		    (error 'let "Illegal form: ~s" exp)
		    `((lambda ,(reverse vars) ,@(cddr exp))
		      ,@(reverse inits))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! inits (cons (cadar var-inits) inits))))
	  ((and (islist exp 4) (symbol? (cadr exp)))
	   (do ((var-inits (caddr exp) (cdr var-inits))
		(gvx       0 (+ gvx 1))
		(gvs       '())
		(vars      '())
		(inits     '()))
	       ((or (not (pair? var-inits))
		    (not (islist (car var-inits) 2 2))
		    (not (symbol? (caar var-inits))))
		(if var-inits
		    (error 'let "Illegal form: ~s" exp)
		    `(let ,(reverse inits)
			  (letrec ((,(cadr exp)
				    (lambda ,(reverse vars) ,@(cdddr exp))))
				  (,(cadr exp) ,@(reverse gvs))))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! gvs (cons (string->uninterned-symbol (format "$_~s" gvx))
			       gvs))
	       (set! inits (cons (list (car gvs) (cadar var-inits)) inits))))
	  (else (error 'let "Illegal form: ~s" exp))))

(install-expander 'LET (lambda (x e) (e (let-macro x) e)))

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
		    (error 'let* "Illegal form: ~s" exp)
		    (car (let*-result vars inits (cddr exp)))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! inits (cons (cadar var-inits) inits))))
	  ((and (islist exp 3) (null? (cadr exp)))
	   `((lambda () ,@(cddr exp))))
	  (else	(error 'let* "Illegal form: ~s" exp))))

(install-expander 'LET* (lambda (x e) (e (let*-macro x) e)))

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
		(sets      '()))
	       ((or (not (pair? var-inits))
		    (not (islist (car var-inits) 2 2))
		    (not (symbol? (caar var-inits))))
		(if var-inits
		    (error 'letrec "Illegal form: ~s" exp)
		    `((lambda ,(reverse vars)
			      ,@(reverse sets)
			      (begin ,@(cddr exp)))
		      ,@(map (lambda (v) 0) vars))))
	       (set! vars (cons (caar var-inits) vars))
	       (set! sets (cons `(set! ,@(car var-inits)) sets))))
	  ((and (islist exp 3) (null? (cadr exp)))
	   `((lambda () ,@(cddr exp))))
	  (else	(error 'letrec "Illegal form: ~s" exp))))

(install-expander 'LETREC (lambda (x e) (e (letrec-macro x) e)))

;;; (do ((v1 i1 s1) ...) (test sequence) body ...)  ==>  (letrec ...)
;;;
;;; Expands a DO form into the corresponding letrec form.

(define  (DO-MACRO exp)
    (cond ((and (islist exp 3) (islist (cadr exp) 0) (islist (caddr exp) 1))
	   (let ((let-bindings  (cadr exp))
		 (vars 		'())
		 (inits 	'())
		 (steps 	'())
		 (loop		(string->uninterned-symbol "doloop"))
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
				(error 'do "Illegal form:" var-init-step)))
		    (reverse let-bindings))
		`(letrec ((,loop (lambda ,vars
					 (if ,test
					     (begin ,@sequence)
					     (begin ,@body
						    (,loop ,@steps))))))
			 (,loop ,@inits))))
	  (else (error 'do "Illegal form: ~s" 'exp))))

(install-expander 'DO (lambda (x e) (e (do-macro x) e)))

;;; Dummy macro definitions for module and include forms.

(install-expander
    'MODULE
    (lambda (x e) (e '(quote (module *ignored*)) e)))

(install-expander
    'INCLUDE
    (lambda (x e) (e '(quote (include *ignored*)) e)))
