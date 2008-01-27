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
