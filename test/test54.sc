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

(module test54 (main test54))

(define-external (chk testnum result expected) testchk)

(define-c-external c1 char "c1")

(define-c-external c2 char "c2")

(define-c-external (fc1) char "fc1")

(define-c-external (fc2) char "fc2")

(define-c-external si1 shortint "si1")

(define-c-external si2 shortint "si2")

(define-c-external (fsi1) shortint "fsi1")

(define-c-external (fsi2) shortint "fsi2")

(define-c-external su1 shortunsigned "su1")

(define-c-external su2 shortunsigned "su2")

(define-c-external (fsu1) shortunsigned "fsu1")

(define-c-external (fsu2) shortunsigned "fsu2")

(define-c-external i1 int "i1")

(define-c-external i2 int "i2")

(define-c-external (fi1) int "fi1")

(define-c-external (fi2) int "fi2")

(define-c-external ui1 unsigned "ui1")

(define-c-external ui2 unsigned "ui2")

(define-c-external ui3 unsigned "ui3")

(define-c-external (fui1) unsigned "fui1")

(define-c-external (fui2) unsigned "fui2")

(define-c-external (fui3) unsigned "fui3")

(define-c-external f1 float "f1")

(define-c-external (ff1) float "ff1")

(define-c-external d1 double "d1")

(define-c-external (fd1) double "fd1")

(define-c-external ad1 array "ad1")

(define-c-external (loop_pointer pointer) pointer "loop_pointer")

(define-c-external (loop_array array) array "loop_array")

(define-c-external (loop_char char) char "loop_char")

(define-c-external (loop_shortint shortint) shortint "loop_shortint")

(define-c-external (loop_shortunsigned shortunsigned) shortunsigned
    "loop_shortunsigned")

(define-c-external (loop_int int) int "loop_int")

(define-c-external (loop_unsigned unsigned) unsigned "loop_unsigned")

(define-c-external (loop_longint longint) longint "loop_longint")

(define-c-external (loop_longunsigned longunsigned) longunsigned
    "loop_longunsigned")

(define-c-external (loop_float float) float "loop_float")

(define-c-external (loop_double double) double "loop_double")

(define (TEST54)
    (chk 1 c1 #\A)
    (chk 2 c2 #\c)
    (set! c1 #\B)
    (set! c2 #\d)
    (chk 3 (fc1) #\B)
    (chk 4 (fc2) #\d)

    (chk 10 si1 -4)
    (chk 11 si2 24)
    (set! si1 -6)
    (set! si2 26)
    (chk 12 (fsi1) -6)
    (chk 12 (fsi2) 26)

    (chk 20 su1 #xffff)
    (chk 21 su2 23)
    (set! su1 #xf000)
    (set! su2 25)
    (chk 22 (fsu1) #xf000)
    (chk 23 (fsu2) 25)

    (chk 30 i1 -2)
    (chk 31 i2 2)
    (set! i1 -4)
    (set! i2 4)
    (chk 32 (fi1) -4)
    (chk 33 (fi2) 4)

    (chk 40 ui1 #xffffffff)
    (chk 41 ui2 #x1fffffff)
    (chk 42 ui3 #xffff)
    (set! ui1 #xfffffff1)
    (set! ui2 #x1ffffff1)
    (set! ui3 #xfff1)
    (chk 43 (fui1) #xfffffff1)
    (chk 44 (fui2) #x1ffffff1)
    (chk 45 (fui3) #xfff1)

    (chk 50 f1 23.23)
    (set! f1 -24.24)
    (chk 51 (ff1) -24.24)

    (chk 60 d1 32.32)
    (set! d1 -33.33)
    (chk 61 (fd1) -33.33)

    (chk 70 (c-double-ref ad1 0) 0.0)
    (chk 71 (c-double-ref ad1 8) 1.0)
    (chk 72 (c-double-ref ad1 16) 2.0)

    (chk 80 (c-string->string (loop_pointer "Hi folks")) "Hi folks")
    (chk 81 (loop_array ad1) ad1)
    (chk 82 (loop_char #\a) #\a)
    (chk 83 (loop_shortint 1000) 1000)
    (chk 84 (loop_shortunsigned 1000) 1000)
    (chk 85 (loop_int -12345) -12345)
    (chk 86 (loop_unsigned 12345) 12345)
    (chk 87 (loop_longint -12345) -12345)
    (chk 88 (loop_longunsigned 12345) 12345)
    (chk 89 (loop_float 3.14) 3.14)
    (chk 90 (loop_double 3.14159) 3.14159))
