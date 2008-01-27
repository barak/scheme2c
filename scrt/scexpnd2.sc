;;; This module contains the more macro expanders required by Scheme.

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
