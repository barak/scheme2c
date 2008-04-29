;;; Test driver.
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
