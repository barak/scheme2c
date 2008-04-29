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
