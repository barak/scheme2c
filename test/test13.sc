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
