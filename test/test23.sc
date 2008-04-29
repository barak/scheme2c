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

;(define-c-external _\i\o\b* ARRAY "_iob")
;(eval-when (load) (define _iob _\i\o\b*))
;(eval-when (eval) (define _iob 0))

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

;    (chk 140 (number? _iob) #t)
    (chk 141 (number? hypot) #t)

    (chk 150 (letrec ((x 1)) (define x 2) x) 2)
)
