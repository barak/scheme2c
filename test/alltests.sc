;;; Test driver.
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

(module test
    (main test)
    (with test01 test02 test03 test04 test05
	  test06 test07 test08 test09 test10
	  test11 test12 test13 test14 test15
	  test16 test17 test18 test19 test20
	  test21 test22 test23))

(define-external TEST-ERRORS testchk)

(define (TEST)
    (set! test-errors 0)
    (format #t "***** Begin Scheme->C Tests *****~%")
    (format #t "test01:~%")
    (test01)
    (format #t "test02:~%")
    (test02)
    (format #t "test03:~%")
    (test03)
    (format #t "test04:~%")
    (test04)
    (format #t "test05:~%")
    (test05)
    (format #t "test06:~%")
    (test06)
    (format #t "test07:~%")
    (test07)
    (format #t "test08:~%")
    (test08)
    (format #t "test09:~%")
    (test09)
    (format #t "test10:~%")
    (test10)
    (format #t "test11:~%")
    (test11)
    (format #t "test12:~%")
    (test12)
    (format #t "test13:~%")
    (test13)
    (format #t "test14:~%")
    (test14)
    (format #t "test15:~%")
    (test15)
    (format #t "test16:~%")
    (test16)
    (format #t "test17:~%")
    (test17)
    (format #t "test18:~%")
    (test18)
    (format #t "test19:~%")
    (test19)
    (format #t "test20:~%")
    (test20)
    (format #t "test21:~%")
    (test21)
    (format #t "test22:~%")
    (test22)
    (format #t "test23:~%")
    (test23)
    (format #t "***** End Scheme->C Tests  ~a Errors *****~%" test-errors))

(define (LOAD-TESTS)
    (load "testchk.sc")
    (load "test01.sc")
    (load "test02.sc")
    (load "test03.sc")
    (load "test04.sc")
    (load "test05.sc")
    (load "test06.sc")
    (load "test07.sc")
    (load "test08.sc")
    (load "test09.sc")
    (load "test10.sc")
    (load "test11.sc")
    (load "test12.sc")
    (load "test13.sc")
    (load "test14.sc")
    (load "test15.sc")
    (load "test16.sc")
    (load "test17.sc")
    (load "test18.sc")
    (load "test19.sc")
    (load "test20.sc")
    (load "test21.sc")
    (load "test22.sc")
    (load "test23.sc")
)
;;; Test driver checking functions.


(module testchk)

(define TEST-ERRORS 0)

(define *ACCURACY* 1.0e-7)

(define (CHK test result expected)
    (unless (or (equal? result expected)
		(and (%record? result)
		     (%record expected)
		     (equal? (%record->list result) (%record->list expected)))
		(and (number? expected)
		     (number? result)
		     (inexact? expected)
		     (<= (abs (- expected result))
			 (* (abs expected) *accuracy*))))
	    (format stdout-port "     Test ~a failed~%" test)
	    (format stdout-port "          expected = ~s~%" expected)
	    (format stdout-port "            result = ~s~%" result)
	    (set! test-errors (+ test-errors 1))))

(define (CHKQ test result expected)
    (unless (eq? result expected)
	    (format stdout-port "     Test ~a failed~%" test)
	    (format stdout-port "          expected = ~s~%" expected)
	    (format stdout-port "            result = ~s~%" result)
	    (set! test-errors (+ test-errors 1))))
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test01)

(define-external (chk testnum result expected) testchk)

(define (test01)
       
    ;;; 6.1  Booleans
     
    (chk 01 (boolean? '()) #f)
    (chk 02 (boolean? '#()) #f)
    (chk 03 (boolean? '(1 2)) #f)
    (chk 04 (boolean? '#(1 2)) #f)
    (chk 05 (boolean? 'x) #f)
    (chk 06 (boolean? "x") #f)
    (chk 07 (boolean? '#\a) #f)
    (chk 08 (boolean? (lambda (x) x)) #f)
    (chk 09 (boolean? #f) #t)
    (chk 10 (boolean? #t) #t)
    (chk 11 (boolean? -1) #f)
    (chk 12 (boolean? 0) #f)
    (chk 13 (boolean? 1) #f)
    (chk 14 (boolean? -1.5) #f)
    (chk 15 (boolean? 0.0) #f)
    (chk 16 (boolean? 1.5) #f)
   
    (chk 21 (not '()) #t)
    (chk 22 (not '#()) #f)
    (chk 23 (not '(1 2)) #f)
    (chk 24 (not '#(1 2)) #f)
    (chk 25 (not 'x) #f)
    (chk 26 (not "x") #f)
    (chk 27 (not '#\a) #f)
    (chk 28 (not (lambda (x) x)) #f)
    (chk 29 (not #f) #t)
    (chk 30 (not #t) #f)
    (chk 31 (not -1) #f)
    (chk 32 (not 0) #f)
    (chk 33 (not 1) #f)
    (chk 34 (not -1.5) #f)
    (chk 35 (not 0.0) #f)
    (chk 36 (not 1.5) #f))
;;;
;;; Test functions for basic Scheme functions.
;;;


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
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test03)

(define-external (chk testnum result expected) testchk)

(define (test03)

    ;;; 6.3  Pairs and Lists
    
    (chk 101 (pair? '()) #f)
    (chk 102 (pair? '#()) #f)
    (chk 103 (pair? '(1 2)) #t)
    (chk 104 (pair? '#(1 2)) #f)
    (chk 105 (pair? 'x) #f)
    (chk 106 (pair? "x") #f)
    (chk 107 (pair? '#\a) #f)
    (chk 108 (pair? (lambda (x) x)) #f)
    (chk 109 (pair? #f) #f)
    (chk 110 (pair? #t) #f)
    (chk 111 (pair? -1) #f)
    (chk 112 (pair? 0) #f)
    (chk 113 (pair? 1) #f)
    (chk 114 (pair? -1.5) #f)
    (chk 115 (pair? 0.0) #f)
    (chk 116 (pair? 1.5) #f)

    (chk 121 (null? '()) #t)
    (chk 122 (null? '#()) #f)
    (chk 123 (null? '(1 2)) #f)
    (chk 124 (null? '#(1 2)) #f)
    (chk 125 (null? 'x) #f)
    (chk 126 (null? "x") #f)
    (chk 127 (null? '#\a) #f)
    (chk 128 (null? (lambda (x) x)) #f)
    (chk 129 (null? #f) #f)
    (chk 130 (null? #t) #f)
    (chk 131 (null? -1) #f)
    (chk 132 (null? 0) #f)
    (chk 133 (null? 1) #f)
    (chk 134 (null? -1.5) #f)
    (chk 135 (null? 0.0) #f)
    (chk 136 (null? 1.5) #f)

    (chk 201 (list? '()) #t)
    (chk 202 (list? '#()) #f)
    (chk 203 (list? '(1 2)) #t)
    (chk 204 (list? '#(1 2)) #f)
    (chk 205 (list? 'x) #f)
    (chk 206 (list? "x") #f)
    (chk 207 (list? '#\a) #f)
    (chk 208 (list? (lambda (x) x)) #f)
    (chk 209 (list? #f) #f)
    (chk 210 (list? #t) #f)
    (chk 211 (list? -1) #f)
    (chk 212 (list? 0) #f)
    (chk 213 (list? 1) #f)
    (chk 214 (list? -1.5) #f)
    (chk 215 (list? 0.0) #f)
    (chk 216 (list? 1.5) #f)
    (chk 217 (list? '(a . b)) #f)
    (chk 218 (list? (let ((x (list 'a 'b 'c))) (set-cdr! x x) x)) #f)

    (chk 401 (list) '())
    (chk 402 (list 1) '(1))
    (chk 403 (list 1 2 3 4 5) '(1 2 3 4 5))

    (chk 411 (cons* 1) 1)
    (chk 412 (cons* 1 2) '(1 . 2))
    (chk 413 (cons* 1 2 3) '(1 2 . 3))
    (chk 414 (cons* 1 2 3 4) '(1 2 3 . 4))
    (chk 415 (cons* 1 2 3 4 '()) '(1 2 3 4))

    (chk 421 (car (cons 'car 'cdr)) 'car)
    (chk 422 (cdr (cons 'car 'cdr)) 'cdr)

    (let ((cx (cons (cons 'caar 'cdar)  (cons 'cadr 'cddr))))
	 (chk 431 (caar cx) 'caar)
	 (chk 432 (cadr cx) 'cadr)
	 (chk 433 (cdar cx) 'cdar)
	 (chk 434 (cddr cx) 'cddr))

    (let ((cx (cons (cons (cons 'caaar 'cdaar) (cons 'cadar 'cddar))
	       (cons (cons 'caadr 'cdadr) (cons 'caddr 'cdddr)))))
	 (chk 441 (caaar cx) 'caaar)
	 (chk 442 (caadr cx) 'caadr)
	 (chk 443 (cadar cx) 'cadar)
	 (chk 444 (caddr cx) 'caddr)
	 (chk 445 (cdaar cx) 'cdaar)
	 (chk 446 (cdadr cx) 'cdadr)
	 (chk 447 (cddar cx) 'cddar)
	 (chk 448 (cdddr cx) 'cdddr))

    (let ((cx (cons (cons (cons (cons 'caaaar 'cdaaar) (cons 'cadaar 'cddaar))
	             (cons (cons 'caadar 'cdadar) (cons 'caddar 'cdddar)))
	       (cons (cons (cons 'caaadr 'cdaadr) (cons 'cadadr 'cddadr))
	             (cons (cons 'caaddr 'cdaddr) (cons 'cadddr 'cddddr))))))
	 (chk 451 (caaaar cx) 'caaaar)
	 (chk 452 (caaadr cx) 'caaadr)
	 (chk 453 (caadar cx) 'caadar)
	 (chk 454 (caaddr cx) 'caaddr)
	 (chk 455 (cadaar cx) 'cadaar)
	 (chk 456 (cadadr cx) 'cadadr)
	 (chk 457 (caddar cx) 'caddar)
	 (chk 458 (cadddr cx) 'cadddr)

	 (chk 461 (cdaaar cx) 'cdaaar)
	 (chk 462 (cdaadr cx) 'cdaadr)
	 (chk 463 (cdadar cx) 'cdadar)
	 (chk 464 (cdaddr cx) 'cdaddr)
	 (chk 465 (cddaar cx) 'cddaar)
	 (chk 466 (cddadr cx) 'cddadr)
	 (chk 467 (cdddar cx) 'cdddar)
	 (chk 468 (cddddr cx) 'cddddr))

    (let ((cx (cons 'car 'cdr)))
	 (chk 471 (set-car! cx 1) 1)
	 (chk 472 cx '(1 . cdr))
	 (chk 473 (set-cdr! cx 2) 2)
	 (chk 474 cx '(1 . 2)))

    (chk 481 (length '()) 0)
    (chk 482 (length '(1)) 1)
    (chk 483 (length '(1 2 3)) 3)

    (chk 491 (append '() '(1 2 3)) '(1 2 3))
    (chk 492 (append '(1 2 3) '()) '(1 2 3))
    (chk 493 (append '(1) '(2 3)) '(1 2 3))
    (chk 494 (append '(1 2 3) '(4 5 6)) '(1 2 3 4 5 6))
    (chk 495 (append) '())
    (chk 496 (append '(1 2)) '(1 2))
    (chk 497 (append '(1 2) '(3 4) '(5 6)) '(1 2 3 4 5 6))
    (chk 498 (append '(1 2) '(3 4) '(5 6) '(7 8) '(9 10))
	 '(1 2 3 4 5 6 7 8 9 10))

    (chk 501 (reverse '()) '())
    (chk 502 (reverse '(1)) '(1))
    (chk 503 (reverse '(1 2 3)) '(3 2 1))

    (chk 511 (list-tail '(0 1 2 3) 0) '(0 1 2 3))
    (chk 512 (list-tail '(0 1 2 3) 1) '(1 2 3))
    (chk 513 (list-tail '(0 1 2 3) 2) '(2 3))

    (chk 521 (list-ref '(0 1 2 3) 0) 0)
    (chk 522 (list-ref '(0 1 2 3) 1) 1)
    (chk 523 (list-ref '(0 1 2 3) 2) 2)

    (chk 531 (last-pair (cons 'a 'b)) '(a . b))
    (chk 532 (last-pair '(0 1 2 3 4)) '(4))

    (chk 541 (memq 0 '(0 1 2 3 4)) '(0 1 2 3 4))
    (chk 542 (memq 3 '(0 1 2 3 4)) '(3 4))
    (chk 543 (memq 5 '(0 1 2 3 4)) #f)

    (chk 551 (memv 0 '(0 1 2 3 4)) '(0 1 2 3 4))
    (chk 552 (memv 3 '(0 1 2 3 4)) '(3 4))
    (chk 553 (memv 5 '(0 1 2 3 4)) #f)

    (chk 561 (member 0 '(0 1 2 3 4)) '(0 1 2 3 4))
    (chk 562 (member 3 '(0 1 2 3 4)) '(3 4))
    (chk 563 (member 5 '(0 1 2 3 4)) #f)
    (chk 564 (member "zot" '('a 1 #f 'zot "zott" "zot" 'zot)) '("zot" 'zot))

    (chk 571 (assq 0 '((0 zero) (1 one) (2 two))) '(0 zero))
    (chk 572 (assq 2 '((0 zero) (1 one) (2 two))) '(2 two))
    (chk 573 (assq 4 '((0 zero) (1 one) (2 two))) #f)

    (chk 581 (assv 0 '((0 zero) (1 one) (2 two))) '(0 zero))
    (chk 582 (assv 2 '((0 zero) (1 one) (2 two))) '(2 two))
    (chk 583 (assv 4 '((0 zero) (1 one) (2 two))) #f)

    (chk 591 (assoc 0 '((0 zero) (1 one) (2 two))) '(0 zero))
    (chk 592 (assoc 2 '((0 zero) (1 one) (2 two))) '(2 two))
    (chk 593 (assoc 4 '((0 zero) (1 one) (2 two))) #f)
    (chk 594 (assoc '(1 2) '((1 one) ((1 2) (one two)) (2 two)))
	 '((1 2) (one two)))

    (chk 601 (remq 1 '()) '())
    (chk 602 (remq 1 '(1 1 1 1 1 1)) '())
    (chk 603 (remq 1 '(1 2 1 2 1 2)) '(2 2 2))

    (chk 611 (remv 1 '()) '())
    (chk 612 (remv 1 '(* 1 1 1 1 1 1)) '(*))
    (chk 613 (remv 1 '(1 2 1 2 1 2)) '(2 2 2))

    (chk 621 (remove '(1) '()) '())
    (chk 622 (remove '(1) '((1) (1) (1) (1) (1) (1))) '())
    (chk 623 (remove '(1) '((1) 2 (1) 2 (1) 2)) '(2 2 2))

    (let ((cx (list '* 1 1 1 1 1 1))
	  (l2 (list 2 1 2 1 2 1 2)))
	 (chk 631 (remq! 1 '()) '())
	 (chk 632 (remq! 1 cx) '(*))
	 (chk 633 cx '(*))
	 (chk 634 (remq! 1 l2) '(2 2 2 2))
	 (chk 635 l2 '(2 2 2 2)))

    (let ((l1 (list 1 1 1 1 1 1))
	  (l2 (list 2 1 2 1 2 1 2)))
         (chk 641 (remv! 1 '()) '())
         (chk 642 (remv! 1 l1) '())
         (chk 643 l1 '(1 1 1 1 1 1))
         (chk 644 (remv! 1 l2) '(2 2 2 2))
	 (chk 645 l2 '(2 2 2 2)))

    (let ((l1 (list '(1) '(1) '(1) '(1) '(1) '(1)))
	  (l2 (list 2 '(1) 2 '(1) 2 '(1) 2)))
         (chk 641 (remove! '(1) '()) '())
         (chk 642 (remove! '(1) l1) '())
         (chk 643 l1 '((1) (1) (1) (1) (1) (1)))
         (chk 644 (remove! '(1) l2) '(2 2 2 2))
	 (chk 645 l2 '(2 2 2 2))))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test04)

(define-external (chk testnum result expected) testchk)

(define (test04)

;;; 6.4  Symbols
     
    (chk 2.001 (symbol? '()) #f)
    (chk 2.002 (symbol? '#()) #f)
    (chk 2.003 (symbol? '(1 2)) #f)
    (chk 2.004 (symbol? '#(1 2)) #f)
    (chk 2.005 (symbol? 'x) #t)
    (chk 2.006 (symbol? "x") #f)
    (chk 2.007 (symbol? '#\a) #f)
    (chk 2.008 (symbol? (lambda (x) x)) #f)
    (chk 2.009 (symbol? #f) #f)
    (chk 2.010 (symbol? #t) #f)
    (chk 2.011 (symbol? -1) #f)
    (chk 2.012 (symbol? 0) #f)
    (chk 2.013 (symbol? 1) #f)
    (chk 2.014 (symbol? -2.5) #f)
    (chk 2.015 (symbol? 0.0) #f)
    (chk 2.016 (symbol? 1.5) #f)

    (chk 2.021 (string->symbol "APPLE") 'apple)
    (chk 2.022(string->symbol "apple") '\a\p\p\l\e)
    (chk 2.023 (eq? (string->uninterned-symbol "APPLE") 'apple) #f)
    (chk 2.024 (symbol? (string->uninterned-symbol "APPLE")) #t)
    (chk 2.025 (uninterned-symbol? 'apple) #f)
    (chk 2.026 (uninterned-symbol? (string->uninterned-symbol "APPLE")) #t)
    (let* ((s (string #\A #\p #\p #\L #\E))
	   (s-sym (string->symbol s))
	   (s-usym (string->uninterned-symbol s)))
	  (string-set! s 0 #\space)
	  (chk 2.027 (symbol->string s-sym) "AppLE")
	  (chk 2.028 (symbol->string s-usym) "AppLE"))

    (putprop 'x 1 #f)
    (chk 2.031 (getprop 'x 1) #f)
    (chk 2.032 (putprop 'x 1 -1) -1)
    (chk 2.033 (putprop 'x 2 -2) -2)
    (chk 2.034 (putprop 'x 3 -3) -3)
    (chk 2.035 (getprop 'x 1) -1)
    (chk 2.036 (getprop 'x 2) -2)
    (chk 2.037 (getprop 'x 3) -3)
    (chk 2.038 (putprop 'x 2 #f) #f)
    (chk 2.039 (getprop 'x 3) -3)
    (chk 2.040 (putprop 'x 3 #f) #f)
    (chk 2.040 (getprop 'x 3) #f)
    (chk 2.041 (getprop 'x 1) -1)
    (chk 2.042 (putprop 'x 1 1) 1)
    (chk 2.043 (getprop 'x 1) 1))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test05)

(define-external (chk testnum result expected) testchk)

(define (test05)

;;; 6.5  Numbers
     
    (chk 051 (number? '()) #f)
    (chk 052 (number? '#()) #f)
    (chk 053 (number? '(1 2)) #f)
    (chk 054 (number? '#(1 2)) #f)
    (chk 055 (number? 'x) #f)
    (chk 056 (number? "x") #f)
    (chk 057 (number? '#\a) #f)
    (chk 058 (number? (lambda (x) x)) #f)
    (chk 059 (number? #f) #f)
    (chk 060 (number? #t) #f)
    (chk 061 (number? -1) #t)
    (chk 062 (number? 0) #t)
    (chk 063 (number? 1) #t)
    (chk 064 (number? -5) #t)
    (chk 065 (number? 0.0) #t)
    (chk 066 (number? 1.5) #t)
     
    (chk 071 (complex? '()) #f)
    (chk 072 (complex? '#()) #f)
    (chk 073 (complex? '(1 2)) #f)
    (chk 074 (complex? '#(1 2)) #f)
    (chk 075 (complex? 'x) #f)
    (chk 076 (complex? "x") #f)
    (chk 077 (complex? '#\a) #f)
    (chk 078 (complex? (lambda (x) x)) #f)
    (chk 079 (complex? #f) #f)
    (chk 080 (complex? #t) #f)
    (chk 081 (complex? -1) #t)
    (chk 082 (complex? 0) #t)
    (chk 083 (complex? 1) #t)
    (chk 084 (complex? -2.5) #t)
    (chk 085 (complex? 0.0) #t)
    (chk 086 (complex? 1.5) #t)
    
    (chk 091 (real? '()) #f)
    (chk 092 (real? '#()) #f)
    (chk 093 (real? '(1 2)) #f)
    (chk 094 (real? '#(1 2)) #f)
    (chk 095 (real? 'x) #f)
    (chk 096 (real? "x") #f)
    (chk 097 (real? '#\a) #f)
    (chk 098 (real? (lambda (x) x)) #f)
    (chk 099 (real? #f) #f)
    (chk 100 (real? #t) #f)
    (chk 101 (real? -1) #t)
    (chk 102 (real? 0) #t)
    (chk 103 (real? 1) #t)
    (chk 104 (real? -2.5) #t)
    (chk 105 (real? 0.0) #t)
    (chk 106 (real? 1.5) #t)

    (chk 111 (rational? '()) #f)
    (chk 112 (rational? '#()) #f)
    (chk 113 (rational? '(1 2)) #f)
    (chk 114 (rational? '#(1 2)) #f)
    (chk 115 (rational? 'x) #f)
    (chk 116 (rational? "x") #f)
    (chk 117 (rational? '#\a) #f)
    (chk 118 (rational? (lambda (x) x)) #f)
    (chk 119 (rational? #f) #f)
    (chk 120 (rational? #t) #f)
    (chk 121 (rational? -1) #t)
    (chk 122 (rational? 0) #t)
    (chk 123 (rational? 1) #t)
    (chk 124 (rational? -2.5) #t)
    (chk 125 (rational? 0.0) #t)
    (chk 126 (rational? 1.5) #t)

    (chk 131 (integer? '()) #f)
    (chk 132 (integer? '#()) #f)
    (chk 133 (integer? '(1 2)) #f)
    (chk 134 (integer? '#(1 2)) #f)
    (chk 135 (integer? 'x) #f)
    (chk 136 (integer? "x") #f)
    (chk 137 (integer? '#\a) #f)
    (chk 138 (integer? (lambda (x) x)) #f)
    (chk 139 (integer? #f) #f)
    (chk 140 (integer? #t) #f)
    (chk 141 (integer? -1) #t)
    (chk 142 (integer? 0) #t)
    (chk 143 (integer? 1) #t)
    (chk 144 (integer? -2.5) #f)
    (chk 145 (integer? 0.0) #t)
    (chk 146 (integer? 1.5) #f)

    (chk 151 (zero? -1) #f)
    (chk 152 (zero? 0) #t)
    (chk 153 (zero? 1) #f)
    (chk 154 (zero? -2.5) #f)
    (chk 155 (zero? 0.0) #t)
    (chk 156 (zero? 1.5) #f)

    (chk 161 (positive? -1) #f)
    (chk 162 (positive? 0) #f)
    (chk 163 (positive? 1) #t)
    (chk 164 (positive? -2.5) #f)
    (chk 165 (positive? 0.0) #f)
    (chk 166 (positive? 1.5) #t)

    (chk 171 (negative? -1) #t)
    (chk 172 (negative? 0) #f)
    (chk 173 (negative? 1) #f)
    (chk 174 (negative? -2.5) #t)
    (chk 175 (negative? 0.0) #f)
    (chk 176 (negative? 1.5) #f))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test06)

(define-external (chk testnum result expected) testchk)

(define (test06)

    (chk 181 (odd? -1) #t)
    (chk 182 (odd? 0) #f)
    (chk 183 (odd? 1) #t)
    (chk 184 (odd? -2) #f)
    (chk 185 (odd? 2) #f)

    (chk 191 (even? -1) #f)
    (chk 192 (even? 0) #t)
    (chk 193 (even? 1) #f)
    (chk 194 (even? -2) #t)
    (chk 195 (even? 2) #t)

    (chk 201 (exact? -1) #t)
    (chk 202 (exact? 0) #t)
    (chk 203 (exact? 1) #t)
    (chk 204 (exact? -2.5) #f)
    (chk 205 (exact? 0.0) #f)
    (chk 206 (exact? 1.5) #f)

    (chk 211 (inexact? -1) #f)
    (chk 212 (inexact? 0) #f)
    (chk 213 (inexact? 1) #f)
    (chk 214 (inexact? -2.5) #t)
    (chk 215 (inexact? 0.0) #t)
    (chk 216 (inexact? 1.5) #t)

    (chk 220 (= 1 2) #F)
    (chk 221 (= 2 1) #F)
    (chk 222 (= 2 3) #F)
    (chk 223 (= 3 2) #F)
    (chk 224 (= -1 2) #F)
    (chk 225 (= -2 1) #F)
    (chk 226 (= -2 3) #F)
    (chk 227 (= -3 2) #F)
    (chk 228 (= 1 -2) #F)
    (chk 229 (= 2 -1) #F)
    (chk 230 (= 2 -3) #F)
    (chk 231 (= 3 -2) #F)
    (chk 232 (= -1 -2) #F)
    (chk 233 (= -2 -1) #F)
    (chk 234 (= -2 -3) #F)
    (chk 235 (= -3 -2) #F)
    (chk 236 (= 2 2) #T)
    (chk 237 (= -2 -2) #T)

    (chk 240 (< 1 2) #T)
    (chk 241 (< 2 1) #F)
    (chk 242 (< 2 3) #T)
    (chk 243 (< 3 2) #F)
    (chk 244 (< -1 2) #T)
    (chk 245 (< -2 1) #T)
    (chk 246 (< -2 3) #T)
    (chk 247 (< -3 2) #T)
    (chk 248 (< 1 -2) #F)
    (chk 249 (< 2 -1) #F)
    (chk 250 (< 2 -3) #F)
    (chk 251 (< 3 -2) #F)
    (chk 252 (< -1 -2) #F)
    (chk 253 (< -2 -1) #T)
    (chk 254 (< -2 -3) #F)
    (chk 255 (< -3 -2) #T)
    (chk 256 (< 2 2) #F)
    (chk 257 (< -2 -2) #F)

    (chk 260 (> 1 2) #F)
    (chk 261 (> 2 1) #T)
    (chk 262 (> 2 3) #F)
    (chk 263 (> 3 2) #T)
    (chk 264 (> -1 2) #F)
    (chk 265 (> -2 1) #F)
    (chk 266 (> -2 3) #F)
    (chk 267 (> -3 2) #F)
    (chk 268 (> 1 -2) #T)
    (chk 269 (> 2 -1) #T)
    (chk 270 (> 2 -3) #T)
    (chk 271 (> 3 -2) #T)
    (chk 272 (> -1 -2) #T)
    (chk 273 (> -2 -1) #F)
    (chk 274 (> -2 -3) #T)
    (chk 275 (> -3 -2) #F)
    (chk 276 (> 2 2) #F)
    (chk 277 (> -2 -2) #F)

    (chk 280 (<= 1 2) #T)
    (chk 281 (<= 2 1) #F)
    (chk 282 (<= 2 3) #T)
    (chk 283 (<= 3 2) #F)
    (chk 284 (<= -1 2) #T)
    (chk 285 (<= -2 1) #T)
    (chk 286 (<= -2 3) #T)
    (chk 287 (<= -3 2) #T)
    (chk 288 (<= 1 -2) #F)
    (chk 289 (<= 2 -1) #F)
    (chk 290 (<= 2 -3) #F)
    (chk 291 (<= 3 -2) #F)
    (chk 292 (<= -1 -2) #F)
    (chk 293 (<= -2 -1) #T)
    (chk 294 (<= -2 -3) #F)
    (chk 295 (<= -3 -2) #T)
    (chk 296 (<= 2 2) #T)
    (chk 297 (<= -2 -2) #T)

    (chk 300 (= 1 1 1 1) #T)
    (chk 301 (= 2 1 1 1) #F)
    (chk 302 (= 1 1 1 2) #F)

    (chk 310 (< 1 2 3 4) #T)
    (chk 311 (< 2 2 3 4) #F)
    (chk 312 (< 2 3 3 4) #F)
    (chk 313 (< 2 3 4 4) #F)

    (chk 320 (> 4 3 2 1) #T)
    (chk 321 (> 4 3 2 2) #F)
    (chk 322 (> 4 3 3 2) #F)
    (chk 323 (> 4 4 3 2) #F)

    (chk 330 (<= 1 2 3 4) #T)
    (chk 331 (<= 2 2 3 4) #T)
    (chk 332 (<= 2 3 3 4) #T)
    (chk 333 (<= 2 3 4 4) #T)
    (chk 334 (<= 1 2 3 3 2 1) #F)
    (chk 335 (<= 1 2 3 3 2) #F))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test07)

(define-external (chk testnum result expected) testchk)

(define (test07)

    (chk 300 (>= 1 2) #F)
    (chk 301 (>= 2 1) #T)
    (chk 302 (>= 2 3) #F)
    (chk 303 (>= 3 2) #T)
    (chk 304 (>= -1 2) #F)
    (chk 305 (>= -2 1) #F)
    (chk 306 (>= -2 3) #F)
    (chk 307 (>= -3 2) #F)
    (chk 308 (>= 1 -2) #T)
    (chk 309 (>= 2 -1) #T)
    (chk 310 (>= 2 -3) #T)
    (chk 311 (>= 3 -2) #T)
    (chk 312 (>= -1 -2) #T)
    (chk 313 (>= -2 -1) #F)
    (chk 314 (>= -2 -3) #T)
    (chk 315 (>= -3 -2) #F)
    (chk 316 (>= 2 2) #T)
    (chk 317 (>= -2 -2) #T)

    (chk 320 (max 1 2) 2)
    (chk 321 (max 2 1) 2)
    (chk 322 (max 2 3) 3)
    (chk 323 (max 3 2) 3)
    (chk 324 (max -1 2) 2)
    (chk 325 (max -2 1) 1)
    (chk 326 (max -2 3) 3)
    (chk 327 (max -3 2) 2)
    (chk 328 (max 1 -2) 1)
    (chk 329 (max 2 -1) 2)
    (chk 330 (max 2 -3) 2)
    (chk 331 (max 3 -2) 3)
    (chk 332 (max -1 -2) -1)
    (chk 333 (max -2 -1) -1)
    (chk 334 (max -2 -3) -2)
    (chk 335 (max -3 -2) -2)
    (chk 336 (max 2 2) 2)
    (chk 337 (max -2 -2) -2)

    (chk 340 (abs 1) 1)
    (chk 341 (abs 0) 0)
    (chk 342 (abs -1) 1)
    (chk 343 (abs -.5) .5)
    (chk 343 (abs 0.0) 0.0)
    (chk 344 (abs .5) .5)

    (chk 360 (min 1 2) 1)
    (chk 361 (min 2 1) 1)
    (chk 362 (min 2 3) 2)
    (chk 363 (min 3 2) 2)
    (chk 364 (min -1 2) -1)
    (chk 365 (min -2 1) -2)
    (chk 366 (min -2 3) -2)
    (chk 367 (min -3 2) -3)
    (chk 368 (min 1 -2) -2)
    (chk 369 (min 2 -1) -1)
    (chk 370 (min 2 -3) -3)
    (chk 371 (min 3 -2) -2)
    (chk 372 (min -1 -2) -2)
    (chk 373 (min -2 -1) -2)
    (chk 374 (min -2 -3) -3)
    (chk 375 (min -3 -2) -3)
    (chk 376 (min 2 2) 2)
    (chk 377 (min -2 -2) -2)

    (chk 380 (+ 1 2) 3)
    (chk 381 (+ 2 1) 3)
    (chk 382 (+ 2 3) 5)
    (chk 383 (+ 3 2) 5)
    (chk 384 (+ -1 2) 1)
    (chk 385 (+ -2 1) -1)
    (chk 386 (+ -2 3) 1)
    (chk 387 (+ -3 2) -1)
    (chk 388 (+ 1 -2) -1)
    (chk 389 (+ 2 -1) 1)
    (chk 390 (+ 2 -3) -1)
    (chk 391 (+ 3 -2) 1)
    (chk 392 (+ -1 -2) -3)
    (chk 393 (+ -2 -1) -3)
    (chk 394 (+ -2 -3) -5)
    (chk 395 (+ -3 -2) -5)
    (chk 396 (+ 2 2) 4)
    (chk 397 (+ -2 -2) -4)

    (chk 400 (* 1 2) 2)
    (chk 401 (* 2 1) 2)
    (chk 402 (* 2 3) 6)
    (chk 403 (* 3 2) 6)
    (chk 404 (* -1 2) -2)
    (chk 405 (* -2 1) -2)
    (chk 406 (* -2 3) -6)
    (chk 407 (* -3 2) -6)
    (chk 408 (* 1 -2) -2)
    (chk 409 (* 2 -1) -2)
    (chk 410 (* 2 -3) -6)
    (chk 411 (* 3 -2) -6)
    (chk 412 (* -1 -2) 2)
    (chk 413 (* -2 -1) 2)
    (chk 414 (* -2 -3) 6)
    (chk 415 (* -3 -2) 6)
    (chk 416 (* 2 2) 4)
    (chk 417 (* -2 -2) 4)

    (chk 420 (>= 4 3 2 1) #T)
    (chk 421 (>= 4 3 2 2) #T)
    (chk 422 (>= 4 3 3 2) #T)
    (chk 423 (>= 4 4 3 2) #T)
    (chk 424 (>= 1 2 3 3 2 1) #F)
    (chk 425 (>= 2 3 3 2 1) #F)

    (chk 430 (max 1) 1)
    (chk 431 (max 1 2 3) 3)
    (chk 432 (max 3 2 1) 3)
    (chk 433 (max 2 3 1) 3)
    (chk 434 (max 1 3 5 7 9 7 5 3 1) 9)

    (chk 440 (min 1) 1)
    (chk 441 (min 1 2 3) 1)
    (chk 442 (min 3 2 1) 1)
    (chk 443 (min 2 3 1) 1)
    (chk 444 (min 1 3 5 7 0 7 5 3 1) 0)

    (chk 450 (+) 0)
    (chk 451 (+ 1 2 3) 6)
    (chk 452 (+ 1 2 3 4 5 6) 21)

    (chk 460 (*) 1)
    (chk 461 (* 1 2 3) 6)
    (chk 462 (* 5 4 3 2) 120))
    
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test08)

(define-external (chk testnum result expected) testchk)

(define (test08)

    (chk 420 (- 1 2) -1)
    (chk 421 (- 2 1) 1)
    (chk 422 (- 2 3) -1)
    (chk 423 (- 3 2) 1)
    (chk 424 (- -1 2) -3)
    (chk 425 (- -2 1) -3)
    (chk 426 (- -2 3) -5)
    (chk 427 (- -3 2) -5)
    (chk 428 (- 1 -2) 3)
    (chk 429 (- 2 -1) 3)
    (chk 430 (- 2 -3) 5)
    (chk 431 (- 3 -2) 5)
    (chk 432 (- -1 -2) 1)
    (chk 433 (- -2 -1) -1)
    (chk 434 (- -2 -3) 1)
    (chk 435 (- -3 -2) -1)
    (chk 436 (- 2 2) 0)
    (chk 437 (- -2 -2) 0)

    (chk 440 (/ 1 2) .5)
    (chk 441 (/ 2 1) 2)
    (chk 442 (/ 2 3) .6666666666666667)
    (chk 443 (/ 3 2) 1.5)
    (chk 444 (/ -1 2) -.5)
    (chk 445 (/ -2 1) -2)
    (chk 446 (/ -2 3) -.6666666666666667)
    (chk 447 (/ -3 2) -1.5)
    (chk 448 (/ 1 -2) -.5)
    (chk 449 (/ 2 -1) -2)
    (chk 450 (/ 2 -3) -.6666666666666667)
    (chk 451 (/ 3 -2) -1.5)
    (chk 452 (/ -1 -2) .5)
    (chk 453 (/ -2 -1) 2)
    (chk 454 (/ -2 -3) .6666666666666667)
    (chk 455 (/ -3 -2) 1.5)
    (chk 456 (/ 2 2) 1)
    (chk 457 (/ -2 -2) 1)

    (chk 460 (quotient 1 2) 0)
    (chk 461 (quotient 2 1) 2)
    (chk 462 (quotient 2 3) 0)
    (chk 463 (quotient 3 2) 1)
    (chk 464 (quotient -1 2) 0)
    (chk 465 (quotient -2 1) -2)
    (chk 466 (quotient -2 3) 0)
    (chk 467 (quotient -3 2) -1)
    (chk 468 (quotient 1 -2) 0)
    (chk 469 (quotient 2 -1) -2)
    (chk 470 (quotient 2 -3) 0)
    (chk 471 (quotient 3 -2) -1)
    (chk 472 (quotient -1 -2) 0)
    (chk 473 (quotient -2 -1) 2)
    (chk 474 (quotient -2 -3) 0)
    (chk 475 (quotient -3 -2) 1)
    (chk 476 (quotient 2 2) 1)
    (chk 477 (quotient -2 -2) 1)

    (chk 480 (remainder 1 2) 1)
    (chk 481 (remainder 2 1) 0)
    (chk 482 (remainder 2 3) 2)
    (chk 483 (remainder 3 2) 1)
    (chk 484 (remainder -1 2) -1)
    (chk 485 (remainder -2 1) 0)
    (chk 486 (remainder -2 3) -2)
    (chk 487 (remainder -3 2) -1)
    (chk 488 (remainder 1 -2) 1)
    (chk 489 (remainder 2 -1) 0)
    (chk 490 (remainder 2 -3) 2)
    (chk 491 (remainder 3 -2) 1)
    (chk 492 (remainder -1 -2) -1)
    (chk 493 (remainder -2 -1) 0)
    (chk 494 (remainder -2 -3) -2)
    (chk 495 (remainder -3 -2) -1)
    (chk 496 (remainder 2 2) 0)
    (chk 497 (remainder -2 -2) 0)

    (chk 500 (+ -2 -2) -4)
    (chk 501 (+ -2 -1.4) -3.4)
    (chk 502 (+ -2 2) 0)
    (chk 503 (+ -2 2.4) .4)
    (chk 504 (+ -1.4 -2) -3.4)
    (chk 505 (+ -1.4 -1.4) -2.8)
    (chk 506 (+ -1.4 2) .6)
    (chk 507 (+ -1.4 2.4) 1.)
    (chk 508 (+ 2 -2) 0)
    (chk 509 (+ 2 -1.4) .6)
    (chk 510 (+ 2 2) 4)
    (chk 511 (+ 2 2.4) 4.4)
    (chk 512 (+ 2.4 -2) .4)
    (chk 513 (+ 2.4 -1.4) 1.)
    (chk 514 (+ 2.4 2) 4.4)
    (chk 515 (+ 2.4 2.4) 4.8)

    (chk 520 (- -2 -2) 0)
    (chk 521 (- -2 -1.4) -.6)
    (chk 522 (- -2 2) -4)
    (chk 523 (- -2 2.4) -4.4)
    (chk 524 (- -1.4 -2) .6)
    (chk 525 (- -1.4 -1.4) 0.)
    (chk 526 (- -1.4 2) -3.4)
    (chk 527 (- -1.4 2.4) -3.8)
    (chk 528 (- 2 -2) 4)
    (chk 529 (- 2 -1.4) 3.4)
    (chk 530 (- 2 2) 0)
    (chk 531 (- 2 2.4) -.4)
    (chk 532 (- 2.4 -2) 4.4)
    (chk 533 (- 2.4 -1.4) 3.8)
    (chk 534 (- 2.4 2) .4)
    (chk 535 (- 2.4 2.4) 0.)

    (chk 540 (- 1) -1)
    (chk 541 (- 1.3) -1.3)
    (chk 542 (- 3 4 5) -6)
    (chk 543 (- 3 4 5 -6) 0)

    (chk 550 (/ 3) .3333333333)
    (chk 551 (/ 3 4 5) .15)
    (chk 552 (/ 3 4 5 10) .015)

    (chk 580 (modulo 1 2) 1)
    (chk 581 (modulo 2 1) 0)
    (chk 582 (modulo 2 3) 2)
    (chk 583 (modulo 3 2) 1)
    (chk 584 (modulo -1 2) 1)
    (chk 585 (modulo -2 1) 0)
    (chk 586 (modulo -2 3) 1)
    (chk 587 (modulo -3 2) 1)
    (chk 588 (modulo 1 -2) -1)
    (chk 589 (modulo 2 -1) 0)
    (chk 590 (modulo 2 -3) -1)
    (chk 591 (modulo 3 -2) -1)
    (chk 592 (modulo -1 -2) -1)
    (chk 593 (modulo -2 -1) 0)
    (chk 594 (modulo -2 -3) -2)
    (chk 595 (modulo -3 -2) -1)
    (chk 596 (modulo 2 2) 0)
    (chk 597 (modulo -2 -2) 0)

    (chk 600 (modulo 13 4) 1)
    (chk 601 (remainder 13 4) 1)
    (chk 602 (modulo -13 4) 3)
    (chk 603 (remainder -13 4) -1)
    (chk 604 (modulo 13 -4) -3)
    (chk 605 (remainder 13 -4) 1)
    (chk 606 (modulo -13 -4) -1)
    (chk 607 (remainder -13 -4) -1)

    (chk 610 (gcd) 0)
    (chk 611 (gcd 32 -36) 4)
    (chk 612 (gcd -32.0 -36) 4.0)
    (chk 613 (gcd 16 8 4 2 1) 1)
    (chk 614 (gcd 16 8 4 2 0) 2)

    (chk 620 (lcm) 1)
    (chk 621 (lcm 32 -36) 288)
    (chk 622 (lcm 32.0 -36) 288.0)
    (chk 623 (lcm 3 5 7 35) 105))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test09)

(define-external (chk testnum result expected) testchk)

(define (test09)

    (chk 540 (* -2 -2) 4)
    (chk 541 (* -2 -1.4) 2.8)
    (chk 542 (* -2 2) -4)
    (chk 543 (* -2 2.4) -4.8)
    (chk 544 (* -1.4 -2) 2.8)
    (chk 545 (* -1.4 -1.4) 1.96)
    (chk 546 (* -1.4 2) -2.8)
    (chk 547 (* -1.4 2.4) -3.36)
    (chk 548 (* 2 -2) -4)
    (chk 549 (* 2 -1.4) -2.8)
    (chk 550 (* 2 2) 4)
    (chk 551 (* 2 2.4) 4.8)
    (chk 552 (* 2.4 -2) -4.8)
    (chk 553 (* 2.4 -1.4) -3.36)
    (chk 554 (* 2.4 2) 4.8)
    (chk 555 (* 2.4 2.4) 5.76)

    (chk 560 (/ -2 -2) 1)
    (chk 561 (/ -2 -1.4) 1.428571428571429)
    (chk 562 (/ -2 2) -1)
    (chk 563 (/ -2 2.4) -.8333333333333334)
    (chk 564 (/ -1.4 -2) .7)
    (chk 565 (/ -1.4 -1.4) 1.)
    (chk 566 (/ -1.4 2) -.7)
    (chk 567 (/ -1.4 2.4) -.5833333333333334)
    (chk 568 (/ 2 -2) -1)
    (chk 569 (/ 2 -1.4) -1.428571428571429)
    (chk 570 (/ 2 2) 1)
    (chk 571 (/ 2 2.4) .8333333333333334)
    (chk 572 (/ 2.4 -2) -1.2)
    (chk 573 (/ 2.4 -1.4) -1.714285714285714)
    (chk 574 (/ 2.4 2) 1.2)
    (chk 575 (/ 2.4 2.4) 1.)

    (chk 580 (< -2 -2) #F)
    (chk 581 (< -2 -1.4) #T)
    (chk 582 (< -2 2) #T)
    (chk 583 (< -2 2.4) #T)
    (chk 584 (< -1.4 -2) #F)
    (chk 585 (< -1.4 -1.4) #F)
    (chk 586 (< -1.4 2) #T)
    (chk 587 (< -1.4 2.4) #T)
    (chk 588 (< 2 -2) #F)
    (chk 589 (< 2 -1.4) #F)
    (chk 590 (< 2 2) #F)
    (chk 591 (< 2 2.4) #T)
    (chk 592 (< 2.4 -2) #F)
    (chk 593 (< 2.4 -1.4) #F)
    (chk 594 (< 2.4 2) #F)
    (chk 595 (< 2.4 2.4) #F)

    (chk 600 (<= -2 -2) #T)
    (chk 601 (<= -2 -1.4) #T)
    (chk 602 (<= -2 2) #T)
    (chk 603 (<= -2 2.4) #T)
    (chk 604 (<= -1.4 -2) #F)
    (chk 605 (<= -1.4 -1.4) #T)
    (chk 606 (<= -1.4 2) #T)
    (chk 607 (<= -1.4 2.4) #T)
    (chk 608 (<= 2 -2) #F)
    (chk 609 (<= 2 -1.4) #F)
    (chk 610 (<= 2 2) #T)
    (chk 611 (<= 2 2.4) #T)
    (chk 612 (<= 2.4 -2) #F)
    (chk 613 (<= 2.4 -1.4) #F)
    (chk 614 (<= 2.4 2) #F)
    (chk 615 (<= 2.4 2.4) #T)

    (chk 620 (= -2 -2) #T)
    (chk 621 (= -2 -1.4) #F)
    (chk 622 (= -2 2) #F)
    (chk 623 (= -2 2.4) #F)
    (chk 624 (= -1.4 -2) #F)
    (chk 625 (= -1.4 -1.4) #T)
    (chk 626 (= -1.4 2) #F)
    (chk 627 (= -1.4 2.4) #F)
    (chk 628 (= 2 -2) #F)
    (chk 629 (= 2 -1.4) #F)
    (chk 630 (= 2 2) #T)
    (chk 631 (= 2 2.4) #F)
    (chk 632 (= 2.4 -2) #F)
    (chk 633 (= 2.4 -1.4) #F)
    (chk 634 (= 2.4 2) #F)
    (chk 635 (= 2.4 2.4) #T)

    (chk 640 (> -2 -2) #F)
    (chk 641 (> -2 -1.4) #F)
    (chk 642 (> -2 2) #F)
    (chk 643 (> -2 2.4) #F)
    (chk 644 (> -1.4 -2) #T)
    (chk 645 (> -1.4 -1.4) #F)
    (chk 646 (> -1.4 2) #F)
    (chk 647 (> -1.4 2.4) #F)
    (chk 648 (> 2 -2) #T)
    (chk 649 (> 2 -1.4) #T)
    (chk 650 (> 2 2) #F)
    (chk 651 (> 2 2.4) #F)
    (chk 652 (> 2.4 -2) #T)
    (chk 653 (> 2.4 -1.4) #T)
    (chk 654 (> 2.4 2) #T)
    (chk 655 (> 2.4 2.4) #F))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test10)

(define-external (chk testnum result expected) testchk)

(define (test10)

    (chk 660 (>= -2 -2) #T)
    (chk 661 (>= -2 -1.4) #F)
    (chk 662 (>= -2 2) #F)
    (chk 663 (>= -2 2.4) #F)
    (chk 664 (>= -1.4 -2) #T)
    (chk 665 (>= -1.4 -1.4) #T)
    (chk 666 (>= -1.4 2) #F)
    (chk 667 (>= -1.4 2.4) #F)
    (chk 668 (>= 2 -2) #T)
    (chk 669 (>= 2 -1.4) #T)
    (chk 670 (>= 2 2) #T)
    (chk 671 (>= 2 2.4) #F)
    (chk 672 (>= 2.4 -2) #T)
    (chk 673 (>= 2.4 -1.4) #T)
    (chk 674 (>= 2.4 2) #T)
    (chk 675 (>= 2.4 2.4) #T)

    (chk 680 (MIN -2 -2) -2)
    (chk 681 (MIN -2 -1.4) -2)
    (chk 682 (MIN -2 2) -2)
    (chk 683 (MIN -2 2.4) -2)
    (chk 684 (MIN -1.4 -2) -2)
    (chk 685 (MIN -1.4 -1.4) -1.4)
    (chk 686 (MIN -1.4 2) -1.4)
    (chk 687 (MIN -1.4 2.4) -1.4)
    (chk 688 (MIN 2 -2) -2)
    (chk 689 (MIN 2 -1.4) -1.4)
    (chk 690 (MIN 2 2) 2)
    (chk 691 (MIN 2 2.4) 2)
    (chk 692 (MIN 2.4 -2) -2)
    (chk 693 (MIN 2.4 -1.4) -1.4)
    (chk 694 (MIN 2.4 2) 2)
    (chk 695 (MIN 2.4 2.4) 2.4)

    (chk 700 (MAX -2 -2) -2)
    (chk 701 (MAX -2 -1.4) -1.4)
    (chk 702 (MAX -2 2) 2)
    (chk 703 (MAX -2 2.4) 2.4)
    (chk 704 (MAX -1.4 -2) -1.4)
    (chk 705 (MAX -1.4 -1.4) -1.4)
    (chk 706 (MAX -1.4 2) 2)
    (chk 707 (MAX -1.4 2.4) 2.4)
    (chk 708 (MAX 2 -2) 2)
    (chk 709 (MAX 2 -1.4) 2)
    (chk 710 (MAX 2 2) 2)
    (chk 711 (MAX 2 2.4) 2.4)
    (chk 712 (MAX 2.4 -2) 2.4)
    (chk 713 (MAX 2.4 -1.4) 2.4)
    (chk 714 (MAX 2.4 2) 2.4)
    (chk 715 (MAX 2.4 2.4) 2.4)

    (chk 720 (POSITIVE? -2) #F)
    (chk 721 (POSITIVE? -1.6) #F)
    (chk 722 (POSITIVE? -1.4) #F)
    (chk 723 (POSITIVE? 0) #F)
    (chk 724 (POSITIVE? 0.) #F)
    (chk 725 (POSITIVE? 1.6) #T)
    (chk 726 (POSITIVE? 2) #T)
    (chk 727 (POSITIVE? 2.4) #T)

    (chk 730 (ZERO? -2) #F)
    (chk 731 (ZERO? -1.6) #F)
    (chk 732 (ZERO? -1.4) #F)
    (chk 733 (ZERO? 0) #T)
    (chk 734 (ZERO? 0.) #T)
    (chk 735 (ZERO? 1.6) #F)
    (chk 736 (ZERO? 2) #F)
    (chk 737 (ZERO? 2.4) #F)

    (chk 740 (NEGATIVE? -2) #T)
    (chk 741 (NEGATIVE? -1.6) #T)
    (chk 742 (NEGATIVE? -1.4) #T)
    (chk 743 (NEGATIVE? 0) #F)
    (chk 744 (NEGATIVE? 0.) #F)
    (chk 745 (NEGATIVE? 1.6) #F)
    (chk 746 (NEGATIVE? 2) #F)
    (chk 747 (NEGATIVE? 2.4) #F)

    (chk 750 (ABS -2) 2)
    (chk 751 (ABS -1.6) 1.6)
    (chk 752 (ABS -1.4) 1.4)
    (chk 753 (ABS 0) 0)
    (chk 754 (ABS 0.) 0.)
    (chk 755 (ABS 1.6) 1.6)
    (chk 756 (ABS 2) 2)
    (chk 757 (ABS 2.4) 2.4)
    (if (member (list-ref (implementation-information) 3) '("VAX" "R2000"))
	(chk 758 (ABS -536870912) 536870912.))

    (chk 760 (FLOOR -2) -2)
    (chk 761 (FLOOR -1.6) -2.)
    (chk 762 (FLOOR -1.4) -2.)
    (chk 763 (FLOOR 0) 0)
    (chk 764 (FLOOR 0.) 0.)
    (chk 765 (FLOOR 1.6) 1.)
    (chk 766 (FLOOR 2) 2)
    (chk 767 (FLOOR 2.4) 2.)

    (chk 770 (CEILING -2) -2)
    (chk 771 (CEILING -1.6) -1.)
    (chk 772 (CEILING -1.4) -1.)
    (chk 773 (CEILING 0) 0)
    (chk 774 (CEILING 0.) 0.)
    (chk 775 (CEILING 1.6) 2.)
    (chk 776 (CEILING 2) 2)
    (chk 777 (CEILING 2.4) 3.))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test11)

(define-external (chk testnum result expected) testchk)

(define minint (string->number "-536870912"))

(define zero 0)

(define zeropt 0.0)

(define (test11)
    (let ((arch (list-ref (implementation-information) 3)))
	 (when (member arch '("VAX" "R2000"))
	       (chk 01 (+ 268435455 268435456) 536870911)
	       (chk 02 (+ 536870910 1) 536870911)
	       (chk 03 (+ 536870909 2) 536870911)
	       (chk 04 (+ 3 536870908) 536870911)
	       (chk 05 (+ 536870907 4) 536870911)
	       (chk 06 (+ 2 536870910) 536870912.)
	       (chk 07 (+ 536870909 3) 536870912.)
	       (chk 08 (+ 536870908 4) 536870912.)
	       (chk 09 (+ 300000000 300000000) 600000000.)
	       (chk 10 (+ 500000000 522334455) 1022334455.)
	       (chk 11 (+ -500000000 522334455) 22334455.)
	       (chk 12 (+ -536543210 -522334455) -1058877665.)
	       (chk 13 (+ -1 -536870911) minint)
	       (chk 14 (+ 268435456 268435456) 536870912.)
	       (chk 15 (+ 0 0.) 0.)
	       (chk 16 (+ 164. 78) 242.)
	       (chk 17 (- 0 -536870911) 536870911)
	       (chk 18 (- -300000000 300000000) -600000000.)
	       (chk 19 (- -500000000 36870912) minint)
	       (chk 20 (- 1 -536870911) 536870912.)
	       (chk 21 (- -268435455 268435456) -536870911)
	       (chk 22 (- -536870911 1) minint)
	       (chk 23 (- -500000001 1) -500000002)
	       (chk 24 (- 420000000 520000000) -100000000)
	       (chk 25 (- -230000000 450000000) -680000000.)
	       (chk 26 (- 11 60000000011.) -60000000000.)
	       (chk 27 (- 536870911 643) 536870268)
	       (chk 28 (- -536870911 643) -536871554.)
	       (chk 29 (- 448000000 448000000) 0) 
	       (chk 30 (- 448000000. 448000000) 0.)
	       (chk 31 (* -23000 -23000) 529000000)
	       (chk 32 (* 59652323 9) 536870907)
	       (chk 33 (* 8 100000000) 800000000.)
	       (chk 34 (* 43210 12345) 533427450)
	       (chk 35 (* 3000000 3000000) 9000000000000.)
	       (chk 36 (* 2 268435456) 536870912.)
	       (chk 37 (* -268435456 2) minint)
	       (chk 38 (* -536870911 -1) 536870911)
	       (chk 38 (* 4500 -60000) -270000000)
	       
	       (when (equal? arch "VAX")
		     (chk 40 (catch-error (lambda () (/ 233545 zero)))
			  "***** ????? Divide by zero")
		     (chk 41 (catch-error (lambda ()(quotient 233 zero)))
			  "***** ????? Divide by zero")
		     (chk 42 (catch-error (lambda ()(/ 1. zero)))
			  "***** ????? Divide by zero")
		     (chk 43 (catch-error (lambda () (quotient 345 zeropt)))
			  "***** ????? Divide by zero")
		     (chk 44 (catch-error (lambda ()(* -02.9e-38 .1))) '(0.0))
		     (chk 45 (catch-error (lambda ()(* 1.27e38 10)))
			  "***** ????? Overflow")
		     (chk 46 (catch-error (lambda ()(* 6.e37 3)))
			  "***** ????? Overflow"))
	       
	       (when (equal? arch "R2000")
		     (chk 50 (catch-error (lambda () (/ 233545 zero)))
			  "***** ????? Divide by zero")
		     (chk 51 (catch-error (lambda () (quotient 233 zero)))
			  "***** ????? Divide by zero")
		     (chk 52 (number? (/ 1. zero)) #t)
		     (chk 53 (number? (quotient 345 zeropt)) #t)
		     (chk 54 (number? (* 1.e99 2.e99)) #t)
		     (chk 55 (* 1 3.e99) 3.e99))
	       
	       (chk 60 (- -536870912) 536870912.)))
    
    (chk 780 (TRUNCATE -2) -2)
    (chk 781 (TRUNCATE -1.6) -1.)
    (chk 782 (TRUNCATE -1.4) -1.)
    (chk 783 (TRUNCATE 0) 0)
    (chk 784 (TRUNCATE 0.) 0.)
    (chk 785 (TRUNCATE 1.6) 1.)
    (chk 786 (TRUNCATE 2) 2)
    (chk 787 (TRUNCATE 2.4) 2.)
    
    (chk 790 (ROUND -2) -2)
    (chk 791 (ROUND -1.6) -2.)
    (chk 792 (ROUND -1.4) -1.)
    (chk 793 (ROUND 0) 0)
    (chk 794 (ROUND 0.) 0.)
    (chk 795 (ROUND 1.6) 2.)
    (chk 796 (ROUND 2) 2)
    (chk 797 (ROUND 2.4) 2.)
    
    (chk 801 (exp 0) 1.)
    (chk 802 (exp 1) 2.7182818)
    
    (chk 811 (log (exp 1)) 1.0)
    
    (chk 821 (sin 0) 0.0)
    (chk 822 (sin 1) .841471)
    (chk 823 (+ (* (sin 1) (sin 1)) (* (cos 1) (cos 1))) 1.0)
    (chk 824 (/ (sin 1) (cos 1)) (tan 1))
    
    (chk 830 (asin (sin 1)) 1.0)
    (chk 831 (acos (cos 1)) 1.0)
    (chk 832 (atan (tan 1)) 1.0)
    (chk 833 (atan 1 1) (atan 1))
    
    (chk 840 (sqrt 25) 5)
    (chk 841 (sqrt (expt 2 40)) (exact->inexact (expt 2 20)))
    (chk 842 (exact? (expt 2 20)) #t)
    (chk 843 (expt 0 0) 1.0)
    
    (chk 850 (exact->inexact 23.0) 23.0)
    (chk 851 (exact->inexact 23) 23.0)
    
    (chk 860 (inexact->exact 23) 23)
    (chk 861 (inexact->exact 23.3) 23)
    
    (chk 865 (number->string -23 '(int)) "-23")
    (chk 866 (number->string -1.3333 '(int)) "-1")
    (chk 867 (number->string 2.7 '(int)) "3")
    (chk 868 (number->string 23 '(int)) "23")
    (chk 869 (number->string -23 '(fix 3)) "-23.000")
    (chk 870 (number->string -1.3333 '(fix 3)) "-1.333")
    (chk 871 (number->string 2.7 '(fix 3)) "2.700")
    (chk 872 (number->string 23 '(fix 3)) "23.000")
    (let ((x (number->string -23 '(sci 2))))
	 (if (= (string-length x) 9)
	     (begin
		   (chk 873 (number->string -23 '(sci 2)) "-2.3e+001")
		   (chk 874 (number->string -1.3333 '(sci 2)) "-1.3e+000")
		   (chk 875 (number->string 2.7 '(sci 2)) "2.7e+000")
		   (chk 876 (number->string 23 '(sci 2)) "2.3e+001"))
	     (begin
		   (chk 873 (number->string -23 '(sci 2)) "-2.3e+01")
		   (chk 874 (number->string -1.3333 '(sci 2)) "-1.3e+00")
		   (chk 875 (number->string 2.7 '(sci 2)) "2.7e+00")
		   (chk 876 (number->string 23 '(sci 2)) "2.3e+01"))))
    
    (chk 880 (number->string 23) "23")
    (chk 881 (number->string 23 2) "10111")
    (chk 882 (number->string 23 8) "27")
    (chk 883 (number->string 23 10) "23")
    (chk 884 (number->string 23 16) "17")
    (chk 885 (number->string -23.32) "-23.32")
    
    (chk 890 (string->number "") #f)
    (chk 891 (string->number "11") 11)
    (chk 892 (string->number "11" 2) 3)
    (chk 893 (string->number "11" 8) 9)
    (chk 894 (string->number "11" 10) 11)
    (chk 895 (string->number "11" 16) 17)
    (chk 896 (string->number "#b11" 10) 3)
    (chk 897 (string->number "-#b11" 10) -3))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test12)

(define-external (chk testnum result expected) testchk)

(define (test12)

;;; 6.6  Characters
     
    (chk 1 (char? '()) #f)
    (chk 2 (char? '#()) #f)
    (chk 3 (char? '(1 2)) #f)
    (chk 4 (char? '#(1 2)) #f)
    (chk 5 (char? 'x) #f)
    (chk 6 (char? "x") #f)
    (chk 7 (char? #\a) #t)
    (chk 8 (char? (lambda (x) x)) #f)
    (chk 9 (char? #f) #f)
    (chk 10 (char? #t) #f)
    (chk 11 (char? -1) #f)
    (chk 12 (char? 0) #f)
    (chk 13 (char? 1) #f)
    (chk 14 (char? -2.5) #f)
    (chk 15 (char? 0.0) #f)
    (chk 16 (char? 1.5) #f)

    (chk 20 (char=? #\a #\A) #f)
    (chk 21 (char=? #\2 #\4) #f)
    (chk 22 (char=? #\a #\b) #f)
    (chk 23 (char=? #\b #\a) #f)
    (chk 24 (char=? #\c #\c) #t)

    (chk 30 (char<? #\a #\A) #f)
    (chk 31 (char<? #\2 #\4) #t)
    (chk 32 (char<? #\a #\b) #t)
    (chk 33 (char<? #\b #\a) #f)
    (chk 34 (char<? #\c #\c) #f)

    (chk 40 (char>? #\a #\A) #t)
    (chk 41 (char>? #\2 #\4) #f)
    (chk 42 (char>? #\a #\b) #f)
    (chk 43 (char>? #\b #\a) #t)
    (chk 44 (char>? #\c #\c) #f)

    (chk 50 (char<=? #\a #\A) #f)
    (chk 51 (char<=? #\2 #\4) #t)
    (chk 52 (char<=? #\a #\b) #t)
    (chk 53 (char<=? #\b #\a) #f)
    (chk 54 (char<=? #\c #\c) #t)

    (chk 60 (char>=? #\a #\A) #t)
    (chk 61 (char>=? #\2 #\4) #f)
    (chk 62 (char>=? #\a #\b) #f)
    (chk 63 (char>=? #\b #\a) #t)
    (chk 64 (char>=? #\c #\c) #t)

    (chk 70 (char-alphabetic? #\.) #f)
    (chk 71 (char-alphabetic? #\3) #f)
    (chk 72 (char-alphabetic? #\a) #t)
    (chk 73 (char-alphabetic? #\A) #t)
    (chk 74 (char-alphabetic? #\tab) #f)
    (chk 75 (char-alphabetic? #\space) #f)
    (chk 76 (char-alphabetic? #\newline) #f)

    (chk 80 (char-numeric? #\.) #f)
    (chk 81 (char-numeric? #\3) #t)
    (chk 82 (char-numeric? #\a) #f)
    (chk 83 (char-numeric? #\A) #f)
    (chk 84 (char-numeric? #\tab) #f)
    (chk 85 (char-numeric? #\space) #f)
    (chk 86 (char-numeric? #\newline) #f)

    (chk 90 (char-whitespace? #\.) #f)
    (chk 91 (char-whitespace? #\3) #f)
    (chk 92 (char-whitespace? #\a) #f)
    (chk 93 (char-whitespace? #\A) #f)
    (chk 94 (char-whitespace? #\tab) #t)
    (chk 95 (char-whitespace? #\space) #t)
    (chk 96 (char-whitespace? #\newline) #t)

    (chk 100 (char-upper-case? #\a) #f)
    (chk 101 (char-upper-case? #\A) #t)
    (chk 102 (char-upper-case? #\z) #f)
    (chk 103 (char-upper-case? #\Z) #t)

    (chk 110 (char-lower-case? #\a) #t)
    (chk 111 (char-lower-case? #\A) #f)
    (chk 112 (char-lower-case? #\z) #t)
    (chk 113 (char-lower-case? #\Z) #f)

    (chk 120 (char-upcase #\a) #\A)
    (chk 121 (char-upcase #\A) #\A)
    (chk 122 (char-upcase #\z) #\Z)
    (chk 123 (char-upcase #\Z) #\Z)
    (chk 124 (char-upcase #\space) #\space)

    (chk 130 (char-downcase #\a) #\a)
    (chk 131 (char-downcase #\A) #\a)
    (chk 132 (char-downcase #\z) #\z)
    (chk 133 (char-downcase #\Z) #\z)
    (chk 134 (char-downcase #\space) #\space)

    (chk 140 (char->integer #\space) 32)
    (chk 141 (char->integer #\A) 65)

    (chk 150 (integer->char 32) #\space)
    (chk 151 (integer->char 65) #\A)

    (chk 160 (char-ci=? #\a #\A) #t)
    (chk 161 (char-ci=? #\2 #\4) #f)
    (chk 162 (char-ci=? #\a #\b) #f)
    (chk 163 (char-ci=? #\b #\a) #f)
    (chk 164 (char-ci=? #\c #\c) #t)
    (chk 165 (char-ci=? #\C #\c) #t)

    (chk 170 (char-ci<? #\a #\A) #f)
    (chk 171 (char-ci<? #\2 #\4) #t)
    (chk 172 (char-ci<? #\a #\b) #t)
    (chk 173 (char-ci<? #\b #\a) #f)
    (chk 174 (char-ci<? #\c #\c) #f)
    (chk 175 (char-ci<? #\a #\B) #t)
    (chk 176 (char-ci<? #\A #\b) #t)
    (chk 177 (char-ci<? #\B #\a) #f)

    (chk 180 (char-ci>? #\a #\A) #f)
    (chk 181 (char-ci>? #\2 #\4) #f)
    (chk 182 (char-ci>? #\a #\b) #f)
    (chk 183 (char-ci>? #\b #\a) #t)
    (chk 184 (char-ci>? #\B #\a) #t)
    (chk 185 (char-ci>? #\b #\A) #t)
    (chk 186 (char-ci>? #\a #\B) #f)
    (chk 187 (char-ci>? #\c #\c) #f)

    (chk 190 (char-ci<=? #\a #\A) #t)
    (chk 191 (char-ci<=? #\2 #\4) #t)
    (chk 192 (char-ci<=? #\a #\b) #t)
    (chk 193 (char-ci<=? #\b #\a) #f)
    (chk 194 (char-ci<=? #\c #\c) #t)
    (chk 195 (char-ci<=? #\c #\D) #t)
    (chk 196 (char-ci<=? #\C #\a) #f)
    (chk 197 (char-ci<=? #\a #\1) #f)

    (chk 200 (char-ci>=? #\a #\A) #t)
    (chk 201 (char-ci>=? #\2 #\4) #f)
    (chk 202 (char-ci>=? #\a #\b) #f)
    (chk 203 (char-ci>=? #\b #\a) #t)
    (chk 204 (char-ci>=? #\C #\c) #t)
    (chk 205 (char-ci>=? #\c #\C) #t)
    (chk 206 (char-ci>=? #\C #\C) #t)
    (chk 207 (char-ci>=? #\c #\D) #f))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test13)

(define-external (chk testnum result expected) testchk)

(define (test13)

;;; 6.7  Strings
 
    (chk 1 (string? '()) #f)
    (chk 2 (string? '#()) #f)
    (chk 3 (string? '(1 2)) #f)
    (chk 4 (string? '#(1 2)) #f)
    (chk 5 (string? 'x) #f)
    (chk 6 (string? "x") #t)
    (chk 7 (string? '#\a) #f)
    (chk 8 (string? (lambda (x) x)) #f)
    (chk 9 (string? #f) #f)
    (chk 10 (string? #t) #f)
    (chk 11 (string? -1) #f)
    (chk 12 (string? 0) #f)
    (chk 13 (string? 1) #f)
    (chk 14 (string? -2.5) #f)
    (chk 15 (string? 0.0) #f)
    (chk 16 (string? 1.5) #f)

    (chk 17 (string) "")
    (chk 18 (string #\a #\b #\c) "abc")

    (chk 20 (string-length (make-string 20)) 20)
    (chk 21 (make-string 20 #\$) "$$$$$$$$$$$$$$$$$$$$")
    (chk 22 (eqv? (make-string 0) "") #t)

    (chk 30 (string-length "") 0)
    (chk 31 (string-length "This string is 17") 17)
    (chk 32 (string-length (make-string 47)) 47)

    (chk 40 (string-ref "s" 0) #\s)
    (chk 41 (string-ref "same" 2) #\m)
    (chk 42 (string-ref "same" 3) #\e)

    (let* ((string "This is a sample")
	   (xstring (string-copy string)))
	  (chk 50 (string-set! xstring 4 #\*) #\*)
	  (chk 51 (string-ref xstring 4) #\*)
	  (chk 52 (string-set! xstring 7 #\*) #\*)
	  (chk 53 (string-ref xstring 7) #\*)
	  (chk 54 (string-set! xstring 9 #\*) #\*)
	  (chk 55 (string-ref xstring 9) #\*)
	  (chk 56 string "This is a sample")
	  (chk 57 xstring "This*is*a*sample")
	  (string-set! xstring 3 (integer->char 204))
	  (chk 58 (char->integer (string-ref xstring 3)) 204))

    (chk 60 (string=? "" "zot") #f)
    (chk 61 (string=? "zot" "") #f)
    (chk 62 (string=? "a" "abc") #f)
    (chk 63 (string=? "Apple Core" "Apple") #f)
    (chk 64 (string=? "Zort 23" "Zort 23") #t)

    (chk 70 (string<? "" "zot") #t)
    (chk 71 (string<? "zot" "") #f)
    (chk 72 (string<? "a" "abc") #t)
    (chk 73 (string<? "Apple Core" "Apple") #f)
    (chk 74 (string<? "Zort 23" "Zort 23") #f)

    (chk 80 (string>? "" "zot") #f)
    (chk 81 (string>? "zot" "") #t)
    (chk 82 (string>? "a" "abc") #f)
    (chk 83 (string>? "Apple Core" "Apple") #t)
    (chk 84 (string>? "Zort 23" "Zort 23") #f)

    (chk 90 (string<=? "" "zot") #t)
    (chk 91 (string<=? "zot" "") #f)
    (chk 92 (string<=? "a" "abc") #t)
    (chk 93 (string<=? "Apple Core" "Apple") #f)
    (chk 94 (string<=? "Zort 23" "Zort 23") #t)

    (chk 100 (string>=? "" "zot") #f)
    (chk 101 (string>=? "zot" "") #t)
    (chk 102 (string>=? "a" "abc") #f)
    (chk 103 (string>=? "Apple Core" "Apple") #t)
    (chk 104 (string>=? "Zort 23" "Zort 23") #t)

    (let ((xstring "This is a sample string"))
	 (chk 110 (substring xstring 0 (string-length xstring))
	      (string-copy xstring))
	 (chk 111 (substring xstring 0 (string-length xstring)) xstring)
	 (chk 112 (eq? (substring xstring 0 (string-length xstring)) xstring)
	      #f)
	 (chk 113 (substring xstring 4 8) " is ")
	 (chk 114 (substring xstring 7 10) " a "))

    (chk 120 (string-append "" "zot") "zot")
    (chk 121 (string-append "zot" "") "zot")
    (chk 122 (string-append "a" "abc") "aabc")
    (chk 123 (string-append "Apple Core" "Apple") "Apple CoreApple")
    (chk 124 (string-append "Zort 23" "Zort 23") "Zort 23Zort 23")

    (chk 130 (string->list "") '())
    (chk 131 (string->list "a") '(#\a))
    (chk 132 (string->list "This is a sample")
	 '(#\T #\h #\i #\s #\space #\i #\s #\space #\a #\space
	   #\s #\a #\m #\p #\l #\e))

    (chk 140 (list->string '()) "")
    (chk 141 (list->string '(#\a)) "a")
    (chk 142 (list->string '(#\T #\h #\i #\s)) "This")

    (chk 150 (string-fill! (make-string 10) #\<) "<<<<<<<<<<")
    (chk 151 (string-fill! "" #\Z) "")

    (chk 160 (string-ci=? "" "zot") #f)
    (chk 161 (string-ci=? "zot" "") #f)
    (chk 162 (string-ci=? "a" "aBc") #f)
    (chk 163 (string-ci=? "Apple Core" "Apple") #f)
    (chk 164 (string-ci=? "Zort 23" "Zort 23") #t)
    (chk 165 (string-ci=? "Able was I ere I saw Elba"
		 "able was i ere i saw elba") #t)

    (chk 170 (string-ci<? "" "zot") #t)
    (chk 171 (string-ci<? "zot" "") #f)
    (chk 172 (string-ci<? "a" "ABc") #t)
    (chk 173 (string-ci<? "apple Core" "Apple") #f)
    (chk 174 (string-ci<? "Zort 23" "Zort 23") #f)
    (chk 175 (string-ci<? "zoRt 23" "ZoRt 24") #t)

    (chk 180 (string-ci>? "" "zot") #f)
    (chk 181 (string-ci>? "zot" "") #t)
    (chk 182 (string-ci>? "A" "abc") #f)
    (chk 183 (string-ci>? "APPLE Core" "apple") #t)
    (chk 184 (string-ci>? "Zort 23" "Zort 23") #f)
    (chk 185 (string-ci>? "zoRt 23" "ZoRt 22") #t)

    (chk 190 (string-ci<=? "" "zot") #t)
    (chk 191 (string-ci<=? "zot" "") #f)
    (chk 192 (string-ci<=? "a" "abc") #t)
    (chk 193 (string-ci<=? "Apple Core" "Apple") #f)
    (chk 194 (string-ci<=? "Zort 23" "Zort 23") #t)
    (chk 195 (string-ci<=? "zoRt 23" "ZoRt 24") #t)

    (chk 200 (string-ci>=? "" "zot") #f)
    (chk 201 (string-ci>=? "zot" "") #t)
    (chk 202 (string-ci>=? "a" "abc") #f)
    (chk 203 (string-ci>=? "Apple Core" "Apple") #t)
    (chk 204 (string-ci>=? "Zort 23" "Zort 23") #t)
    (chk 205 (string-ci>=? "zoRt 23" "ZoRt 22") #t))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test14)

(define-external (chk testnum result expected) testchk)

(define (RR s)
    (set! %record-prefix-char #\~)
    (set! %record-read (lambda (port) (list->%record (read port))))
    (read (open-input-string s))) 

(define (test14)
    
    ;;; 6.8  Vectors
    
    (chk 01 (vector? '()) #f)
    (chk 02 (vector? '#()) #t)
    (chk 03 (vector? '(1 2)) #f)
    (chk 04 (vector? '#(1 2)) #t)
    (chk 05 (vector? 'x) #f)
    (chk 06 (vector? "x") #f)
    (chk 07 (vector? '#\a) #f)
    (chk 08 (vector? (lambda (x) x)) #f)
    (chk 09 (vector? #f) #f)
    (chk 10 (vector? #t) #f)
    (chk 11 (vector? -1) #f)
    (chk 12 (vector? 0) #f)
    (chk 13 (vector? 1) #f)
    (chk 14 (vector? -2.5) #f)
    (chk 15 (vector? 0.0) #f)
    (chk 16 (vector? 1.5) #f)
    
    (chk 20 (vector-length (make-vector 20)) 20)
    (chk 21 (eq? (make-vector 0) '#()) #t)
    (chk 22 (make-vector 5 (make-vector 1 1)) '#(#(1) #(1) #(1) #(1) #(1)))
    
    (chk 30 (vector) '#())
    (chk 31 (vector 0) '#(0))
    (chk 32 (vector 0 1) '#(0 1))
    (chk 31 (vector 0 1 2 3 4) '#(0 1 2 3 4))
    
    (chk 40 (vector-length '#()) 0)
    (chk 41 (vector-length '#(1 2 3)) 3)
    (chk 42 (vector-length (make-vector 1000)) 1000)
    
    (chk 50 (vector-ref '#(zero one two three) 0) 'zero)
    (chk 51 (vector-ref '#(zero one two three) 1) 'one)
    (chk 52 (vector-ref '#(zero one two three) 3) 'three)
    
    (let ((xvector (make-vector 4)))
	 (vector-set! xvector 0 'zero)
	 (vector-set! xvector 1 'one)
	 (vector-set! xvector 2 'two)
	 (vector-set! xvector 3 'three)
	 (chk 60 xvector '#(zero one two three)))
    
    (chk 70 (vector->list '#()) '())  
    (chk 71 (vector->list '#(zero one two three)) '(zero one two three))
    
    (chk 80 (list->vector '()) '#())
    (chk 81 (list->vector '(1)) '#(1))
    (chk 82 (list->vector '(1 2 3 4)) '#(1 2 3 4))
    
    (chk 90 (vector-fill! (make-vector 10) #t)
	 '#(#t #t #t #t #t #t #t #t #t #t))
    (chk 91 (vector-fill! '#() 1) '#())
    
    ;;; *.*  Records
    
    (chk 101 (%record? '()) #f)
    (chk 102 (%record? '#()) #f)
    (chk 103 (%record? '(1 2)) #f)
    (chk 104 (%record? '#(1 2)) #f)
    (chk 105 (%record? 'x) #f)
    (chk 106 (%record? "x") #f)
    (chk 107 (%record? '#\a) #f)
    (chk 108 (%record? (lambda (x) x)) #f)
    (chk 109 (%record? #f) #f)
    (chk 110 (%record? #t) #f)
    (chk 111 (%record? -1) #f)
    (chk 112 (%record? 0) #f)
    (chk 113 (%record? 1) #f)
    (chk 114 (%record? -2.5) #f)
    (chk 115 (%record? 0.0) #f)
    (chk 116 (%record? 1.5) #f)
    (chk 117 (%record? (make-%record 1)) #t)
    
    (chk 120 (%record-length (make-%record 20)) 20)
    (chk 121 (eq? (make-%record 0) (make-%record 0)) #f)
    (chk 122 (eq? (make-%record 0) (make-%record 0)) #f)
    (chk 123 (equal? (make-%record 0) (make-%record 0)) #f)
    (chk 124 (make-%record 0) (make-%record 0))
    (chk 125 (make-%record 5 #t) (rr "#~(#t #t #t #t #t)"))
    
    (chk 130 (%record) (rr "#~()"))
    (chk 131 (%record 0) (rr "#~(0)"))
    (chk 132 (%record 0 1) (rr "#~(0 1)"))
    (chk 131 (%record 0 1 2 3 4) (rr "#~(0 1 2 3 4)"))
    
    (chk 140 (%record-length (rr "#~()")) 0)
    (chk 141 (%record-length (rr "#~(1 2 3)")) 3)
    (chk 142 (%record-length (make-%record 1000)) 1000)
    
    (chk 150 (%record-ref (rr "#~(zero one two three)") 0) 'zero)
    (chk 151 (%record-ref (rr "#~(zero one two three)") 1) 'one)
    (chk 152 (%record-ref (rr "#~(zero one two three)") 3) 'three)
    
    (let ((x%record (make-%record 4)))
	 (%record-set! x%record 0 'zero)
	 (%record-set! x%record 1 'one)
	 (%record-set! x%record 2 'two)
	 (%record-set! x%record 3 'three)
	 (chk 160 x%record (rr "#~(zero one two three)")))
    
    (chk 170 (%record->list (rr "#~()")) '()) 
    (chk 171 (%record->list (rr "#~(zero one two three)"))
	 '(zero one two three))
    
    (chk 180 (list->%record '()) (rr "#~()"))
    (chk 181 (list->%record '(1)) (rr "#~(1)"))
    (chk 182 (list->%record '(1 2 3 4)) (rr "#~(1 2 3 4)")))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test15)

(define-external (chk testnum result expected) testchk)

(define unknown #t)

(define (test15)

;;; 6.9  Control features
     
    (chk 01 (procedure? '()) #f)
    (chk 02 (procedure? '#()) #f)
    (chk 03 (procedure? '(1 2)) #f)
    (chk 04 (procedure? '#(1 2)) #f)
    (chk 05 (procedure? 'x) #f)
    (chk 06 (procedure? "x") #f)
    (chk 07 (procedure? '#\a) #f)
    (chk 08 (procedure? (lambda (x) x)) #t)
    (chk 09 (procedure? #f) #f)
    (chk 10 (procedure? #f) #f)
    (chk 11 (procedure? -1) #f)
    (chk 12 (procedure? 0) #f)
    (chk 13 (procedure? 1) #f)
    (chk 14 (procedure? -2.5) #f)
    (chk 15 (procedure? 0.0) #f)
    (chk 16 (procedure? 1.5) #f)

    (chk 20 (apply (lambda () 1) '()) 1)
    (chk 21 (apply (lambda (x) x) '(1)) 1)
    (chk 22 (apply (lambda (x y) (+ x y)) '(1 2)) 3)
    (chk 23 (apply (lambda x x) '(1 2 3)) '(1 2 3))
    (chk 24 (apply (lambda (x . y) (cons x y)) '(1 2 3 4)) '(1 2 3 4))
    (chk 25 (apply + '(1 2 3 4)) 10)
    (chk 26 (apply + 1 2 3 4 '()) 10)
    (chk 27 (apply + 1 2 '(3 4)) 10)
    (let ((x '(a b c)))
	 (chk 28 (eq? (apply list x) x) #f))

    (chk 30 (map (lambda (x) (+ x 1)) '(0 1 2 3 4 5 6 7 8 9))
	 '(1 2 3 4 5 6 7 8 9 10))
    (chk 31 (map + '(1 2 3 4 5) '(2 4 6 8 10)) '(3 6 9 12 15))
    (chk 32 (map + '(1 2 3 4 5) '(10 20 30 40 50) '(100 200 300 400 500))
	 '(111 222 333 444 555))
    (chk 33 (map + '(1 2 3 4 5) '(10 20 30 40 50) '(100 200 300 400 500)
		 '(1000 2000 3000 4000 5000))
	 '(1111 2222 3333 4444 5555))

    (let ((x (make-vector 10)))
	 (for-each
	     (lambda (i)
		     (vector-set! x i (- 0 i)))
	     '(0 1 2 3 4 5 6 7 8 9))
	 (chk 40 x '#(0 -1 -2 -3 -4 -5 -6 -7 -8 -9))
	 (for-each
	     (lambda (i j) (vector-set! x i (+ i j)))
	     '(0 1 2 3 4 5 6 7 8 9) '(0 10 20 30 40 50 60 70 80 90))
	 (chk 41 x '#(0 11 22 33 44 55 66 77 88 99))
	 (for-each
	     (lambda (i j k) (vector-set! x i (+ i j k)))
	     '(0 1 2 3 4 5 6 7 8 9) '(0 10 20 30 40 50 60 70 80 90)
	     '(0 100 200 300 400 500 600 700 800 900))
	 (chk 42 x '#(0 111 222 333 444 555 666 777 888 999))
	 (for-each
	     (lambda (i j k l) (vector-set! x i (+ i j k l)))
	     '(0 1 2 3 4 5 6 7 8 9) '(0 10 20 30 40 50 60 70 80 90)
	     '(0 100 200 300 400 500 600 700 800 900)
	     '(0 1000 2000 3000 4000 5000 6000 7000 8000 9000))
	 (chk 43 x
	      '#(0 1111 2222 3333 4444 5555 6666 7777 8888 9999)))

    (chk 50 (with-output-to-string cwcc1) "12")
    (chk 51 (with-output-to-string cwcc2) "12")
    (chk 52 (with-output-to-string cwcc3) "hi")
    (chk 53 (with-output-to-string cwcc4) "HEY!")
    (chk 54 (with-output-to-string mondo-bizarro) "11213")
    
    (set! unknown (lambda () 'zero-args))
    (chk 60 (unknown) 'zero-args)
    (set! unknown (lambda x x))
    (chk 61 (unknown) '())
    (chk 62 (unknown 1) '(1))
    (chk 63 (unknown 1 2) '(1 2))
    (chk 64 (unknown 1 2 3 4 5 6) '(1 2 3 4 5 6))
    (set! unknown (lambda (x) x))
    (chk 65 (unknown 23) 23)
    (set! unknown (lambda (x . y) (list x y)))
    (chk 66 (unknown 1) '(1 ()))
    (chk 67 (unknown 1 2) '(1 (2)))
    (chk 68 (unknown 1 2 3 4 5) '(1 (2 3 4 5)))
    (set! unknown (lambda (x y z) (list x y z)))
    (chk 69 (unknown 20 30 40) '(20 30 40))

    (chk 70 (force (delay (string-length "abc"))) 3)
    (chk 71 (procedure? (delay (string-length "abc"))) #t)
    (let* ((y 0)
	   (x (delay (begin (set! y (+ 1 y)) y))))
	  (chk 72 (force x) 1)
	  (chk 73 (force x) 1)))

(define (cwcc1)
    ;;; Normal return.
    (display (call-with-current-continuation (lambda (x) (display 1) 2))))

(define (cwcc2)
    ;;; Return value via the continuation.
    (display (call-with-current-continuation (lambda (x)
						     (display 1)
						     (x 2)
						     (display 3)))))

(define (cwcc3)
    ;;; Call the returned continuation. (Dybvig, pg 80)
    (display (let ((x (call-with-current-continuation (lambda (k) k))))
		  (x (lambda (ignore) "hi")))))

(define (cwcc4)
    ;;; Another trick (Dybvig, pg 81)
    (display (((call-with-current-continuation (lambda (k) k))
	       (lambda (x) x)) 'hey!)))

(define (mondo-bizarro)
    ;;; Finally, a classic (Lisp Pointers I-2.27)
    (let ((k (call-with-current-continuation (lambda (c) c))))
	 (display 1)
	 (call-with-current-continuation (lambda (c) (k c)))
	 (display 2)
	 (call-with-current-continuation (lambda (c) (k c)))
	 (display 3)))

(define (WITH-OUTPUT-TO-STRING func)
    (let ((port (open-output-string))
	  (save-current-output-port (current-output-port)))
	 (set! scrt5_current-output-port-value port)
	 (func)
	 (set! scrt5_current-output-port-value save-current-output-port)
	 (get-output-string port)))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test16)

(define-external (chk testnum result expected) testchk)

(define BIGENDIAN (not (eq? (c-byte-ref "A" (- 1 c-sizeof-tscp)) 1)))

(define LSB-SHORT (if bigendian (/ c-sizeof-int 2) 0))
					; byte offset to lsb short

(define MSB-SHORT (if bigendian 0 (/ c-sizeof-int 2)))
					; byte offset to msb short

(define (test16)
    
    ;;; *.*  Extensions for accessing C structures.  Byte order is computed
    
    (let ((s (make-string 10 #\*)))
	 (c-byte-set! s 0 (char->integer #\S))
	 (c-byte-set! s 1 (char->integer #\c))
	 (c-byte-set! s 2 (char->integer #\h))
	 (c-byte-set! s 3 (char->integer #\e))
	 (c-byte-set! s 4 (char->integer #\m))
	 (c-byte-set! s 5 (char->integer #\e))
	 (c-byte-set! s 6 0.0)
	 (c-byte-set! s 7 -1)
	 (c-byte-set! s 8 255)
	 (chk 1 (c-string->string s) "Scheme")
	 (chk 2 (integer->char (c-byte-ref s 0)) #\S)
	 (chk 3 (integer->char (c-byte-ref s 2)) #\h)
	 (chk 4 (c-byte-ref s 7) 255)
	 (chk 5 (c-byte-ref s 8) 255))
    
    (let ((s (make-string 10 #\*)))
	 (cond ((and (= c-sizeof-int 4) (= c-sizeof-short 2))
		(c-int-set! s 0 #xffff)
		(chk 10 (c-int-ref s 0) #xffff)
		(chk 11 (c-shortunsigned-ref s lsb-short) #xffff)
		(chk 12 (c-shortunsigned-ref s msb-short) 0)
		(chk 13 (c-shortint-ref s lsb-short) -1)
		(chk 14 (c-shortint-ref s msb-short) 0)
		(c-shortint-set! s msb-short -1)
		(chk 15 (c-int-ref s 0) -1)
		(c-shortunsigned-set! s lsb-short #xfffe)
		(chk 16 (c-int-ref s 0) -2))
	       (else (format #t "Tests 10-16 omitted~%"))))
    
    (let ((s (make-string 20 #\*)))
	 (cond ((and (= c-sizeof-int 4) (= c-sizeof-tscp 4))
		(c-unsigned-set! s 0 (- (expt 2 32) 1))
		(c-int-set! s 4 4)
		(chk 20 (c-int-ref s 0) -1)
		(chk 21 (c-unsigned-ref s 0) (- (expt 2 32) 1))
		(chk 22 (c-int-ref s 4) 4)
		(chk 23 (c-unsigned-ref s 4) 4)
		(chk 24 (c-tscp-ref s 4) 1)
		(c-tscp-set! s 0 -1)
		(chk 25 (c-int-ref s 0) -4))
	       ((and (= c-sizeof-int 4) (= c-sizeof-tscp 8))
		(c-unsigned-set! s 0 (- (expt 2 32) 1))
		(c-int-set! s 4 4)
		(chk 20 (c-int-ref s 0) -1)
		(chk 21 (c-unsigned-ref s 0) (- (expt 2 32) 1))
		(chk 22 (c-int-ref s 4) 4)
		(chk 23 (c-unsigned-ref s 4) 4)
		(c-int-set! s 8 -4)
		(c-unsigned-set! s 12  (- (expt 2 32) 1))
		(chk 24 (c-tscp-ref s 8) -1)
		(c-tscp-set! s 0 -1)
		(chk 25 (c-int-ref s 0) -4))
	       (else (format #t "Tests 20-25 omitted~%"))))
    
    
    (let ((s (make-string 20)))
	 (c-float-set! s 0 -1)
	 (chk 30 (c-float-ref s 0) -1.0)
	 (c-double-set! s 0 -1)
	 (chk 31 (c-double-ref s 0) -1.0))
    
    (let ((s (make-string 10 #\*))
	  (v (make-vector 10 -1)))
	 (chk 40 (scheme-byte-ref s (if bigendian (- c-sizeof-tscp 2) 1)) 10)
	 (chk 41 (scheme-byte-ref s c-sizeof-tscp) (char->integer #\*))
	 (chk 42 (scheme-byte-ref s (+ 10 c-sizeof-tscp)) 0)
	 (scheme-byte-set! s (+ c-sizeof-tscp 1) (char->integer #\^))
	 (scheme-byte-set! s (+ c-sizeof-tscp 5) (char->integer #\^))
	 (chk 43 s "*^***^****")
	 (chk 44 (scheme-s2cuint-ref s 0) (+ 2560 134))
	 (chk 45 (scheme-int-ref v c-sizeof-tscp)
	      (if (and bigendian (= c-sizeof-int 2) (= c-sizeof-tscp 4))
		  -1
		  -4))
	 (scheme-int-set! v c-sizeof-tscp 4)
	 (scheme-int-set! v (+ c-sizeof-int c-sizeof-tscp) 0)
	 (chk 46 (scheme-tscp-ref v c-sizeof-tscp)
	      (if (and bigendian (= c-sizeof-int 2) (= c-sizeof-tscp 4))
		  (expt 2 16)
		  1))
	 (chk 47 (scheme-int-ref v c-sizeof-tscp) 4)
	 (scheme-tscp-set! v c-sizeof-tscp "This is the TSCP")
	 (chk 48 (vector-ref v 0) "This is the TSCP"))
    
    ;;; *.*  Bit operations
    
    (chk 50 (bit-and 1) 1)
    (chk 51 (bit-or 1) 1)
    (chk 52 (bit-xor 1) 1)
    (chk 53 (bit-not (bit-not 1)) 1)
    (chk 54 (bit-and 1 3 5) 1)
    (chk 55 (bit-or 1 3 5) 7)
    (chk 56 (bit-xor 1 3 5) 7)
    (chk 57 (bit-lsh 1 31) 2147483648.)
    (chk 58 (bit-rsh -1 31) 1))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test17)

(define-external (chk testnum result expected) testchk)

(define (MAKE-COUNTER x) (lambda () (set! x (+ 1 x))))

;;; This funny little function showed up on the Scheme mailing list.  It
;;; creates an object which has state which never uses a SET!.  The I/O
;;; statements in it are there for debugging purposes.

(define (MAKE-CELL)
  (call-with-current-continuation
    (lambda (return-from-make-cell)
      (letrec ((state
                 (call-with-current-continuation
                   (lambda (return-new-state)
                     (return-from-make-cell
                       (lambda (op)
;			       (format (current-output-port) "OP is ~s~%" op)
                         (case op
                           ((set)
                            (lambda (value)
                              (call-with-current-continuation
                                (lambda (return-from-access)
                                  (return-new-state
				      (begin
;				      (format (current-output-port)
;					      "VALUE is ~s~%" value)
                                      (list value return-from-access)))))))
                           ((get) (car state)))))))))
;	(format (current-output-port) "STATE is ~s~%" state)
        ((cadr state) 'done)))))

	 
(define (test17)
    
    ;;; Exercise the display and call-with-current-continuation some more.
    
    (let* ((cntr1 (make-counter 0))
	   (cntr2 (make-counter 100))
	   (c1-1 (cntr1))
	   (c2-101 (cntr2))
	   (c1-2 (cntr1))
	   (c2-102 (cntr2)))
	  (chk 1 (list c1-1 c2-101 c1-2 c2-102) '(1 101 2 102)))
    
    (let ((cell (make-cell)))
	 ((cell 'set) 23)
	 (chk 2 (cell 'get) 23)))

 
	  
	  
	  
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test18)

(define-external (chk test-number result expected) testchk)

(define (TEST18)
    
    ;;; 6.10  I/O tests.
    
    (chk 01 (input-port? '()) #f)
    (chk 02 (input-port? '#()) #f)
    (chk 03 (input-port? '(1 2)) #f)
    (chk 04 (input-port? '#(1 2)) #f)
    (chk 05 (input-port? 'x) #f)
    (chk 06 (input-port? "x") #f)
    (chk 07 (input-port? '#\a) #f)
    (chk 08 (input-port? (lambda (x) x)) #f)
    (chk 09 (input-port? #f) #f)
    (chk 10 (input-port? #t) #f)
    (chk 11 (input-port? -1) #f)
    (chk 12 (input-port? 0) #f)
    (chk 13 (input-port? 1) #f)
    (chk 14 (input-port? -1.5) #f)
    (chk 15 (input-port? 0.0) #f)
    (chk 16 (input-port? 1.5) #f)
    (chk 17 (input-port? stdin-port) #t)
    
    (chk 21 (output-port? '()) #f)
    (chk 22 (output-port? '#()) #f)
    (chk 23 (output-port? '(1 2)) #f)
    (chk 24 (output-port? '#(1 2)) #f)
    (chk 25 (output-port? 'x) #f)
    (chk 26 (output-port? "x") #f)
    (chk 27 (output-port? '#\a) #f)
    (chk 28 (output-port? (lambda (x) x)) #f)
    (chk 29 (output-port? #f) #f)
    (chk 30 (output-port? #t) #f)
    (chk 31 (output-port? -1) #f)
    (chk 32 (output-port? 0) #f)
    (chk 33 (output-port? 1) #f)
    (chk 34 (output-port? -1.5) #f)
    (chk 35 (output-port? 0.0) #f)
    (chk 36 (output-port? 1.5) #f)
    (chk 37 (output-port? stdout-port) #t)
    (chk 38 (output-port? stderr-port) #t)
    
    (chk 40 (call-with-output-file "test18.tmp"
		(lambda (port)
			(write "Test18 - 40" port)
			'test-40))
	 'test-40)
    (chk 43 (call-with-input-file "test18.tmp"
		(lambda (port)
			(chk 41 (read port) "Test18 - 40")
			(chk 42 (eof-object? (read port)) #t)
			'test-43))
	 'test-43)

    (chk 50 (with-output-to-file "test18.tmp"
		(lambda ()
			(write "Test18 - 50")
			'test-50))
	 'test-50)
    (chk 53 (with-input-from-file "test18.tmp"
		(lambda ()
			(chk 51 (read) "Test18 - 50")
			(chk 52 (eof-object? (read)) #t)
			'test-53))
	 'test-53)

    (let ((port (open-input-file "test18.tmp")))
	 (chk 60 (read port) "Test18 - 50")
	 (chk 61 (eof-object? (read port)) #t)
	 (close-input-port port))

    (let ((port (open-output-file "test18.tmp")))
	 (write "Test18 - 70" port)
	 (close-output-port port)
	 (set! port (open-file "test18.tmp" "r"))
	 (chk 70 (read port) "Test18 - 70")
	 (chk 71 (eof-object? (read port)) #t)
	 (chk 72 (eof-object? (read port)) #t)
	 (close-port port))

    (let ((port (open-input-string "1.2 (a b c)")))
	 (chk 80 (read port) 1.2)
	 (chk 81 (read port) '(a b c))
	 (chk 82 (eof-object? (read port)) #t)
	 (chk 83 (eof-object? (read port)) #t))

    (let ((port (open-output-string)))
	 (chk 90 (get-output-string port) "")
	 (write '(a b c d) port)
	 (chk 91 (get-output-string port) "(A B C D)")
	 (chk 92 (get-output-string port) "")
	 (write "This is a string" port)
	 (chk 93 (get-output-string port) "\"This is a string\"")))
		     
		     
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test19)

(define-external (chk test-number result expected) testchk)

(define (TEST19)
    
    ;;; 6.10  I/O tests.

    (let ((port (open-input-string "*")))
	 (chk 1 (peek-char port) #\*)
	 (chk 2 (peek-char port) #\*)
	 (chk 3 (read-char port) #\*)
	 (chk 4 (eof-object? (read-char port)) #t)
	 (chk 5 (eof-object? (peek-char port)) #t))

    (with-output-to-file "test19.tmp"
	(lambda ()
		(write-char #\*)
		(chk 10 (write-count) 1)
		(chk 11 (write-width) 80)
		(set-write-width! 132)
		(chk 12 (write-width) 132)))

    (with-input-from-file "test19.tmp"
	(lambda ()
		(chk 21 (peek-char) #\*)
		(chk 22 (peek-char) #\*)
		(chk 23 (read-char) #\*)
		(chk 24 (eof-object? (read-char)) #t)
		(chk 25 (eof-object? (peek-char)) #t)))

    (with-output-to-file "test19.tmp"
	(lambda ()
		(with-input-from-file "test19.tmp"
		    (lambda ()
			    (display 'a)
			    (chk 30 (eof-object? (read)) #t)
			    (flush-buffer)
			    (chk 31 (read) 'a)))))

    (chk 50 (format "~%") (list->string '(#\newline)))
    (chk 51 (format "~a~s" "a" "a") "a\"a\"")
    (chk 52 (format "~A~S" "a" "a") "a\"a\"")
    (chk 53 (format "~c~C" #\a #\a) "aa")
    (chk 54 (format "~~") "~")
)
(module test20)

(define (TEST20)
    (with-input-from-file "test20-input.sc"
          (lambda ()
                  (chk 1 (read) '#T)
                  (chk 2 (read) '#T)
                  (chk 3 (read) '#F)
                  (chk 4 (read) '#F)
                  (chk 5 (read) 'APPLE)
                  (chk 6 (read) 'APPLE)
                  (chk 7 (read) '\aPPLE)
                  (chk 8 (read) '\1+)
                  (chk 9 (read) '+)
                  (chk 10 (read) '-)
                  (chk 11 (read) 'A.B)
                  (chk 12 (read) '1)
                  (chk 13 (read) '-1)
                  (chk 14 (read) '1)
                  (chk 15 (read) '3)
                  (chk 16 (read) '9)
                  (chk 17 (read) '161)
                  (chk 18 (read) '3)
                  (chk 19 (read) '9)
                  (chk 20 (read) '161)
                  (chk 21 (read) '1.3)
                  (chk 22 (read) '-1.3)
                  (chk 23 (read) '130.)
                  (chk 24 (read) '-130.)
                  (chk 25 (read) '#\a)
                  (chk 26 (read) '#\A)
                  (chk 27 (read) '#\tab)
                  (chk 28 (read) '#\newline)
                  (chk 29 (read) '#\newline)
                  (chk 30 (read) '#\formfeed)
                  (chk 31 (read) '#\return)
                  (chk 32 (read) '#\space)
                  (chk 33 (read) '#\space)
                  (chk 34 (read) '#\\)
                  (chk 35 (read) '#\space)
                  (chk 36 (read) '#\tab)
                  (chk 37 (read) '"")
                  (chk 38 (read) '"This is a string")
                  (chk 39 (read) '"This is a string with \"embedded\" quote marks")
                  (chk 40 (read) '"This string covers
two lines")
                  (chk 41 (read) '())
                  (chk 42 (read) '(A))
                  (chk 43 (read) '(A . B))
                  (chk 44 (read) '(A B C D))
                  (chk 45 (read) '(A B C D))
                  (chk 46 (read) '((A B) (C D) (E F) (G H)))
                  (chk 47 (read) '(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L))
                  (chk 48 (read) '#())
                  (chk 49 (read) '#(1))
                  (chk 50 (read) '#(1 2 3 4))
                  (chk 51 (read) '#(#(1 2) #(2 3) #(3 4)))
                  (chk 52 (read) '#(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L))
                  (chk 53 (read) ''A)
                  (chk 54 (read) ''(1 2 3))
                  (chk 55 (read) ',B)
                  (chk 56 (read) ',@C)
                  (chk 57 (read) '`(A B C))
                  (chk 58 (read) '`(A ,B ,@C))
)))
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test21)

(define-external (chk test-number result expected) testchk)

;;; An example of the use of nested defines from Abelson & Sussman.

(define (SUM term a next b)
    (if (> a b)
	0.
	(+ (term a) (sum term (next a) next b))))

(define (PI-SUM a b)
    (define (PI-TERM x)
	    (/ 1. (* x (+ x 2))))
    (define (PI-NEXT x)
	    (+ x 4.))
    (sum pi-term a pi-next b))

(define (CUBE x) (* x (* x x)))

(define (INTEGRAL f a b dx)
    (define (ADD-DX x) (+ x dx))
    (* (sum f (+ a (/ dx 2.)) add-dx b) dx))

(define TOP-TEST21 40)

(define (TEST21)
    
    (chk 1 (integral cube 0 1 .01) 0.249987492)
    
    (chk 10 ((lambda () 10)) 10)
    (chk 11 ((lambda (x) x) 11) 11)
    (chk 12 ((lambda x x) 12) '(12))
    (chk 13 ((lambda (x . y) (cons x y)) 1 3) '(1 3))
    (chk 14 ((lambda (x y . z) (list x y z)) 1 2 3 4) '(1 2 (3 4)))
    
    (chk 20 (if #t #f) #f)
    (chk 21 (if #t #f #t) #f)
    (chk 22 (if #f #f #t) #t)
    
    (let ((get #f)
	  (set #f))
	 (let ((value #f))
	      (set! get (lambda () value))
	      (set! set (lambda (x) (set! value x) x)))
	 (chk 30 (get) #f)
	 (chk 31 (set 31) 31)
	 (chk 32 (get) 31))
    
    (set! top-test21 40)
    (chk 40 top-test21 40)
    
    (let ((f (lambda (x)
		     (cond ((eq? x 1) 'one)
			   ((eq? x 2) 'two)
			   ((if (number? x) x #f) => (lambda (x) (- x 1)))
			   (else 'else)))))
	 (chk 50 (f 1) 'one)
	 (chk 51 (f 2) 'two)
	 (chk 53 (f 10) 9)
	 (chk 54 (f 20) 19)
	 (chk 55 (f 'a) 'else))
    
    (let ((f (lambda (x)
		     (case x
			   ((2 3 5 7) 'prime)
			   ((1) 'one)
			   ((a e i o u) 'vowel)
			   (else 'mystery)))))
	 (chk 60 (f 5) 'prime)
	 (chk 61 (f 1) 'one)
	 (chk 62 (f 'u) 'vowel)
	 (chk 63 (f 'f) 'mystery))
    
    (chk 70 (and (= 2 2) (> 2 1)) #t)
    (chk 71 (and (= 2 2) (< 2 1)) #f)
    (chk 72 (and 1 2 'c '(f g)) '(f g))
    (chk 73 (and) #t)
    (chk 74 (and 1) 1)
    (chk 75 (and '()) '())
    (chk 76 (and 1 2 '()) '())
    (chk 77 (and (or #f '() (and (not #f) 1 2 3))) 3)
    (chk 78 (and '() 1 2) '())
    
    (chk 80 (or (= 2 2) (> 2 1)) #t)
    (chk 81 (or (= 2 2) (< 2 1)) #t)
    (chk 82 (or #f #f #f) #f)
    (chk 83 (or (memq 'b '(a b c)) (char->integer 0)) '(b c))
    (chk 84 (or) #f)
    (chk 85 (or 1) 1)
    (chk 86 (or '()) '())
    (chk 87 (or (cdr '(a)) 0) 0)
    (chk 88 (or (cdr '(a)) 0 1) 0)
    
    (let ((x 'x)
	  (y 'y)
	  (z 'z))
	 (let ((x 'newx)
	       (y x)
	       (z y))
	      (chk 90 x 'newx)
	      (chk 91 y 'x)
	      (chk 92 z 'y))
	 (let* ((x 'newx)
		(y x)
		(z y))
	       (chk 90 x 'newx)
	       (chk 91 y 'newx)
	       (chk 92 z 'newx)))
    
    (letrec ((even*? (lambda (n) (if (zero? n) #t (odd*? (- n 1)))))
	     (odd*?  (lambda (n) (if (zero? n) #f (even*? (- n 1))))))
	    (chk 100 (even*? 88) #t)
	    (chk 101 (odd*? 13) #t)
	    (chk 102 (even*? 7) #f)
	    (chk 103 (odd*? 14) #f))
    
    (let ((x 1))
	 (begin (chk 110 x 1)
		(set! x 10)
		(chk 111 x 10)))
    
    (let ((x (do ((i 0 (+ 1 i))
		  (j 0)
		  (k '() (cons i k)))
		 ((= i 5) k))))
	 (chk 120 x '(4 3 2 1 0)))
    
    (do ((i 0 (+ 1 i))
	 (j (lambda (x) (x))))
	((= i 10))
	(chk 130 (j (lambda () i)) i))
    
    (do ((i 0 (+ i 1))
	 (j (lambda (x) (x)))
	 (k 0 (+ k 1))
	 (l 0 (+ l 1))
	 (m '() (cons l m)))
	((eq? i 5)
	 (chk 140 m '(9 7 5 3 1)))
	(j (lambda () (list i k)))
	(chk 140 (* i 2) k)
	(chk 141 (* i 2) l)
	(set! k (+ k 1))
	(set! l (+ l 1)))

    (do ((i 0 (+ 1 i)))
	((eq? i 10))
	(set! i (+ i 1))
	(chk 150 (remainder i 2) 1))
    
    (let loop ((l1 '(1 2 3 4)) (l2 '()))
	 (if l1
	     (loop (cdr l1) (cons (car l1) l2))
	     (chk 160 l2 '(4 3 2 1))))
    
    (chk 170 `(list ,(+ 1 2) 4)
	 '(list 3 4))
    (chk 171 (let ((name 'a)) `(list ,name ',name))
	 '(list a (quote a)))
    (chk 172 `(a ,(+ 1 2) ,@(map abs '(4 -5 6)) b)
	 '(a 3 4 5 6 b))
    (chk 173 `((foo ,(- 10 3)) ,@(cdr '(c)) . ,(car '(cons)))
	 '((foo 7) . cons))
    (chk 174 `(a `(b ,(+ 1 2) ,(foo ,(+ 1 3) d) e) f)
	 '(a `(b ,(+ 1 2) ,(foo 4 d) e) f))
    (chk 175 (let ((name1 'x) (name2 'y)) `(a `(b ,,name1 ,',name2 d) e))
	 '(a `(b ,x ,'y d) e))
)
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test22)

(define-external (chk test-number result expected) testchk)

(define (FSM1 l)
    (letrec ((s1 (lambda (l c)
			 (set! c (+ c 1))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 1 c))))))
	     (s2 (lambda (l c)
			 (set! c (+ c 1))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 2 c))))))
	     (s3 (lambda (l c)
			 (set! c (+ c 1))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 3 c))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))

(define (FSM2 l)
    (letrec ((s1 (lambda (l c)
			 (case (car l)
			       ((a) (s1 (cdr l) (+ c 1)))
			       ((b) (s2 (cdr l) (+ c 1)))
			       ((c) (s3 (cdr l) (+ c 1)))
			       (else (s4 (list 1 (+ c 1)))))))
	     (s2 (lambda (l c)
			 (case (car l)
			       ((a) (s1 (cdr l) (+ c 1)))
			       ((b) (s2 (cdr l) (+ c 1)))
			       ((c) (s3 (cdr l) (+ c 1)))
			       (else (s4 (list 2 (+ c 1)))))))
	     (s3 (lambda (l c)
			 (case (car l)
			       ((a) (s1 (cdr l) (+ c 1)))
			       ((b) (s2 (cdr l) (+ c 1)))
			       ((c) (s3 (cdr l) (+ c 1)))
			       (else (s4 (list 3 (+ c 1)))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))

(define (FSM3 l)
    (letrec ((s1 (lambda (l)
			 (case (car l)
			       ((a) (s1 (cdr l)))
			       ((b) (s2 (cdr l)))
			       ((c) (s3 (cdr l)))
			       (else #f))))
	     (s2 (lambda (l)
			 (case (car l)
			       ((a) (s1 (cdr l)))
			       ((b) (s2 (cdr l)))
			       ((c) (s3 (cdr l)))
			       (else #f))))
	     (s3 (lambda (l)
			 (case (car l)
			       ((a) (s1 (cdr l)))
			       ((b) (s2 (cdr l)))
			       ((c) (s3 (cdr l)))
			       (else #t)))))
	    (s1 l)))

(define (FSM4 l)
    (letrec ((save '())
    	     (s1 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () l))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 1 c))))))
	     (s2 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () l))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 2 c))))))
	     (s3 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () l))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 3 c))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))

(define (FSM5 l)
    (letrec ((save '())
    	     (s1 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () c))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 1 c))))))
	     (s2 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () c))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 2 c))))))
	     (s3 (lambda (l c)
			 (set! c (+ c 1))
			 (set! save (lambda () c))
			 (case (car l)
			       ((a) (s1 (cdr l) c))
			       ((b) (s2 (cdr l) c))
			       ((c) (s3 (cdr l) c))
			       (else (s4 (list 3 c))))))
	     (s4 (lambda (x) x)))
	    (s1 l 0)))
	   
(define (TEST22)
    
    (chk 1 (fsm1 '(d)) '(1 1))
    (chk 2 (fsm1 '(a b c d)) '(3 4))
    
    (chk 10 (fsm2 '(d)) '(1 1))
    (chk 11 (fsm2 '(a b c d)) '(3 4))
    
    (chk 20 (fsm3 '(d)) #f)
    (chk 21 (fsm3 '(c d)) #t)
    
    (chk 30
	 (let l1 ((l '((1 2 3) (4 5 6 7) (8 9))) (m '()))
	      (if l
		  (let l2 ((sl (car (apply (lambda () l) '()))) (c 0))
		       (if sl
			   (l2 (cdr sl) (+ (apply (lambda () c) '()) 1))
			   (l1 (cdr l) (append m (list c)))))
		  m))
	 '(3 4 2))
    
    (chk 40 (fsm4 '(d)) '(1 1))
    (chk 41 (fsm4 '(a b c d)) '(3 4))
    
    (chk 50 (fsm5 '(d)) '(1 1))
    (chk 51 (fsm5 '(a b c d)) '(3 4))

)
;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;


(module test23)

(define-external (chk test-number result expected) testchk)

(define (FSM23-1 c)
    (letrec ((s1 (lambda (c)
			 (if (eq? c 0) #t (s2 (- c 1)))))
	     (s2 (lambda (c)
			 (if (eq? c 0) #f (s1 (- c 1))))))
	    (s1 c)))

(eval-when (load)
    (define fsm23-1-trials 1000000))

(eval-when (eval)
    (define fsm23-1-trials 10000))

(define (FSM23-2 c)
    (letrec ((s1 (lambda (c)
			 (if (car c) (s2  (cdr c)) (s3 (cdr c)))))
	     (s2 (lambda (c)
			 (if (car c) (s1 (cdr c)) (s3 (cdr c)))))
	     (s3 (lambda (c) c)))
	    (s1 c)))

(define (FSM23-3 c)
    (letrec ((s1 (lambda (c)
			 (if c
			     (if (car c) (s2  (cdr c)) (s3 (cdr c)))
			     'done)))
	     (s2 (lambda (c) (s3 c)))
	     (s3 (lambda (c) (s1 c))))
	    (s1 c)))

(define DEF1-23 (lambda () #f))

(define (DEF2-23) #f)

;;; The following test verifies that assignment to variables initially bound
;;; to functions is correctly handled.

(define (NESTED23)
    (let ((f1 (lambda () 'first-f1)))
	 (define (f2) 'first-f2)
	 (define (f3) 'only-f3)
	 (let ((result (list (f1) (f2) (f3))))
	      (set! f1 (lambda () 'second-f1))
	      (set! f2 (lambda () 'second-f2))
	      (append result (list (f1) (f2) (f3))))))

;;; The following test verifies that the display is correctly preserved.

(define (DISPLAY23)
    (let ((d1 (car '(a)))
	  (d2 (car '(b)))
	  (d3 (car '(c))))
	 (define (f1) d1)
	 (define (f2) d2)
	 (define (f3) d3)
	 (chk 60 (f1) 'a)
	 (chk 61 (f2) 'b)
	 (chk 62 (f3) 'c)
	 (chk 63 (display23-1) '(a-1 b-1 c-1))
	 (chk 64 (f1) 'a)
	 (chk 65 (f2) 'b)
	 (chk 66 (f3) 'c)))

(define (DISPLAY23-1)
    (let ((d1 (car '(a-1))))
	 (define (f1)
		 (let ((d2 (car '(b-1)))
		       (d3 (car '(c-1))))
		      (define (f2) (list d1 d2 d3))
		      (f2)
		      (f2)))
	 (f1)
	 (f1)))

;;; The following test assures that the variable 'a' is correctly allocated to
;;; the display.

(define (JMD-DISPLAY23 a)
    (define (i1) a)
    (define (i2 x) (if x (i2 #f)) (i1))
    (i2 #t))

;;; The following test assures that the variables 'x' and 'y' are correctly
;;; handled in the display on a tail call.

(define (BH-DISPLAY23 x y)
    (if (< x 10)
	(begin (input-port? (lambda () (list x y)))
	       (set! y (+ y 1))
	       (bh-display23 (+ x 1) (+ y 1)))
	(list x y)))

; make-gen - Try to make Icon-style generator function in Scheme->C.
; David J. Slate;	Mon Dec 18 05:10:32 CST 1989
; make-gen is called with the generator function as its first argument, and
;	the args to the generator as remaining args.  make-gen returns
;	a function object that is called with one of two messages:
;	'refresh - to re-initialize the generator.
;	'next	 - to get the next result.
; The generator function must take a leading extra arg through which the
;	suspend function is passed.
; Results are returned only by (suspend result) calls.
; When generator is exhausted, it returns '().

(define (MAKE-GEN genfun . args)
    (let* ((savefun genfun)
	   (savecal #f)
	   (call/cc call-with-current-continuation)
	   (suspnd (lambda (result)
			   (call/cc (lambda (contin)
					    (set! savefun contin)
					    (savecal result)))))
	   (gargs (cons suspnd args)))
	  (lambda (msg)
		  (cond ((eq? msg 'refresh)
			 (set! savefun genfun)
			 '() )
			((eq? msg 'next)
			 (if savefun
			     (call/cc (lambda (return)
					      (set! savecal return)
					      (if (eq? savefun genfun)
						  (apply genfun gargs)
						  (savefun '() ))
					      (set! savefun #f)
					      '() ))
			     '() ))
			(else (display "No such msg!: ")
			      (display msg)
			      (newline))))))


;	gen-sequence illustrates the use of make-gen:

(define GEN-SEQUENCE (lambda (suspnd n)
			     (suspnd n)
			     (gen-sequence suspnd (+ n 1))))

(define GENERATOR (make-gen gen-sequence 1))

;;; Assure that lexical variable in an inline tail-call is detected.

(define (interpret-query query item-identifier)
    (define (examine-each fn)
	    (item-identifier 3))
    
    (define (internal-interpret q)
	    (case (car query)
		  ((and)			; (AND <query> ...)
		   (map internal-interpret (cdr query)))
		  
		  ((contains?)			
		   (case (length query)
			 ((2) (examine-each	; (CONTAINS? word)
				  (lambda (record) 3)))
			 ((3)			; (CONTAINS? word field)
			  (examine-each
			      (lambda (record) 3)))))))
    
    (internal-interpret query))

;;; Force compilation of code to pass procedural arguments.

(define-c-external (cfunc1 pointer) int "atoi")

(define (DONT-CALL-THIS-TEST) (cfunc1 cfunc1))

;;; Make sure the compiler finds all closed over variables.

(define (BH-CLOSED23 x)
    (define (F1) (cons x x))
    (define (F2) (f1))
    (define (F3) (f1))
    (define (F4) (lambda () (f2)))
    (f3)
    f4)

;;; Make sure that SQUARE generates correct C code.

(define HC-JUNK
    (let ((SQUARE (lambda (x) (* x x))))
	 (lambda (a) (square (square a)))))

;;; Make sure that H as an argument generates correct C code.

(define HC-F (lambda (x y) x))

(define HC-G
    (let ((h (lambda () #f)))
	 (hc-f h (lambda () #f))))

;;; Problem reported by Henry Cejtin, henry@math.nwu.edu.  This procedure is
;;; incorrectly compiled.  If the commented-out cont is not commented-out,
;;; then the routine is correctly compiled.

(define (comp scan1 cont)
    (let loop
	 ((scan2
		scan1))
	 (scan2
	       (lambda ()
		       (comp
			    do-2
			    (lambda (scan3)
				    (scan3
					  not-called
					  (lambda ()
						  ; cont
						  (loop
						       do-3))
					  should-not-be-called))))
	       (lambda ()
		       (cont scan2))
	       (lambda ()
		       (cont scan2)))))

(define not-called
    (lambda ignored
	    (error 'reg "NOT POSSIBLE")))

(define should-not-be-called
    (lambda ignored
	    (error 'reg "BUG")))

(define do-1
    (lambda (one two three)
	    (one)))

(define do-2
    (lambda (one two three)
	    (two)))

(define do-3
    (lambda (one two three)
	    (three)))

(define go
    (lambda ()
	    (comp do-1
		  (lambda ignored 'ok))))

;;; Used to cause the compiler to loop.

(define (bar)
  (define (index-of-char-in-string char string start-index length-of-string)
    (cond ((= start-index length-of-string) '())
	  ((char=? (string-ref string start-index) char) start-index)
	  (#t (index-of-char-in-string
	       char string (+ start-index 1) length-of-string))))
  '())

;;; Used to cause the compiler to crash.

(define (CRASH)
    (define (F x) (+ x 1))
    (define (G x) (+ (f x) (f x)))
    (define (H) (g 23)))

;;; Check top level variable declarations.

(define-external TOP-LEVEL-X top-level)

(define (TEST-TOP)
    (set! top-level-x 1)
    (set! top-level-y 2)
    (list 'top-level-x top-level-x 'top-level-y top-level-y))

;;; Compiled constants and macros.

(eval-when (load eval)
    (define-constant A-IS-23 23)
    (define-macro PLUS1 (lambda (f e) (e `(+ 1 ,(cadr f)) e))))

(eval-when (load compile eval) (define-constant A-CONSTANT-1 23))

(define-constant A-CONSTANT-2 a-constant-1)

(define-constant A-CONSTANT-3 3)

(define-constant A-CONSTANT-4 (* a-constant-3 a-constant-3))

;;; Access to an external array.

(define-c-external _\i\o\b* ARRAY "_iob")
(eval-when (load) (define _iob _\i\o\b*))
(eval-when (eval) (define _iob 0))

;;; Access to an external procedure pointer.

(define-c-external (c-hypot double double) double "hypot")
(eval-when (load) (define hypot c-hypot))
(eval-when (eval) (define hypot 0))

;;; Incorrect optimization, used to result in bad C code.

(define a-variable 3)

(define (a-procedure)
  (let ((a-variable 4)
        (g (lambda (x) a-variable)))
    (g (g (display 1)))))

;;; Shared constant and top-level variable value, used to result in bad C
;;; code.

(define-external some-x top-level)

(define (TEST-SOME-X) `(some-x 1) (some-x))

(define (TEST23)
    
    (chk 1 (fsm23-1 fsm23-1-trials) #t)
    
    (chk 10 (fsm23-2 '(#t #f result)) '(result))
    (chk 11 (fsm23-2 '(#f result)) '(result))
    (chk 12 (fsm23-2 '(#t #t #f result)) '(result))

    (chk 20 (fsm23-3 '(#t #f #t #f #f #t . #f)) 'done)
    
    (chk 30
	 (let l1 ((x 0))
	      (let l2 ((y 0))
		   (cond ((procedure? x) 'done)
			 (y	(l1 (lambda () y)))
			 (else  (l2 (lambda () x))))))
	 'done)

    (chk 40 (def1-23) #f)
    (set! def1-23 (lambda () #t))
    (chk 41 (def1-23) #t)
    (chk 42 (def2-23) #f)
    (set! def2-23 (lambda () #t))
    (chk 43 (def2-23) #t)

    (chk 50 (nested23)
	 '(first-f1 first-f2 only-f3 second-f1 second-f2 only-f3))

    (display23)
    
    (chk 70 (jmd-display23 'jmd) 'jmd)
    (chk 71 (bh-display23 0 0) '(10 20))

    (chk 80 (generator 'next) 1)
    (chk 81 (generator 'next) 2)
    (chk 82 (generator 'refresh) '())
    (chk 83 (generator 'next) 1)

    (chk 90 (((bh-closed23 42))) '(42 . 42))

    (chk 100 (go) 'ok)

    (chk 110 (test-top) '(top-level-x 1 top-level-y 2))

    (chk 120 (expand 'a-is-23) 23)
    (chk 121 (expand '(plus1 a-is-23)) '(+ 1 23))
    (chk 122 a-constant-2 23)
    (chk 123 (expand 'a-constant-1) 23)
    (chk 124 a-constant-3 3)
    (chk 125 a-constant-4 9)

    (chk 130 (string-ref "" 0) (integer->char #o21))

    (chk 140 (number? _iob) #t)
    (chk 141 (number? hypot) #t)

    (chk 150 (letrec ((x 1)) (define x 2) x) 2)
)
;;;
;;; Test functions for basic Scheme functions.
;;;


(define (TEST55)
    
    ;;; Write length and levels.
    
    (for-each
	(lambda (v n)
		(set-write-level! v)
		(set-write-length! n)
		(format #t "~s ~s	~s~%" v n
			'(if (member x y) (+ (car x) 3)
			     '(foo . #(a b c d "Baz")))))
	'(0 1 1 1 1 2 2 2 3 3 3 #f)
	'(1 1 2 3 4 1 2 3 2 3 4 #f))
    (newline)
    
    ;;; Circularity detection.
    
    (set-write-circle! #t)
    (let* ((x (list 1 2 3 4 5))
	   (y (make-vector 5 x)))
	  (set-cdr! (last-pair x) x)
	  (vector-set! y 4 y)
	  (write y))
    (newline)
    (newline)
    
    ;;; Pretty-printing
    
    (set-write-pretty! #t)
    (write '(for-each
		(lambda (v n)
			(set-write-level! v)
			(set-write-length! n)
			(format #t "~s ~s	~s~%" v n
				'(if (member x y) (+ (car x) 3)
				     '(foo . #(a b c d "Baz")))))
		'(0 1 1 1 1 2 2 2 3 3 3 #f)
		'(1 1 2 3 4 1 2 3 2 3 4 #f)))
    (newline)
    (newline)
    
    (set-write-pretty! #f)
    (pp '(for-each
	     (lambda (v n)
		     (set-write-level! v)
		     (set-write-length! n)
		     (format #t "~s ~s	~s~%" v n
			     '(if (member x y) (+ (car x) 3)
				  '(foo . #(a b c d "Baz")))))
	     '(0 1 1 1 1 2 2 2 3 3 3 #f)
	     '(1 1 2 3 4 1 2 3 2 3 4 #f)))
    (newline)
    #f)
