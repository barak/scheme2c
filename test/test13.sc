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

(module test13)

(define-external (chk testnum result expected) testchk)

(define (test13)

;;; 6.7  Strings
 
    (chk 1 (string? '()) #f)
    (chk 2 (string? '#()) #f)
    (chk 3 (string? '(1 2)) #f)
    (chk 4 (string? '#(1 2)) #f)
    (chk 5 (string? 'x) #f)
    (chk 6 (string? "x") #t)
    (chk 7 (string? '#\a) #f)
    (chk 8 (string? (lambda (x) x)) #f)
    (chk 9 (string? #f) #f)
    (chk 10 (string? #t) #f)
    (chk 11 (string? -1) #f)
    (chk 12 (string? 0) #f)
    (chk 13 (string? 1) #f)
    (chk 14 (string? -2.5) #f)
    (chk 15 (string? 0.0) #f)
    (chk 16 (string? 1.5) #f)

    (chk 17 (string) "")
    (chk 18 (string #\a #\b #\c) "abc")

    (chk 20 (string-length (make-string 20)) 20)
    (chk 21 (make-string 20 #\$) "$$$$$$$$$$$$$$$$$$$$")
    (chk 22 (eqv? (make-string 0) "") #t)

    (chk 30 (string-length "") 0)
    (chk 31 (string-length "This string is 17") 17)
    (chk 32 (string-length (make-string 47)) 47)

    (chk 40 (string-ref "s" 0) #\s)
    (chk 41 (string-ref "same" 2) #\m)
    (chk 42 (string-ref "same" 3) #\e)

    (let* ((string "This is a sample")
	   (xstring (string-copy string)))
	  (chk 50 (string-set! xstring 4 #\*) #\*)
	  (chk 51 (string-ref xstring 4) #\*)
	  (chk 52 (string-set! xstring 7 #\*) #\*)
	  (chk 53 (string-ref xstring 7) #\*)
	  (chk 54 (string-set! xstring 9 #\*) #\*)
	  (chk 55 (string-ref xstring 9) #\*)
	  (chk 56 string "This is a sample")
	  (chk 57 xstring "This*is*a*sample")
	  (string-set! xstring 3 (integer->char 204))
	  (chk 58 (char->integer (string-ref xstring 3)) 204))

    (chk 60 (string=? "" "zot") #f)
    (chk 61 (string=? "zot" "") #f)
    (chk 62 (string=? "a" "abc") #f)
    (chk 63 (string=? "Apple Core" "Apple") #f)
    (chk 64 (string=? "Zort 23" "Zort 23") #t)

    (chk 70 (string<? "" "zot") #t)
    (chk 71 (string<? "zot" "") #f)
    (chk 72 (string<? "a" "abc") #t)
    (chk 73 (string<? "Apple Core" "Apple") #f)
    (chk 74 (string<? "Zort 23" "Zort 23") #f)

    (chk 80 (string>? "" "zot") #f)
    (chk 81 (string>? "zot" "") #t)
    (chk 82 (string>? "a" "abc") #f)
    (chk 83 (string>? "Apple Core" "Apple") #t)
    (chk 84 (string>? "Zort 23" "Zort 23") #f)

    (chk 90 (string<=? "" "zot") #t)
    (chk 91 (string<=? "zot" "") #f)
    (chk 92 (string<=? "a" "abc") #t)
    (chk 93 (string<=? "Apple Core" "Apple") #f)
    (chk 94 (string<=? "Zort 23" "Zort 23") #t)

    (chk 100 (string>=? "" "zot") #f)
    (chk 101 (string>=? "zot" "") #t)
    (chk 102 (string>=? "a" "abc") #f)
    (chk 103 (string>=? "Apple Core" "Apple") #t)
    (chk 104 (string>=? "Zort 23" "Zort 23") #t)

    (let ((xstring "This is a sample string"))
	 (chk 110 (substring xstring 0 (string-length xstring))
	      (string-copy xstring))
	 (chk 111 (substring xstring 0 (string-length xstring)) xstring)
	 (chk 112 (eq? (substring xstring 0 (string-length xstring)) xstring)
	      #f)
	 (chk 113 (substring xstring 4 8) " is ")
	 (chk 114 (substring xstring 7 10) " a "))

    (chk 120 (string-append "" "zot") "zot")
    (chk 121 (string-append "zot" "") "zot")
    (chk 122 (string-append "a" "abc") "aabc")
    (chk 123 (string-append "Apple Core" "Apple") "Apple CoreApple")
    (chk 124 (string-append "Zort 23" "Zort 23") "Zort 23Zort 23")

    (chk 130 (string->list "") '())
    (chk 131 (string->list "a") '(#\a))
    (chk 132 (string->list "This is a sample")
	 '(#\T #\h #\i #\s #\space #\i #\s #\space #\a #\space
	   #\s #\a #\m #\p #\l #\e))

    (chk 140 (list->string '()) "")
    (chk 141 (list->string '(#\a)) "a")
    (chk 142 (list->string '(#\T #\h #\i #\s)) "This")

    (chk 150 (string-fill! (make-string 10) #\<) "<<<<<<<<<<")
    (chk 151 (string-fill! "" #\Z) "")

    (chk 160 (string-ci=? "" "zot") #f)
    (chk 161 (string-ci=? "zot" "") #f)
    (chk 162 (string-ci=? "a" "aBc") #f)
    (chk 163 (string-ci=? "Apple Core" "Apple") #f)
    (chk 164 (string-ci=? "Zort 23" "Zort 23") #t)
    (chk 165 (string-ci=? "Able was I ere I saw Elba"
		 "able was i ere i saw elba") #t)

    (chk 170 (string-ci<? "" "zot") #t)
    (chk 171 (string-ci<? "zot" "") #f)
    (chk 172 (string-ci<? "a" "ABc") #t)
    (chk 173 (string-ci<? "apple Core" "Apple") #f)
    (chk 174 (string-ci<? "Zort 23" "Zort 23") #f)
    (chk 175 (string-ci<? "zoRt 23" "ZoRt 24") #t)

    (chk 180 (string-ci>? "" "zot") #f)
    (chk 181 (string-ci>? "zot" "") #t)
    (chk 182 (string-ci>? "A" "abc") #f)
    (chk 183 (string-ci>? "APPLE Core" "apple") #t)
    (chk 184 (string-ci>? "Zort 23" "Zort 23") #f)
    (chk 185 (string-ci>? "zoRt 23" "ZoRt 22") #t)

    (chk 190 (string-ci<=? "" "zot") #t)
    (chk 191 (string-ci<=? "zot" "") #f)
    (chk 192 (string-ci<=? "a" "abc") #t)
    (chk 193 (string-ci<=? "Apple Core" "Apple") #f)
    (chk 194 (string-ci<=? "Zort 23" "Zort 23") #t)
    (chk 195 (string-ci<=? "zoRt 23" "ZoRt 24") #t)

    (chk 200 (string-ci>=? "" "zot") #f)
    (chk 201 (string-ci>=? "zot" "") #t)
    (chk 202 (string-ci>=? "a" "abc") #f)
    (chk 203 (string-ci>=? "Apple Core" "Apple") #t)
    (chk 204 (string-ci>=? "Zort 23" "Zort 23") #t)
    (chk 205 (string-ci>=? "zoRt 23" "ZoRt 22") #t))
