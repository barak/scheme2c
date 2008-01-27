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

 
	  
	  
	  
