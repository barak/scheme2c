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
