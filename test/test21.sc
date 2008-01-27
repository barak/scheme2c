;;;
;;; Scheme->C test program
;;;
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
