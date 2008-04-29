;;; SCHEME->C Runtime Library


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

(module scrt3
    (top-level
	CHAR? CHAR=? CHAR<? CHAR>? CHAR<=? CHAR>=?
	CHAR-CI=? CHAR-CI<? CHAR-CI>? CHAR-CI<=? CHAR-CI>=?
	CHAR-ALPHABETIC? CHAR-NUMERIC? CHAR-WHITESPACE? CHAR-UPPER-CASE?
        CHAR-LOWER-CASE? CHAR-UPCASE CHAR-DOWNCASE CHAR->INTEGER INTEGER->CHAR
	STRING? STRING STRING-LENGTH STRING-REF STRING-SET!
	STRING=? STRING<? STRING>? STRING<=? STRING>=?
	STRING-CI=? STRING-CI<? STRING-CI>? STRING-CI<=? STRING-CI>=?
	SUBSTRING STRING-APPEND STRING->LIST LIST->STRING STRING-FILL!))

;;; 6.6  Characters

(define (CHAR? x) (char? x))

(define (CHAR=? x y) (char=? x y))

(define (CHAR<? x y) (char<? x y))

(define (CHAR>? x y) (char>? x y))

(define (CHAR<=? x y) (not (char>? x y)))

(define (CHAR>=? x y) (not (char<? x y)))

