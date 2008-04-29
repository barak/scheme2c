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

(module test17)

(define-external (chk testnum result expected) testchk)

(define (MAKE-COUNTER x) (lambda () (set! x (+ 1 x))))

;;; This funny little function showed up on the Scheme mailing list.  It
;;; creates an object which has state which never uses a SET!.  The I/O
;;; statements in it are there for debugging purposes.

(define (MAKE-CELL)
  (call-with-current-continuation
    (lambda (return-from-make-cell)
      (letrec ((state
                 (call-with-current-continuation
                   (lambda (return-new-state)
                     (return-from-make-cell
                       (lambda (op)
;			       (format (current-output-port) "OP is ~s~%" op)
                         (case op
                           ((set)
                            (lambda (value)
                              (call-with-current-continuation
                                (lambda (return-from-access)
                                  (return-new-state
				      (begin
;				      (format (current-output-port)
;					      "VALUE is ~s~%" value)
                                      (list value return-from-access)))))))
                           ((get) (car state)))))))))
;	(format (current-output-port) "STATE is ~s~%" state)
        ((cadr state) 'done)))))

	 
(define (test17)
    
    ;;; Exercise the display and call-with-current-continuation some more.
    
    (let* ((cntr1 (make-counter 0))
	   (cntr2 (make-counter 100))
	   (c1-1 (cntr1))
	   (c2-101 (cntr2))
	   (c1-2 (cntr1))
	   (c2-102 (cntr2)))
	  (chk 1 (list c1-1 c2-101 c1-2 c2-102) '(1 101 2 102)))
    
    (let ((cell (make-cell)))
	 ((cell 'set) 23)
	 (chk 2 (cell 'get) 23)))

 
	  
	  
	  
