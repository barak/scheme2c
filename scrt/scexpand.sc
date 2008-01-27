;;; Macro expansion is done by this module.  It is based upon the ideas in
;;; "Expansion-Passing Style: Beyond Conventional Macros", 1986 ACM Conference
;;; on Lisp and Functional Programming.

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

(module scexpand)

(include "repdef.sc")

(define (EXPAND x) (initial-expander x initial-expander))

(define (INITIAL-EXPANDER x e)
    (let ((e1 (cond ((symbol? x) *identifier-expander*)
		    ((not (pair? x)) (lambda (x e) x))
		    ((procedure? (expander? (car x))) (expander (car x)))
		    (else *application-expander*))))
	 (e1 x e)))

(define (EXPAND-ONCE x) (initial-expander x (lambda (x e) x)))

(define (*IDENTIFIER-EXPANDER* x e)
    (let ((constant (expander x)))
         (if (pair? constant) (car constant) x)))

(define (*APPLICATION-EXPANDER* x e) (map (lambda (x) (e x e)) x))

(define (INSTALL-EXPANDER keyword function)
    (putprop keyword '*expander* function)
    keyword)

(define (EXPANDER? x)
    (and (symbol? x) (getprop x '*expander*)))

(define (EXPANDER x)
    (getprop x '*expander*))

;;; The following function tests an expression to verify that it is a list
;;; of a certain minimum length.  Optionally a maximum length will also be
;;; checked.

(define (ISLIST l min . max)
    (do ((len 0 (+ len 1))
	 (l l (cdr l)))
	((not (pair? l))
	 (and (null? l) (>= len min) (or (null? max) (<= len (car max)))))))
