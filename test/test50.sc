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

    
    
	  
	  
	  
