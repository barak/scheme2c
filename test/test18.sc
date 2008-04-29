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
		     
		     
