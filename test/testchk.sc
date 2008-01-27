;;; Test driver checking functions.

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

(module testchk)

(define TEST-ERRORS 0)

(define *ACCURACY* 1.0e-7)

(define (CHK test result expected)
    (unless (or (equal? result expected)
		(and (%record? result)
		     (%record expected)
		     (equal? (%record->list result) (%record->list expected)))
		(and (number? expected)
		     (number? result)
		     (inexact? expected)
		     (<= (abs (- expected result))
			 (* (abs expected) *accuracy*))))
	    (format stdout-port "     Test ~a failed~%" test)
	    (format stdout-port "          expected = ~s~%" expected)
	    (format stdout-port "            result = ~s~%" result)
	    (set! test-errors (+ test-errors 1))))

(define (CHKQ test result expected)
    (unless (eq? result expected)
	    (format stdout-port "     Test ~a failed~%" test)
	    (format stdout-port "          expected = ~s~%" expected)
	    (format stdout-port "            result = ~s~%" result)
	    (set! test-errors (+ test-errors 1))))
