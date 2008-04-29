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

;;; This test function builds the test program for test 20, using a 
;;; "known good" version of the Scheme->C interpreter.

(define (TEST20-MAKE)
    (let ((in (open-input-file "test20-input.sc"))
	  (out (open-output-file "test20.sc")))
	 (format out "(module test20)~%~%")
	 (format out "(define (TEST20)~%")
	 (format out "    (with-input-from-file \"test20-input.sc\"~%")
	 (format out "          (lambda ()~%")
	 (let loop ((form (read in)) (i 1))
	      (unless (eof-object? form)
		      (format out "                  (chk ~s (read) '~s)~%"
			      i form)
		      (loop (read in) (+ i 1))))
	 (format out ")))~%")
	 (close-input-port in)
	 (close-output-port out)))

