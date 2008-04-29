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

(module test53)

;;; Loops until a key is entered on the keyboard

(define (KEY-LOOP)
    (let loop () (when (char-ready?) (read-char) (loop)))
    (display "Waiting for char (and a return) ...")
    (flush-buffer)
    (let loop ((cnt 0))
	 (unless (char-ready?)
		 (if (zero? (modulo cnt 1000))
		     (begin (display ".")
			    (loop 1)))
		 (loop (+ cnt 1))))
    (write (read-char))
    (display " entered")
    (let loop () (when (char-ready?) (read-char) (loop)))
    (newline))

(define (CONTROL-C)
    (display "Hit control-c ...")
    (flush-buffer)
    (let loop ((cnt 1))
	 (if (zero? (modulo cnt 10000))
	     (begin (display ".")
		    (flush-buffer)
		    (loop 1))
	     (loop (+ cnt 1)))))

(define (TEST53)
    (key-loop)
    (control-c))

