;;; The functions in this module implement QUASIQUOTE as defined in section
;;; 7.1.4 of Revised**4.

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
