;;; The functions in this module implement QUASIQUOTE as defined in section
;;; 7.1.4 of Revised**4.

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

(module scqquote (top-level QUASIQUOTATION))

(include "repdef.sc")

(define (QUASIQUOTATION d exp)
    (if (islist exp 2 2)
	(template d (cadr exp))
	(error 'quasiquote "Illegal form: ~s" exp)))

(define (TEMPLATE d exp)
    (cond ((zero? d)
	   exp)
	  ((and (pair? exp) (eq? (car exp) 'unquote))
	   (if (islist exp 2 2)
	       (if (eq? d 1)
		   (template (- d 1) (cadr exp))
		   (list 'list ''unquote (template (- d 1) (cadr exp))))
	       (error 'unquote "Illegal form: ~s" (cadr exp))))
	  ((vector? exp)
	   (vector-template d exp))
	  ((pair? exp)
	   (list-template d exp))
	  ((or (char? exp) (number? exp) (string? exp))
	   exp)
	  (else
	   (list 'quote exp))))

(define (LIST-TEMPLATE d exp)
    (cond ((and (islist exp 2 2) (eq? (car exp) 'quote) (pair? (cadr exp))
		(eq? (caadr exp) 'quasiquote))
	   (quasiquotation d (cadr exp)))
	  ((eq? (car exp) 'quasiquote)
	   (if (eq? d 0)
	       (quasiquotation (+ d 1) exp)
	       (list 'list ''quasiquote (quasiquotation (+ d 1) exp))))
	  (else (cons 'cons* (template-or-splice-list d exp)))))

(define (VECTOR-TEMPLATE d exp)
    (list 'list->vector
	  (cons 'cons* (template-or-splice-list d (vector->list exp)))))

(define (TEMPLATE-OR-SPLICE-LIST d exp)
    (cond ((null? exp) '('()))
	  ((pair? exp)
	   (cond ((eq? (car exp) 'unquote)
		  (list (template d exp)))
		 ((and (pair? (car exp)) (eq? (caar exp) 'unquote-splicing))
		  (list (list 'append
			      (template-or-splice d (car exp))
			      (cons 'cons*
				    (template-or-splice-list d (cdr exp))))))
		 (else (cons (template-or-splice d (car exp))
			     (template-or-splice-list d (cdr exp))))))
	  (else (list (template-or-splice d exp)))))

(define (TEMPLATE-OR-SPLICE d exp)
    (if (and (pair? exp) (eq? (car exp) 'unquote-splicing))
	(if (islist exp 2 2)
	    (if (eq? d 1)
		(template (- d 1) (cadr exp))
		(list 'list (list 'list ''unquote-splicing
				  (template (- d 1) (cadr exp)))))
	    (error 'unquote-splicing "Illegal form: ~s" exp))
	(template d exp)))

(install-expander 'QUASIQUOTE (lambda (x e) (e (quasiquotation 1 x) e)))
