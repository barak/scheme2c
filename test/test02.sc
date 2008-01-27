;;;
;;; Test functions for basic Scheme functions.
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

(module test02)
   
(define-external (chk testnum result expected) testchk)

(define (test02)

    ;;; 6.2  Equivalence Predicates

    (let  ((list4 (list 4 3 2 1))
	   (vector4 (vector 4 3 2 1)))

	  (chk 41 (eqv? "" "") #t)
	  (chk 42 (eqv? "" "") #t)
	  (chk 43 (eqv? '() '()) #t)
	  (chk 44 (eqv? '#() '#()) #t)
	  (chk 45 (eqv? (car list4) (car list4)) #t)
	  (chk 46 (eqv? list4 list4) #t)
	  (chk 47 (eqv? vector4 vector4) #t)
	  (chk 48 (eqv? 1 1) #t)
	  (chk 49 (eqv? 1.5 1.5) #t)
	  (chk 50 (eqv? 1.5 (+ 1.0  0.5)) #t)
	  (chk 51 (eqv? list4 (list 4 3 2 1)) #f)
	  (chk 52 (eqv? vector4 (vector 4 3 2 1)) #f)
	  (chk 53 (eqv? 'x 'x) #t)

	  (chk 61 (eq? "" "") #t)
	  (chk 62 (eq? "" "") #t)
	  (chk 63 (eq? '() '()) #t)
	  (chk 64 (eq? '#() '#()) #t)
	  (chk 65 (eq? (car list4) (car list4)) #t)
	  (chk 66 (eq? list4 list4) #t)
	  (chk 67 (eq? vector4 vector4) #t)
	  (chk 68 (eq? 1 1) #t)
	  (chk 69 (eq? 1.5 (+ 1.0 0.5)) #f)
	  (chk 70 (eq? list4 (list 4 3 2 1)) #f)
	  (chk 71 (eq? vector4 (vector 4 3 2 1)) #f)
	  (chk 72 (eq? 'x 'x) #t)

	  (chk 81 (equal? "" "") #t)
	  (chk 82 (equal? "" "") #t)
	  (chk 83 (equal? '() '()) #t)
	  (chk 84 (equal? '#() '#()) #t)
	  (chk 85 (equal? (car list4) (car list4)) #t)
	  (chk 86 (equal? list4 list4) #t)
	  (chk 87 (equal? vector4 vector4) #t)
	  (chk 88 (equal? 1 1) #t)
	  (chk 89 (equal? 1.5 1.5) #t)
	  (chk 90 (equal? 1.5 (+ 1.0 0.5)) #t)
	  (chk 91 (equal? list4 (list 4 3 2 1)) #t)
	  (chk 92 (equal? vector4 (vector 4 3 2 1)) #t)
	  (chk 93 (equal? 'x 'x) #t)
	  (chk 93 (equal? (list (list 1 2) (list 3 4)) '((1 2) (3 4))) #t)
	  (chk 94 (equal? (list (list 1 1) (list 3 4)) '((1 2) (3 4))) #f)))
