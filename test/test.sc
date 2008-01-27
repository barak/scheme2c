;;; Test driver.
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

(module test
    (main test)
    (with test01 test02 test03 test04 test05
	  test06 test07 test08 test09 test10
	  test11 test12 test13 test14 test15
	  test16 test17 test18 test19 test20
	  test21 test22 test23))

(define-external TEST-ERRORS testchk)

(define (TEST)
    (set! test-errors 0)
    (format #t "***** Begin Scheme->C Tests *****~%")
    (format #t "test01:~%")
    (test01)
    (format #t "test02:~%")
    (test02)
    (format #t "test03:~%")
    (test03)
    (format #t "test04:~%")
    (test04)
    (format #t "test05:~%")
    (test05)
    (format #t "test06:~%")
    (test06)
    (format #t "test07:~%")
    (test07)
    (format #t "test08:~%")
    (test08)
    (format #t "test09:~%")
    (test09)
    (format #t "test10:~%")
    (test10)
    (format #t "test11:~%")
    (test11)
    (format #t "test12:~%")
    (test12)
    (format #t "test13:~%")
    (test13)
    (format #t "test14:~%")
    (test14)
    (format #t "test15:~%")
    (test15)
    (format #t "test16:~%")
    (test16)
    (format #t "test17:~%")
    (test17)
    (format #t "test18:~%")
    (test18)
    (format #t "test19:~%")
    (test19)
    (format #t "test20:~%")
    (test20)
    (format #t "test21:~%")
    (test21)
    (format #t "test22:~%")
    (test22)
    (format #t "test23:~%")
    (test23)
    (format #t "***** End Scheme->C Tests  ~a Errors *****~%" test-errors))

(define (LOAD-TESTS)
    (load "testchk.sc")
    (load "test01.sc")
    (load "test02.sc")
    (load "test03.sc")
    (load "test04.sc")
    (load "test05.sc")
    (load "test06.sc")
    (load "test07.sc")
    (load "test08.sc")
    (load "test09.sc")
    (load "test10.sc")
    (load "test11.sc")
    (load "test12.sc")
    (load "test13.sc")
    (load "test14.sc")
    (load "test15.sc")
    (load "test16.sc")
    (load "test17.sc")
    (load "test18.sc")
    (load "test19.sc")
    (load "test20.sc")
    (load "test21.sc")
    (load "test22.sc")
    (load "test23.sc")
)
