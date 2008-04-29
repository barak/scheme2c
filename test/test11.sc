;;;
;;; Scheme->C test program
;;;
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

(module test11)

(define-external (chk testnum result expected) testchk)

(define minint (string->number "-536870912"))

(define zero 0)

(define zeropt 0.0)

(define (test11)
    (let ((arch (list-ref (implementation-information) 3)))
	 (when (member arch '("VAX" "R2000" "SPARC"))
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
