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

(module test01)

(define-external (chk testnum result expected) testchk)

(define (test01)
       
    ;;; 6.1  Booleans
     
    (chk 01 (boolean? '()) #f)
    (chk 02 (boolean? '#()) #f)
    (chk 03 (boolean? '(1 2)) #f)
    (chk 04 (boolean? '#(1 2)) #f)
    (chk 05 (boolean? 'x) #f)
    (chk 06 (boolean? "x") #f)
    (chk 07 (boolean? '#\a) #f)
    (chk 08 (boolean? (lambda (x) x)) #f)
    (chk 09 (boolean? #f) #t)
    (chk 10 (boolean? #t) #t)
    (chk 11 (boolean? -1) #f)
    (chk 12 (boolean? 0) #f)
    (chk 13 (boolean? 1) #f)
    (chk 14 (boolean? -1.5) #f)
    (chk 15 (boolean? 0.0) #f)
    (chk 16 (boolean? 1.5) #f)
   
    (chk 21 (not '()) #t)
    (chk 22 (not '#()) #f)
    (chk 23 (not '(1 2)) #f)
    (chk 24 (not '#(1 2)) #f)
    (chk 25 (not 'x) #f)
    (chk 26 (not "x") #f)
    (chk 27 (not '#\a) #f)
    (chk 28 (not (lambda (x) x)) #f)
    (chk 29 (not #f) #t)
    (chk 30 (not #t) #f)
    (chk 31 (not -1) #f)
    (chk 32 (not 0) #f)
    (chk 33 (not 1) #f)
    (chk 34 (not -1.5) #f)
    (chk 35 (not 0.0) #f)
    (chk 36 (not 1.5) #f))
