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

(module test16)

(define-external (chk testnum result expected) testchk)

(define BIGENDIAN (not (eq? (c-byte-ref "A" (- 1 c-sizeof-tscp)) 1)))

(define LSB-SHORT (if bigendian (/ c-sizeof-int 2) 0))
					; byte offset to lsb short

(define MSB-SHORT (if bigendian 0 (/ c-sizeof-int 2)))
					; byte offset to msb short

(define (test16)
    
    ;;; *.*  Extensions for accessing C structures.  Byte order is computed
    
    (let ((s (make-string 10 #\*)))
	 (c-byte-set! s 0 (char->integer #\S))
	 (c-byte-set! s 1 (char->integer #\c))
	 (c-byte-set! s 2 (char->integer #\h))
	 (c-byte-set! s 3 (char->integer #\e))
	 (c-byte-set! s 4 (char->integer #\m))
	 (c-byte-set! s 5 (char->integer #\e))
	 (c-byte-set! s 6 0.0)
	 (c-byte-set! s 7 -1)
	 (c-byte-set! s 8 255)
	 (chk 1 (c-string->string s) "Scheme")
	 (chk 2 (integer->char (c-byte-ref s 0)) #\S)
	 (chk 3 (integer->char (c-byte-ref s 2)) #\h)
	 (chk 4 (c-byte-ref s 7) 255)
	 (chk 5 (c-byte-ref s 8) 255))
    
    (let ((s (make-string 10 #\*)))
	 (cond ((and (= c-sizeof-int 4) (= c-sizeof-short 2))
		(c-int-set! s 0 #xffff)
		(chk 10 (c-int-ref s 0) #xffff)
		(chk 11 (c-shortunsigned-ref s lsb-short) #xffff)
		(chk 12 (c-shortunsigned-ref s msb-short) 0)
		(chk 13 (c-shortint-ref s lsb-short) -1)
		(chk 14 (c-shortint-ref s msb-short) 0)
		(c-shortint-set! s msb-short -1)
		(chk 15 (c-int-ref s 0) -1)
		(c-shortunsigned-set! s lsb-short #xfffe)
		(chk 16 (c-int-ref s 0) -2))
	       (else (format #t "Tests 10-16 omitted~%"))))
    
    (let ((s (make-string 20 #\*)))
	 (cond ((and (= c-sizeof-int 4) (= c-sizeof-tscp 4))
		(c-unsigned-set! s 0 (- (expt 2 32) 1))
		(c-int-set! s 4 4)
		(chk 20 (c-int-ref s 0) -1)
		(chk 21 (c-unsigned-ref s 0) (- (expt 2 32) 1))
		(chk 22 (c-int-ref s 4) 4)
		(chk 23 (c-unsigned-ref s 4) 4)
		(chk 24 (c-tscp-ref s 4) 1)
		(c-tscp-set! s 0 -1)
		(chk 25 (c-int-ref s 0) -4))
	       ((and (= c-sizeof-int 4) (= c-sizeof-tscp 8))
		(c-unsigned-set! s 0 (- (expt 2 32) 1))
		(c-int-set! s 4 4)
		(chk 20 (c-int-ref s 0) -1)
		(chk 21 (c-unsigned-ref s 0) (- (expt 2 32) 1))
		(chk 22 (c-int-ref s 4) 4)
		(chk 23 (c-unsigned-ref s 4) 4)
		(c-int-set! s 8 -4)
		(c-unsigned-set! s 12  (- (expt 2 32) 1))
		(chk 24 (c-tscp-ref s 8) -1)
		(c-tscp-set! s 0 -1)
		(chk 25 (c-int-ref s 0) -4))
	       (else (format #t "Tests 20-25 omitted~%"))))
    
    
    (let ((s (make-string 20)))
	 (c-float-set! s 0 -1)
	 (chk 30 (c-float-ref s 0) -1.0)
	 (c-double-set! s 0 -1)
	 (chk 31 (c-double-ref s 0) -1.0))
    
    (let ((s (make-string 10 #\*))
	  (v (make-vector 10 -1)))
	 (chk 40 (scheme-byte-ref s (if bigendian (- c-sizeof-tscp 2) 1)) 10)
	 (chk 41 (scheme-byte-ref s c-sizeof-tscp) (char->integer #\*))
	 (chk 42 (scheme-byte-ref s (+ 10 c-sizeof-tscp)) 0)
	 (scheme-byte-set! s (+ c-sizeof-tscp 1) (char->integer #\^))
	 (scheme-byte-set! s (+ c-sizeof-tscp 5) (char->integer #\^))
	 (chk 43 s "*^***^****")
	 (chk 44 (scheme-s2cuint-ref s 0) (+ 2560 134))
	 (chk 45 (scheme-int-ref v c-sizeof-tscp)
	      (if (and bigendian (= c-sizeof-int 2) (= c-sizeof-tscp 4))
		  -1
		  -4))
	 (scheme-int-set! v c-sizeof-tscp 4)
	 (scheme-int-set! v (+ c-sizeof-int c-sizeof-tscp) 0)
	 (chk 46 (scheme-tscp-ref v c-sizeof-tscp)
	      (if (and bigendian (= c-sizeof-int 2) (= c-sizeof-tscp 4))
		  (expt 2 16)
		  1))
	 (chk 47 (scheme-int-ref v c-sizeof-tscp) 4)
	 (scheme-tscp-set! v c-sizeof-tscp "This is the TSCP")
	 (chk 48 (vector-ref v 0) "This is the TSCP"))
    
    ;;; *.*  Bit operations
    
    (chk 50 (bit-and 1) 1)
    (chk 51 (bit-or 1) 1)
    (chk 52 (bit-xor 1) 1)
    (chk 53 (bit-not (bit-not 1)) 1)
    (chk 54 (bit-and 1 3 5) 1)
    (chk 55 (bit-or 1 3 5) 7)
    (chk 56 (bit-xor 1 3 5) 7)
    (chk 57 (bit-lsh 1 31) 2147483648.)
    (chk 58 (bit-rsh -1 31) 1))
