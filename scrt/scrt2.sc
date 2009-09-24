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

(module scrt2
    (top-level
	SYMBOL? SYMBOL->STRING TOP-LEVEL-VALUE SET-TOP-LEVEL-VALUE!
	GETPROP GETPROP-ALL PUTPROP
	FIXED? FLOAT? FLOAT->FIXED FIXED->FLOAT
	NUMBER? COMPLEX? REAL? RATIONAL? INTEGER? ZERO?	POSITIVE? NEGATIVE?
	ODD? EVEN? EXACT? INEXACT? = < > <= >= MAX MIN + * - / ABS QUOTIENT
	REMAINDER MODULO GCD LCM FLOOR CEILING TRUNCATE ROUND
	EXP LOG SIN COS TAN ASIN ACOS ATAN SQRT EXPT
	EXACT->INEXACT INEXACT->EXACT
	NUMBER->STRING STRING->NUMBER))

(include "repdef.sc")

;;; 6.4  Symbols.

(define (SYMBOL? x) (symbol? x))

(define (SYMBOL->STRING x) (symbol->string x))

(define (TOP-LEVEL-VALUE symbol)
    (if (not (symbol? symbol))
	(error 'TOP-LEVEL-VALUE "Argument is not a SYMBOL: ~s" symbol))
    ((lap (symbol) (SYMBOL_VALUE symbol)) symbol))

(define (SET-TOP-LEVEL-VALUE! symbol value)
    (if (not (symbol? symbol))
	(error 'SET-TOP-LEVEL-VALUE! "Argument is not a SYMBOL: ~s" symbol))
    ((lap (symbol value) (SETGENTL (SYMBOL_VALUE symbol) value)) symbol value))

(define (GETPROP symbol key)
    (if (not (symbol? symbol))
	(error 'GETPROP "Argument is not a SYMBOL: ~s" symbol))
    (let loop ((pl ((lap (symbol) (SYMBOL_PROPERTYLIST symbol)) symbol)))
	 (cond ((null? pl) #f)
	       ((eq? (car pl) key) (cadr pl))
	       (else (loop (cddr pl))))))

(define (GETPROP-ALL symbol)
    (if (not (symbol? symbol))
	(error 'GETPROP-ALL "Argument is not a SYMBOL: ~s" symbol))
    ((lap (symbol) (SYMBOL_PROPERTYLIST symbol)) symbol))

(define (PUTPROP symbol key value)
    (if (not (symbol? symbol))
	(error 'PUTPROP "Argument is not a SYMBOL: ~s" symbol))
    (let loop ((pl ((lap (symbol) (SYMBOL_PROPERTYLIST symbol)) symbol))
	       (prev '()))
	 (cond ((null? pl)
		(if (not (eq? value #f))
		    (if prev
			(set-cdr! prev (list key value))
			((lap (symbol newpl)
			      (SETGEN (SYMBOL_PROPERTYLIST symbol) newpl))
			 symbol (list key value)))))
	       ((eq? (car pl) key)
		(if (eq? value #f)
		    (if prev
			(set-cdr! prev (cddr pl))
			((lap (symbol newpl)
			      (SETGEN (SYMBOL_PROPERTYLIST symbol) newpl))
			 symbol (cddr pl)))
		    (set-car! (cdr pl) value)))
	       (else (loop (cddr pl) (cdr pl)))))
    value)

;;; 6.5  Numbers.

(define (FIXED? x) (fixed? x))

(define (FLOAT? x) (float? x))

(define (FLOAT->FIXED x) (float->fixed x))

(define (FIXED->FLOAT x) (fixed->float x))

(define (NUMBER? x) (or (fixed? x) (float? x)))

(define (COMPLEX? x) (or (fixed? x) (float? x)))

(define (REAL? x) (or (fixed? x) (float? x)))

(define (RATIONAL? x) (rational? x))

(define (INTEGER? x) (integer? x))

(define (ZERO? x) (= x 0))

(define (POSITIVE? x) (> x 0))

(define (NEGATIVE? x) (< x 0))

(define (ODD? x) (odd? x))

(define (EVEN? x) (even? x))

(define (EXACT? x) (exact? x))

(define (INEXACT? x) (inexact? x))

(define (=-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (BOOLEAN (EQ (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y) (BOOLEAN (EQ (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '= "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y) (BOOLEAN (EQ (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '= "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (BOOLEAN (EQ (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '= "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (= x y . z)
    (define (=-LIST x z)
	    (cond ((null? z) #t)
		  ((= x (car z)) (=-list (car z) (cdr z)))
		  (else #f)))
    (and (= x y) (=-list y z)))

(define (<-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (BOOLEAN (LT (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y) (BOOLEAN (LT (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '< "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y) (BOOLEAN (LT (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '< "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (BOOLEAN (LT (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '< "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (< x y . z)
    (define (<-LIST x z)
	    (cond ((null? z) #t)
		  ((< x (car z)) (<-list (car z) (cdr z)))
		  (else #f)))
    (and (< x y) (<-list y z)))

(define (>-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (BOOLEAN (GT (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y) (BOOLEAN (GT (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '> "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y) (BOOLEAN (GT (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '> "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (BOOLEAN (GT (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '> "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (> x y . z)
    (define (>-LIST x z)
	    (cond ((null? z) #t)
		  ((> x (car z)) (>-list (car z) (cdr z)))
		  (else #f)))
    (and (> x y) (>-list y z)))

(define (<=-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (BOOLEAN (LTE (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y) (BOOLEAN (LTE (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '<= "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y) (BOOLEAN (LTE (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '<= "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (BOOLEAN (LTE (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '<= "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (<= x y . z)
    (define (<=-LIST x z)
	    (cond ((null? z) #t)
		  ((<= x (car z)) (<=-list (car z) (cdr z)))
		  (else #f)))
    (and (<= x y) (<=-list y z)))

(define (>=-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (BOOLEAN (GTE (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y) (BOOLEAN (GTE (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '>= "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y) (BOOLEAN (GTE (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '>= "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (BOOLEAN (GTE (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '>= "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (>= x y . z)
    (define (>=-LIST x z)
	    (cond ((null? z) #t)
		  ((>= x (car z)) (>=-list (car z) (cdr z)))
		  (else #f)))
    (and (>= x y) (>=-list y z)))

(define (MAX-TWO x y) (if (> x y) x y))

(define (MAX x . y)
    (let loop ((x x) (y y))
	 (if y
	     (loop (if (> x (car y)) x (car y)) (cdr y))
	     x)))

(define (MIN-TWO x y) (if (< x y) x y))

(define (MIN x . y)
    (let loop ((x x) (y y))
	 (if y
	     (loop (if (< x (car y)) x (car y)) (cdr y))
	     x)))

(define (+-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (_TSCP (IPLUS (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y) (FLTV_FLT (PLUS (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '+ "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y) (FLTV_FLT (PLUS (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '+ "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (FLTV_FLT (PLUS (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '+ "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (+ . x)
    (let loop ((sum 0) (x x))
	 (if x
	     (loop (+ sum (car x)) (cdr x))
	     sum)))

(define (*-TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (_TSCP (ITIMES (FIXED_C x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y)
			(FLTV_FLT (TIMES (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '* "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y)
			(FLTV_FLT (TIMES (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '* "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y) (FLTV_FLT (TIMES (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '* "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (* . x)
    (let loop ((product 1) (x x))
	 (if x
	     (loop (* product (car x)) (cdr x))
	     product)))

(define (--TWO x y)
    (cond ((fixed? x)
	   (cond ((fixed? y)
		  ((lap (x y) (_TSCP (IDIFFERENCE (_S2CINT x) (_S2CINT y)))) x y))
		 ((float? y)
		  ((lap (x y)
			(FLTV_FLT (DIFFERENCE (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '- "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y)
			(FLTV_FLT (DIFFERENCE (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '- "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y)
		 (FLTV_FLT (DIFFERENCE (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '- "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (- x . y)
    (if y
	(let loop ((result (- x (car y))) (args (cdr y)))
	     (if args
		 (loop (- result (car args)) (cdr args))
		 result))
	(- 0 x)))

(define (/-TWO x y)
    (cond ((eq? y 0) (error '/ "Divisor is equal to 0: ~s" y))
    	  ((fixed? x)
	   (cond ((fixed? y)
		  (if (eq? ((lap (x y) (_TSCP (REMAINDER (_S2CINT x) (_S2CINT y))))
			     x y)
			   0)
		      ((lap (x y) (C_FIXED (QUOTIENT (_S2CINT x) (_S2CINT y)))) x y)
		      ((lap (x y) (FLTV_FLT (QUOTIENT (FIX_FLTV x)
						(FIX_FLTV y))))
		       x y)))
		 ((float? y)
		  ((lap (x y)
			(FLTV_FLT (QUOTIENT (FIX_FLTV x) (FLOAT_VALUE y))))
		   x y))
		 (else (error '/ "Argument not a NUMBER: ~s" y))))
	  ((fixed? y)
	   (cond ((float? x)
		  ((lap (x y)
			(FLTV_FLT (QUOTIENT (FLOAT_VALUE x) (FIX_FLTV y))))
		   x y))
		 (else (error '/ "Argument not a NUMBER: ~s" x))))
	  ((and (float? x) (float? y))
	   ((lap (x y)
		 (FLTV_FLT (QUOTIENT (FLOAT_VALUE x) (FLOAT_VALUE y))))
	    x y))
	  (else (error '/ "Argument(s) not a NUMBER: ~s ~s" x y))))

(define (/ x . y)
    (if y
	(let loop ((result (/ x (car y))) (z (cdr y)))
	     (if z
		 (loop (/ result (car z)) (cdr z))
		 result))
	(/ 1 x)))

(define (ABS x) (if (negative? x) (- 0 x) x))

(define (QUOTIENT x y)
    (if (and (two-fixeds? x y) (not (eq? y 0)))
	((lap (x y) (C_FIXED (QUOTIENT (_S2CINT x) (_S2CINT y)))) x y)
	(truncate (/ x y))))

(define (REMAINDER x y)
    (if (and (two-fixeds? x y) (not (eq? y 0)))
	((lap (x y) (_TSCP (REMAINDER (_S2CINT x) (_S2CINT y)))) x y)
	(round (- x (* y (quotient x y))))))

(define (MODULO x y)
    (let ((r (remainder x y)))
	 (if (zero? r)
	     r
	     (if (positive? y)
		 (if (positive? r) r (+ y r))
		 (if (negative? r) r (+ y r))))))

(define (GCD . x)
    (define (GCD2 m n)
	    (if (zero? n)
		m
		(let ((r (remainder m n)))
		     (if (= r 0) n (gcd2 n r)))))
    (case (length x)
	  ((0) 0)
	  ((1) (abs (car x)))
	  (else (let loop ((result (gcd2 (abs (car x)) (abs (cadr x))))
			   (left (cddr x)))
		     (if left
			 (loop (gcd2 result (abs (car left))) (cdr left))
			 result)))))

(define (LCM . x)
    (define (LCM2 m n)
	    (let ((m (abs m)) (n (abs n)))
		 (cond ((= m n) m)
		       ((= (remainder m n) 0) m)
		       ((= (remainder n m) 0) n)
		       (else (* (/ m (gcd m n)) n)))))
    (case (length x)
	  ((0) 1)
	  ((1) (abs (car x)))
	  (else (let loop ((result (lcm2 (car x) (cadr x))) (left (cddr x)))
		     (if left
			 (loop (lcm2 result (car left)) (cdr left))
			 result)))))

(define (FLOOR x) (if (fixed? x) x ((lap (x) (C_FLOOR x)) x)))

(define (CEILING x) (if (fixed? x) x ((lap (x) (C_CEILING x)) x)))

(define (TRUNCATE x) (if (< x 0) (ceiling x) (floor x)))

(define (ROUND x) (if (fixed? x) x (floor (+ x .5))))

(define (EXP x) ((lap (x) (C_EXP x)) x))

(define (LOG x) ((lap (x) (C_LOG x)) x))

(define (SIN x) ((lap (x) (C_SIN x)) x))

(define (COS x) ((lap (x) (C_COS x)) x))

(define (TAN x) ((lap (x) (C_TAN x)) x))

(define (ASIN x) ((lap (x) (C_ASIN x)) x))

(define (ACOS x) ((lap (x) (C_ACOS x)) x))

(define (ATAN x . y)
    (if y ((lap (x y) (C_ATAN2 x y)) x (car y)) ((lap (x) (C_ATAN x)) x)))

(define (SQRT x)
    (if (negative? x)
	(error 'SQRT "Argument must be a non-negative NUMBER: ~s" x))
    (let ((iresult ((lap (x) (C_SQRT x)) x)))
	 (if (fixed? x)
	     (let ((eresult (float->fixed (round iresult))))
		  (if (eq? (* eresult eresult) x)
		      eresult
		      iresult))
	     iresult)))

(define (EXPT x y)
    (if (and (= x 0.0) (= y 0.0))
	1.0
	(let ((iresult ((lap (x y) (C_POW x y)) x y)))
	     (if (and (fixed? x) (fixed? y) (<= (abs iresult) ((lap () (C_FIXED "MAXS2CINT >> 2")))))
		 (float->fixed (round iresult))
		 iresult))))

(define (EXACT->INEXACT x)
    (cond ((fixed? x) (fixed->float x))
	  ((float? x) x)
	  (else (error 'EXACT->INEXACT "Argument is not a NUMBER: ~s" x))))

(define (INEXACT->EXACT x)
    (cond ((fixed? x) x)
	  ((float? x) (float->fixed x))
	  (else (error 'INEXACT->EXACT "Argument is not a NUMBER: ~s" x))))

(define (NUMBER->STRING number . form)
    (if (not (number? number))
	(error 'NUMBER->STRING "Argument is not a NUMBER: ~s" number))
    (set! form (if form (car form) 10))
    (cond ((equal? form '(int))
	   ; (int)  =>  [-]dddddddd
	   (formatnumber number 0 0))
	  ((and (pair? form) (= (length form) 2) (eq? (car form) 'fix)
		(fixed? (cadr form)) (>= (cadr form) 0))
	   ; (fix n)  =>  [-]dddddddd.
	   (formatnumber number 1 (cadr form)))
	  ((and (pair? form) (= (length form) 2) (eq? (car form) 'sci)
		(fixed? (cadr form)) (>= (cadr form) 0))
	   ; (sci n)  =>  [-]d.ddde+dd
	   (formatnumber number 2 (cadr form)))
	  ((= form 2)
	   ; 2 => binary integer
	   (integer->string number 2))
	  ((= form 8)
	   ; 8 => octal integer
	   (integer->string number 8))
	  ((= form 10)
	   ; 10 => any number
	   (format "~s" number))
	  ((= form 16)
	   (integer->string number 16))
	  (else (error 'NUMBER->STRING
		       "Argument is not a RADIX or FORMAT DESCRIPTOR: ~s"
		       form))))

(define (INTEGER->STRING number base)
    (if (< number 0)
	(string-append "-" (integer->string (abs number) base))
	(list->string
	    (reverse (let loop ((q (quotient number base))
				(r (remainder number base)))
			  (let ((digit (string-ref "0123456789abcdef"
					   (inexact->exact r))))
			       (if (= 0 q)
				   (list digit)
				   (cons digit
					 (loop (quotient q base)
					       (remainder q base))))))))))

(define (STRING->NUMBER string . radix)
    (let ((radix (if radix
		     (case (car radix)
			   ((2) "#b")
			   ((8) "#o")
			   ((10) "")
			   ((16) "#x")
			   (else (error 'STRING->NUMBER
					"Argument is not a RADIX: ~s"
				 (car radix))))
		     ""))
	  (chars (string->list string)))
	 (let loop ((sign "") (chars chars))
	      (if chars
		  (case (car chars)
			((#\- #\+) (loop (make-string 1 (car chars))
					 (cdr chars)))
			((#\#) (try-to-read string))
			(else (try-to-read (string-append sign radix
					       (list->string chars)))))))))

(define (TRY-TO-READ string)
    (call-with-current-continuation
	(lambda (return)
		(let ((restore-error-handler *error-handler*))
		     (set! *error-handler*
			   (lambda x
				   (set! *error-handler* restore-error-handler)
				   (return #f)))
		     (let* ((port (open-input-string string))
			    (number (read port))
			    (eof (read port)))
			   (set! *error-handler* restore-error-handler)
			   (if (and (number? number) (eof-object? eof))
			       number
			       #f))))))
