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
