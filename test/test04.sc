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

(module test04)

(define-external (chk testnum result expected) testchk)

(define (test04)

;;; 6.4  Symbols
     
    (chk 2.001 (symbol? '()) #f)
    (chk 2.002 (symbol? '#()) #f)
    (chk 2.003 (symbol? '(1 2)) #f)
    (chk 2.004 (symbol? '#(1 2)) #f)
    (chk 2.005 (symbol? 'x) #t)
    (chk 2.006 (symbol? "x") #f)
    (chk 2.007 (symbol? '#\a) #f)
    (chk 2.008 (symbol? (lambda (x) x)) #f)
    (chk 2.009 (symbol? #f) #f)
    (chk 2.010 (symbol? #t) #f)
    (chk 2.011 (symbol? -1) #f)
    (chk 2.012 (symbol? 0) #f)
    (chk 2.013 (symbol? 1) #f)
    (chk 2.014 (symbol? -2.5) #f)
    (chk 2.015 (symbol? 0.0) #f)
    (chk 2.016 (symbol? 1.5) #f)

    (chk 2.021 (string->symbol "APPLE") 'apple)
    (chk 2.022(string->symbol "apple") '\a\p\p\l\e)
    (chk 2.023 (eq? (string->uninterned-symbol "APPLE") 'apple) #f)
    (chk 2.024 (symbol? (string->uninterned-symbol "APPLE")) #t)
    (chk 2.025 (uninterned-symbol? 'apple) #f)
    (chk 2.026 (uninterned-symbol? (string->uninterned-symbol "APPLE")) #t)
    (let* ((s (string #\A #\p #\p #\L #\E))
	   (s-sym (string->symbol s))
	   (s-usym (string->uninterned-symbol s)))
	  (string-set! s 0 #\space)
	  (chk 2.027 (symbol->string s-sym) "AppLE")
	  (chk 2.028 (symbol->string s-usym) "AppLE"))

    (putprop 'x 1 #f)
    (chk 2.031 (getprop 'x 1) #f)
    (chk 2.032 (putprop 'x 1 -1) -1)
    (chk 2.033 (putprop 'x 2 -2) -2)
    (chk 2.034 (putprop 'x 3 -3) -3)
    (chk 2.035 (getprop 'x 1) -1)
    (chk 2.036 (getprop 'x 2) -2)
    (chk 2.037 (getprop 'x 3) -3)
    (chk 2.038 (putprop 'x 2 #f) #f)
    (chk 2.039 (getprop 'x 3) -3)
    (chk 2.040 (putprop 'x 3 #f) #f)
    (chk 2.040 (getprop 'x 3) #f)
    (chk 2.041 (getprop 'x 1) -1)
    (chk 2.042 (putprop 'x 1 1) 1)
    (chk 2.043 (getprop 'x 1) 1))
