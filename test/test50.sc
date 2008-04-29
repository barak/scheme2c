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

(module test50 (main test50))

;;; Memory management test

(define (LISTTEST i l)
    (do ((next 1 (+ next 1))
	 (l l (cdr l)))
	((or (null? l) (not (eq? (car l) next)))
	 (if (or l (not (eq? next 10001)))
	     (error 'listtest "Failed! ~s-~s~%" i next)))))

(define (TEST50)
    (display "***** Starting Memory Test")
    (newline)

    (let ((old-obarray *obarray*))
	 (collect)
    	 (display "Successfully Garbage Collected initial image")
    	 (newline)
	 (collect-all)
	 (display "Collect-all of initial image")
	 (newline)
	 (if (not (equal? old-obarray *obarray*))
	     (error 'memtest "*OBARRAY* comparison failed")))
    
    (display "1000 Lists of 10000 pairs each")
    (newline)
    (do ((i 0 (+ i 1)))
	((= 1000 i))
	(do ((j 10000 (- j 1))
	     (l '() (cons j l)))
	    ((zero? j)
	     (listtest i l)))
        (if (zero? (remainder i 100))
	    (begin (display i) (display " ") (flush-buffer))))
    (newline)
    
    (display "1000 Vectors of 10000 entries each")
    (newline)
    (do ((i 0 (+ i 1)))
	((= i 1000))
	(make-vector 10000 i)
	(if (zero? (remainder i 100))
	    (begin (display i) (display " ") (flush-buffer))))
    (newline)
     
    (display "1000 Strings of 10000 entries each")
    (newline)
    (do ((i 0 (+ i 1)))
	((= i 1000))
	(make-string 10000)
	(if (zero? (remainder i 100))
	    (begin (display i) (display " ") (flush-buffer))))
    (newline)
    
    (display "***** Ending Memory Test")
    (newline))

    
    
	  
	  
	  
