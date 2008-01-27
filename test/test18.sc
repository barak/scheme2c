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
		     
		     
