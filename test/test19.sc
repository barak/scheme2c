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