(define CHAR-UPCASE-TABLE
    (let ((v (make-vector 256)))
	 (do ((i 0 (+ i 1)))
	     ((= i 256)
	      (do ((i (char->integer #\a) (+ i 1))
		   (j (char->integer #\A) (+ j 1))
		   (c 0 (+ c 1)))
		  ((= c 26) v)
		  (vector-set! v i (integer->char j))))
	     (vector-set! v i (integer->char i)))))

(define-in-line (UPCASE char)
    (vector-ref char-upcase-table (char->integer char)))

(define (CHAR-CI=? x y) (char=? (upcase x) (upcase y)))

(define (CHAR-CI<? x y) (char<? (upcase x) (upcase y)))

(define (CHAR-CI>? x y) (char>? (upcase x) (upcase y)))

(define (CHAR-CI<=? x y) (char<=? (upcase x) (upcase y)))

(define (CHAR-CI>=? x y) (char>=? (upcase x) (upcase y)))

(define (CHAR-ALPHABETIC? x)
    (if (not (char? x))
	(error 'CHAR-ALPHABETIC? "Argument not a CHAR"))
    (or (and (char>=? x #\A) (char<=? x #\Z))
	(and (char>=? x #\a) (char<=? x #\z))))

(define (CHAR-NUMERIC? x)
    (if (not (char? x))
        (error 'CHAR-NUMERIC? "Argument not a CHAR"))
    (and (char>=? x #\0) (char<=? x #\9)))

(define (CHAR-WHITESPACE? x)
    (if (not (char? x))
	(error 'CHAR-WHITESPACE? "Argument not a CHAR"))
    (set! x (char->integer x))
    (or (and (>= x #o11) (<= x #o15)) (= x #o40)))

(define (CHAR-UPPER-CASE? letter)
    (if (not (char? letter))
	(error 'CHAR-UPPER-CASE? "Argument not a CHAR"))
    (and (char>=? letter #\A) (char<=? letter #\Z)))

(define (CHAR-LOWER-CASE? letter)
    (if (not (char? letter))
	(error 'CHAR-LOWER-CASE? "Argument not a CHAR"))
    (and (char>=? letter #\a) (char<=? letter #\z)))

(define (CHAR-UPCASE x)
    (if (not (char? x))
	(error 'CHAR-UPCASE "Argument not a CHAR"))
    (upcase x))

(define (CHAR-DOWNCASE x)
    (if (not (char? x))
	(error 'CHAR-DOWNCASE "Argument not a CHAR"))
    (if (and (char-alphabetic? x) (char-upper-case? x))
	(integer->char (+ (char->integer x) 32))
	x))

(define (CHAR->INTEGER x) (char->integer x))

(define (INTEGER->CHAR x) (integer->char x))

;;; 6.7  Strings.

(define (STRING? x) (string? x))

(define (STRING . x) (list->string x))

(define (STRING-LENGTH x) (string-length x))

(define (STRING-REF x y) (string-ref x y))

(define (STRING-SET! x y z) (string-set! x y z))

;;; In-line definitions for use in the following routines:

(define-in-line (STRING-LENGTH s) ((lap (s) (C_FIXED (STRING_LENGTH s))) s))

(define-in-line (STRING-REF s x) ((lap (s x) (C_CHAR (STRING_CHAR s x))) s x))

(define-in-line (UCSTRING-REF s x)
    (upcase ((lap (s x) (C_CHAR (STRING_CHAR s x))) s x)))

(define-in-line (STRING-SET! s x c)
    ((lap (s x c) (SET (STRING_CHAR s x) (CHAR_C c)) c) s x c))

(define (STRING=? x y)
    (if (or (not (string? x)) (not (string? y)))
	(error 'STRING=? "Argument(s) not a STRING"))
    (let ((xl (string-length x))
	  (yl (string-length y)))
	 (if (= xl yl)
	     (do ((i 0 (+ i 1)))
		 ((or (= i xl)
		      (not (eq? (string-ref x i) (string-ref y i))))
		  (= i xl)))
	     #f)))

(define (STRING<? x y)
    (if (or (not (string? x)) (not (string? y)))
	(error 'STRING<? "Argument(s) not a STRING"))
    (let* ((xl      (string-length x))
	   (yl      (string-length y))
	   (minxlyl (min xl yl)))
	  (let test ((i 0))
	       (if (= i minxlyl)
		   (< xl yl)
		   (let ((cx (string-ref x i))
			 (cy (string-ref y i)))
			(if (eq? cx cy) (test (+ i 1)) (char<? cx cy)))))))

(define (STRING>? x y)
    (if (or (not (string? x)) (not (string? y)))
        (error 'STRING>? "Argument(s) not a STRING"))
    (let* ((xl      (string-length x))
           (yl      (string-length y))
           (minxlyl (min xl yl)))
	  (let test ((i 0))
	       (if (= i minxlyl)
		   (> xl yl)
		   (let ((cx (string-ref x i))
			 (cy (string-ref y i)))
			(if (eq? cx cy) (test (+ i 1)) (char>? cx cy)))))))

(define (STRING<=? x y) (not (string>? x y)))

(define (STRING>=? x y) (not (string<? x y)))

(define (STRING-CI=? x y)
    (if (or (not (string? x)) (not (string? y)))
	(error 'STRING-CI=? "Argument(s) not a STRING"))
    (let ((xl (string-length x))
	  (yl (string-length y)))
	 (if (= xl yl)
	     (do ((i 0 (+ i 1)))
		 ((or (= i xl)
		      (not (eq? (ucstring-ref x i) (ucstring-ref y i))))
		  (= i xl)))
	     #f)))

(define (STRING-CI<? x y)
    (if (or (not (string? x)) (not (string? y)))
	(error 'STRING-CI<? "Argument(s) not a STRING"))
    (let* ((xl      (string-length x))
	   (yl      (string-length y))
	   (minxlyl (min xl yl)))
	  (let test ((i 0))
	       (if (= i minxlyl)
		   (< xl yl)
		   (let ((cx (ucstring-ref x i))
			 (cy (ucstring-ref y i)))
			(if (eq? cx cy) (test (+ i 1)) (char<? cx cy)))))))

(define (STRING-CI>? x y)
    (if (or (not (string? x)) (not (string? y)))
        (error 'STRING-CI>? "Argument(s) not a STRING"))
    (let* ((xl      (string-length x))
           (yl      (string-length y))
           (minxlyl (min xl yl)))
	  (let test ((i 0))
	       (if (= i minxlyl)
		   (> xl yl)
		   (let ((cx (ucstring-ref x i))
			 (cy (ucstring-ref y i)))
			(if (eq? cx cy) (test (+ i 1)) (char>? cx cy)))))))

(define (STRING-CI<=? x y) (not (string-ci>? x y)))

(define (STRING-CI>=? x y) (not (string-ci<? x y)))

(define (SUBSTRING x y z)
    (if (not (string? x))
	(error 'SUBSTRING "Argument is not a STRING"))
    (if (or (not (fixed? y)) (negative? y) (not (fixed? z))
	    (< z y) (> z (string-length x)))
	(error 'SUBSTRING "Argument(s) not a STRING INDEX"))
    (do ((i y (+ i 1))
	 (j 0 (+ j 1))
	 (s (make-string (- z y))))
	((= i z) s)
	(string-set! s j (string-ref x i))))

(define (STRING-APPEND . x)
    (do ((new (let loop ((sl x) (len 0))
		   (cond ((null? sl) (make-string len))
			 ((string? (car sl))
			  (loop (cdr sl) (+ len (string-length (car sl)))))
			 (else
			      (error 'STRING-APPEND
				     "Argument is not a STRING: ~s"
				     (car sl))))))
	 (i 0 (+ i (string-length (car sl))))
	 (sl x (cdr sl)))
	((null? sl) new)
	(do ((old (car sl))
	     (j (- (string-length (car sl)) 1) (- j 1)))
	    ((eq? j -1))
	    (string-set! new (+ i j) (string-ref old j)))))

(define (STRING->LIST x)
    (if (not (string? x))
	(error 'STRING->LIST "Argument is not a STRING: ~s" x))
    (do ((i (- (string-length x) 1) (- i 1))
	 (l '()))
	((= i -1) l)
	(set! l (cons (string-ref x i) l))))

(define (LIST->STRING x)
    (do ((i 0 (+ i 1))
	 (l x (cdr l))
	 (s (make-string (length x))))
	((null? l) s)
	(let ((char (car l)))
	     (if (not (char? char))
		 (error 'LIST->STRING
			"Argument is not a list of CHARACTERS: ~s"
			x))
	     (string-set! s i char))))

(define (STRING-FILL! s c)
    (if (not (string? s))
	(error 'STRING-FILL! "Argument is not a STRING: ~s" s))
    (if (not (char? c))
	(error 'STRING-FILL! "Argument is not a CHAR: ~s" c))
    (do ((i (- (string-length s) 1) (- i 1)))
	((= i -1) s)
	(string-set! s i c)))
