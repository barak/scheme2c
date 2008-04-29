;;;
;;; Test functions for basic Scheme functions.
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
