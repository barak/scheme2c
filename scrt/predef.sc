;;; SCHEME->C runtime
;;;
;;; This file contains the initial "predefined" information used by the
;;; compiler.

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

;;; Functions to be in-lined can be defined by the following form:
;;;
;;; (DEFINE-IN-LINE (func args ...) body ...)

(define-macro DEFINE-IN-LINE
    (lambda (form expander)
	    (let ((func (caadr form))
		  (args (cdadr form))
		  (body (cddr form)))
		 (expander
		     `(define-macro
			  ,func
			  (lambda (x e)
				  (e (cons '(lambda ,args ,@body)
					   (cdr x)) e)))
		     expander))))

;;; Run-time checking is controlled by the following flags which may be reset:

(define-constant *TYPE-CHECK* #t)

(define-constant *BOUNDS-CHECK* #t)

(define-constant *FIXED-ONLY* #f)

;;; 4.2.5  Delayed Evaluation

(define-macro DELAY
    (lambda (form expander)
	    (if (= (length form) 2)
		(expander `(make-promise (lambda () ,@(cdr form))) expander)
		(expand-error 'delay form))))

;;; 6.1  Booleans

(define-external (not x) scrt1)

(define-external (boolean? x) scrt1)

;;; 6.2  Equivalence Predicates.

(define-in-line (EQV? x y)
    ((lap (x y)
	  (BOOLEAN (OR (EQ (_S2CUINT x) (_S2CUINT y))
		       (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			    (AND (EQ (TSCP_EXTENDEDTAG x) DOUBLEFLOATTAG)
				 (AND (EQ (TSCPTAG y) EXTENDEDTAG)
				      (AND (EQ (TSCP_EXTENDEDTAG y)
					       DOUBLEFLOATTAG)
					   (EQ (FLOAT_VALUE x)
					       (FLOAT_VALUE y))))))))) x y))

(define-external (eqv? x y) scrt1)

(define-in-line (EQ? x y)
    ((lap (x y) (BOOLEAN (EQ (_S2CUINT x) (_S2CUINT y)))) x y))

(define-external (eq? x y) scrt1)

(define-external (equal? x y) scrt1)

;;; 6.3  Pairs and Lists.

(define-in-line (PAIR? x)
    ((lap (x) (BOOLEAN (EQ (TSCPTAG x) PAIRTAG))) x))

(define-external (pair? x) scrt1)

(define-external (cons x y) sc)

(define-external (cons* x . y) scrt1)

(define-external ($_car-error x) scrt1)

(define-in-line (CAR x)
    (if (and *type-check* (not (pair? x))) ($_car-error x))
    ((lap (x) (PAIR_CAR x)) x))

(define-external (car x) scrt1)

(define-external ($_cdr-error x) scrt1)

(define-in-line (CDR x)
    (if (and *type-check* (not (pair? x))) ($_cdr-error x))
    ((lap (x) (PAIR_CDR x)) x))

(define-external (cdr x) scrt1)

(define-in-line (CAAR x) (car (car x)))
(define-in-line (CADR x) (car (cdr x)))
(define-in-line (CDAR x) (cdr (car x)))
(define-in-line (CDDR x) (cdr (cdr x)))

(define-external (caar x) scrt1)
(define-external (cadr x) scrt1)
(define-external (cdar x) scrt1)
(define-external (cddr x) scrt1)

(define-external (caaar x) scrt1)
(define-external (caadr x) scrt1)
(define-external (cadar x) scrt1)
(define-external (caddr x) scrt1)
(define-external (cdaar x) scrt1)
(define-external (cdadr x) scrt1)
(define-external (cddar x) scrt1)
(define-external (cdddr x) scrt1)

(define-external (caaaar x) scrt1)
(define-external (caaadr x) scrt1)
(define-external (caadar x) scrt1)
(define-external (caaddr x) scrt1)
(define-external (cadaar x) scrt1)
(define-external (cadadr x) scrt1)
(define-external (caddar x) scrt1)
(define-external (cadddr x) scrt1)

(define-external (cdaaar x) scrt1)
(define-external (cdaadr x) scrt1)
(define-external (cdadar x) scrt1)
(define-external (cdaddr x) scrt1)
(define-external (cddaar x) scrt1)
(define-external (cddadr x) scrt1)
(define-external (cdddar x) scrt1)
(define-external (cddddr x) scrt1)

(define-in-line (SET-CAR! x y)
    (if (and *type-check* (not (pair? x)))
	(error 'SET-CAR! "Argument not a PAIR: ~s" x))
    ((lap (x y) (SETGEN (PAIR_CAR x) y)) x y))

(define-external (set-car! x y) scrt1)

(define-in-line (SET-CDR! x y)
    (if (and *type-check* (not (pair? x)))
	(error 'SET-CDR! "Argument not a PAIR: ~s" x))
    ((lap (x y) (SETGEN (PAIR_CDR x) y)) x y))

(define-external (set-cdr! x y) scrt1)

(define-in-line (NULL? x) (eq? x '()))

(define-external (null? x) scrt1)

(define-external (list? x) scrt1)

(define-in-line (LIST . x) x)

(define-external (list . x) scrt1)

(define-external (length x) scrt1)

(define-macro APPEND
    (lambda (form expander)
	    (case (length form)
		  ((1) ''())
		  ((2) (expander (cadr form) expander))
		  ((3) (expander `(append-two ,(cadr form) ,(caddr form))
			   expander))
		  (else (expander `(append-two ,(cadr form)
				       (append ,@(cddr form)))
			    expander)))))

(define-external (append-two x y) scrt1)

(define-external (append . x) scrt1)

(define-external (reverse x) scrt1)

(define-external (list-tail x k) scrt1)

(define-external (list-ref x k) scrt1)

(define-external (last-pair x) scrt1)

(define-external (memq x y) scrt1)

(define-external (memv x y) scrt1)

(define-external (member x y) scrt1)

(define-external (assq x y) scrt1)

(define-external (assv x y) scrt1)

(define-external (assoc x y) scrt1)

(define-external (remq x y) scrt1)

(define-external (remv x y) scrt1)

(define-external (remove x y) scrt1)

(define-external (remq! x y) scrt1)

(define-external (remv! x y) scrt1)

(define-external (remove! x y) scrt1)

;;; 6.4  Symbols.

(define-in-line (SYMBOL? x)
    ((lap (x) (BOOLEAN (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			    (EQ (TSCP_EXTENDEDTAG x) SYMBOLTAG)))) x))

(define-external (symbol? x) scrt2)

(define-in-line (SYMBOL->STRING x)
    (if (and *type-check* (not (symbol? x)))
	(error 'SYMBOL->STRING "Argument is not a SYMBOL: ~s" x))
    ((lap (x) (SYMBOL_NAME x)) x))

(define-external (symbol->string x) scrt2)

(define-external (string->symbol x) sc)

(define-external (string->uninterned-symbol x) sc)

(define-external (uninterned-symbol? x) sc)

(define-external (top-level-value symbol) scrt2)

(define-external (set-top-level-value! symbol value) scrt2)

(define-external (getprop symbol key) scrt2)

(define-external (getprop-all symbol) scrt2)

(define-external (putprop symbol key value) scrt2)

;;; 6.5  Numbers.

(define-in-line (FIXED? x)
    ((lap (x) (BOOLEAN (EQ (TSCPTAG x) FIXNUMTAG))) x))

(define-external (fixed? x) scrt2)

(define-in-line (FLOAT? x)
    ((lap (x) (BOOLEAN (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			    (EQ (TSCP_EXTENDEDTAG x) DOUBLEFLOATTAG)))) x))
		 
(define-external (float? x) scrt2)

(define-in-line (FLOAT->FIXED x)
    (if (and *type-check* (not (float? x)))
	(error 'FLOAT->FIXED "Argument is not a FLOAT: ~s" x))
    (if (and *type-check*
	     (or ((lap (x) (BOOLEAN (LT (FLOAT_VALUE x) MINTSCPINTF))) x)
		 ((lap (x) (BOOLEAN (GT (FLOAT_VALUE x) MAXTSCPINTF))) x)))
	(error 'FLOAT->FIXED "Argument is out of range: ~s" x))
    ((lap (x) (FLT_FIX x)) x))
    
(define-external (float->fixed x) scrt2)

(define-in-line (FIXED->FLOAT x)
    (if (and *type-check* (not (fixed? x)))
	(error 'FIXED->FLOAT "Argument is not an FIXED: ~s" x))
    ((lap (x) (FIX_FLT x)) x))

(define-external (fixed->float x) scrt2)

(define-in-line (NUMBER? x) (or (fixed? x) (float? x)))

(define-external (number? x) scrt2)

(define-in-line (COMPLEX? x) (or (fixed? x) (float? x)))

(define-external (complex? x) scrt2)

(define-in-line (REAL? x) (or (fixed? x) (float? x)))

(define-external (real? x) scrt2)

(define-in-line (RATIONAL? x) (number? x))

(define-external (rational? x) scrt2)

(define-in-line (INTEGER? x) (or (fixed? x) (and (float? x) (= x (round x)))))

(define-external (integer? x) scrt2)

(define-in-line (ONE-FIXED? x)
    (or (and (not *type-check*) *fixed-only*) (fixed? x)))

(define-in-line (TWO-FIXEDS? x y)
    (or (and (not *type-check*) *fixed-only*)
	((lap (x y) (BOOLEAN (NOT (BITAND (BITOR (_S2CINT x)
						 (_S2CINT y))
					  3)))) x y)))

(define-in-line (ZERO? x)
    (if (one-fixed? x)
	(eq? x 0)
	(`,zero? x)))

(define-external (zero? x) scrt2)

(define-in-line (POSITIVE? x)
    (if (one-fixed? x)
	((lap (x) (BOOLEAN (GT (_S2CINT x) 0))) x)
	(`,positive? x)))

(define-external (positive? x) scrt2)

(define-in-line (NEGATIVE? x)
    (if (one-fixed? x)
	((lap (x) (BOOLEAN (LT (_S2CINT x) 0))) x)
	(`,negative? x)))

(define-external (negative? x) scrt2)

(define-in-line (ODD? x) (and (integer? x) (not (zero? (remainder x 2)))))

(define-external (odd? x) scrt2)

(define-in-line (EVEN? x) (and (integer? x) (zero? (remainder x 2))))

(define-external (even? x) scrt2)

(define-in-line (EXACT? x)
    (if (and *type-check* (not (number? x)))
	(error 'EXACT? "Argument is not a NUMBER: ~s" x))
    (fixed? x))

(define-external (exact? x) scrt2)

(define-in-line (INEXACT? x)
    (if (and *type-check* (not (number? x)))
	(error 'INEXACT? "Argument is not a NUMBER: ~s" x))
    (float? x))

(define-external (inexact? x) scrt2)

(define-macro =
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander '(lambda (x y)
				      (if (two-fixeds? x y)
					  (eq? x y)
					  (=-two x y))) expander)
		   '=)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (=-two x y) scrt2)

(define-external (= x y . z) scrt2)

(define-macro <
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander '(lambda (x y)
				      (if (two-fixeds? x y)
					  ((lap (x y)
						(BOOLEAN (LT (_S2CINT x)
							     (_S2CINT y))))
					    x y)
					  (<-two x y))) expander)
		   '<)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (<-two x y) scrt2)

(define-external (< x y . z) scrt2)

(define-macro >
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander '(lambda (x y)
				      (if (two-fixeds? x y)
					  ((lap (x y)
						(BOOLEAN (GT (_S2CINT x)
							     (_S2CINT y))))
					    x y)
					  (>-two x y))) expander)
		   '>)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (>-two x y) scrt2)

(define-external (> x y . z) scrt2)

(define-macro <=
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander '(lambda (x y)
				      (if (two-fixeds? x y)
					  ((lap (x y)
						(BOOLEAN (LTE (_S2CINT x)
							      (_S2CINT y))))
					    x y)
					  (<=-two x y))) expander)
		   '<=)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (<=-two x y) scrt2)

(define-external (<= x y . z) scrt2)

(define-macro >=
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander
		       '(lambda (x y)
				(if (two-fixeds? x y)
				    ((lap (x y)
					  (BOOLEAN (GTE (_S2CINT x)
							(_S2CINT y))))
				     x y)
				    (>=-two x y))) expander)
		   '>=)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (>=-two x y) scrt2)

(define-external (>= x y . z) scrt2)

(define-macro MAX
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander
		       '(lambda (x y)
				(if (two-fixeds? x y)
				    (if ((lap (x y)
					      (BOOLEAN (GT (_S2CINT x)
							   (_S2CINT y))))
					 x y)
					x y)
				    (max-two x y))) expander)
		   'max)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (max-two x y) scrt2)

(define-external (max x . y) scrt2)

(define-macro MIN
    (lambda (form expander)
	    `(,(if (= (length form) 3)
		   (expander
		       '(lambda (x y)
				(if (two-fixeds? x y)
				    (if ((lap (x y)
					      (BOOLEAN (LT (_S2CINT x)
							   (_S2CINT y))))
					 x y)
					x y)
				    (min-two x y))) expander)
		   'min)
	      ,@(map (lambda (x) (expander x expander)) (cdr form)))))

(define-external (min-two x y) scrt2)

(define-external (min x . y) scrt2)

(define-macro +
    (lambda (form expander)
	    (case (length form)
		  ((1) 0)
		  ((2) (expander (cadr form) expander))
		  ((3) (expander `((lambda (x y)
					   (if (two-fixeds? x y)
					       (if *fixed-only*
						   ((lap (x y)
						     (_TSCP (PLUS
							     (_S2CINT x)
							     (_S2CINT y))))
						    x y)
						   ((lap (x y)
						     (_TSCP (IPLUS
							     (_S2CINT x)
							     (_S2CINT y))))
						    x y))
					       (+-two x y)))
				   ,(cadr form)
				   ,(caddr form))
			   expander))
		  (else (expander `(+ ,(cadr form) (+ ,@(cddr form)))
			    expander)))))

(define-external (+-two x y) scrt2)

(define-external (+ . x) scrt2)

(define-macro *
    (lambda (form expander)
	    (case (length form)
		  ((1) 1)
		  ((2) (expander (cadr form) expander))
		  ((3) (expander
			   `((lambda (x y)
				     (if (two-fixeds? x y)
					 (if *fixed-only*
					     ((lap (x y)
						   (_TSCP (TIMES
							     (FIXED_C x)
							     (_S2CINT y))))
					      x y)
					     ((lap (x y)
						   (_TSCP (ITIMES
							     (FIXED_C x)
							     (_S2CINT y))))
					      x y))
					 (*-two x y)))
			     ,(cadr form)
			     ,(caddr form))
			   expander))
		  (else (expander `(* ,(cadr form) (* ,@(cddr form)))
			    expander)))))

(define-external (*-two x y) scrt2)

(define-external (* . x) scrt2)

(define-macro -
    (lambda (form expander)
	    (case (length form)
		  ((1) (expand-error '- form))
		  ((2) (expander
			   `((lambda (x)
				     (if (one-fixed? x)
					 (if *fixed-only*
					     ((lap (x)
						   (_TSCP (NEGATE
							      (_S2CINT x))))
					      x)
					     ((lap (x)
						   (_TSCP (INEGATE
							      (_S2CINT x))))
					      x))
					 (--two 0.0 x)))
			     ,(cadr form))
			   expander))
		  ((3) (expander
			   `((lambda (x y)
				     (if (two-fixeds? x y)
					 (if *fixed-only*
					     ((lap (x y)
						   (_TSCP (DIFFERENCE
							      (_S2CINT x)
							      (_S2CINT y))))
					      x y)
					     ((lap (x y)
						   (_TSCP (IDIFFERENCE
							      (_S2CINT x)
							      (_S2CINT y))))
					      x y))
					 (--two x y)))
			     ,@(cdr form))
			   expander))
		  (else (expander `(- (- ,(cadr form) ,(caddr form))
				      ,@(cdddr form))
			    expander)))))

(define-external (--two x y) scrt2)

(define-external (- x . y) scrt2)

(define-macro /
    (lambda (form expander)
	    (case (length form)
		  ((1) (expand-error '/ form))
		  ((2) (expander `(/ 1 ,(cadr form)) expander))
		  ((3) (expander
			   `((lambda (x y)
				     (if (and (two-fixeds? x y)
					      (not (eq? y 0))
					      (eq? ((lap (x y)
							 (_TSCP
							   (REMAINDER
							     (_S2CINT x)
							     (_S2CINT y))))
						    x y)
						   0))
					 ((lap (x y)
					       (C_FIXED (QUOTIENT
							    (_S2CINT x)
							    (_S2CINT y))))
					  x y)
					 (/-two x y)))
			     ,@(cdr form))
			   expander))
		  (else (expander `(/ (/ ,(cadr form) ,(caddr form))
				      ,@(cdddr form))
			    expander)))))

(define-external (/-two x y) scrt2)

(define-external (/ x . y) scrt2)

(define-in-line (ABS x)
    (if (one-fixed? x)
	(if (negative? x)
	    (if *fixed-only*
		((lap (x) (_TSCP (NEGATE (_S2CINT x)))) x)
		((lap (x) (_TSCP (INEGATE (_S2CINT x)))) x))
	    x)
	(`,abs x)))

(define-external (abs x) scrt2)

(define-in-line (QUOTIENT x y)
    (if (and (two-fixeds? x y) (not (eq? y 0)))
	((lap (x y) (C_FIXED (QUOTIENT (_S2CINT x) (_S2CINT y)))) x y)
	(`,quotient x y)))

(define-external (quotient x y) scrt2)

(define-in-line (REMAINDER x y)
    (if (and (two-fixeds? x y) (not (eq? y 0)))
	((lap (x y) (_TSCP (REMAINDER (_S2CINT x) (_S2CINT y)))) x y)
	(`,remainder x y))) 

(define-external (remainder x y) scrt2)

(define-external (modulo x y) scrt2)

(define-external (gcd . x) scrt2)

(define-external (lcm . x) scrt2)

(define-external (floor x) scrt2)

(define-external (ceiling x) scrt2)

(define-external (truncate x) scrt2)

(define-external (round x) scrt2)

(define-external (exp x) scrt2)

(define-external (log x) scrt2)

(define-external (sin x) scrt2)

(define-external (cos x) scrt2)

(define-external (tan x) scrt2)

(define-external (asin x) scrt2)

(define-external (acos x) scrt2)

(define-external (atan x . y) scrt2)

(define-external (sqrt x) scrt2)

(define-external (expt x y) scrt2)

(define-external (exact->inexact x) scrt2)

(define-external (inexact->exact x) scrt2)

(define-external (number->string number . format-radix) scrt2)

(define-external (string->number number . radix) scrt2)

;;; 6.6  Characters.

(define-in-line (CHAR? x)
    ((lap (x) (BOOLEAN (EQ (TSCPIMMEDIATETAG  x) CHARACTERTAG))) x))

(define-external (char? x) scrt3)

(define-in-line (TWO-CHARS? x y)
    ((lap (x y) (BOOLEAN (AND (EQ (TSCPIMMEDIATETAG  x) CHARACTERTAG)
			      (EQ (TSCPIMMEDIATETAG  y) CHARACTERTAG)))) x y))


(define-in-line (CHAR=? x y)
    (if (and *type-check* (not (two-chars? x y)))
	(error 'CHAR=? "Argument(s) not CHAR: ~s ~s" x y))
    ((lap (x y) (BOOLEAN (EQ (_S2CINT x) (_S2CINT y)))) x y))

(define-external (char=? x y) scrt3)

(define-in-line (CHAR<? x y)
    (if (and *type-check* (not (two-chars? x y)))
	(error 'CHAR<? "Argument(s) not CHAR: ~s ~s" x y))
    ((lap (x y) (BOOLEAN (LT (_S2CINT x) (_S2CINT y)))) x y))

(define-external (char<? x y) scrt3)

(define-in-line (CHAR>? x y)
    (if (and *type-check* (not (two-chars? x y)))
	(error 'CHAR>? "Argument(s) not CHAR: ~s ~s" x y))
    ((lap (x y) (BOOLEAN (GT (_S2CINT x) (_S2CINT y)))) x y))

(define-external (char>? x y) scrt3)

(define-in-line (CHAR<=? x y)
    (if (and *type-check* (not (two-chars? x y)))
	(error 'CHAR<=? "Argument(s) not CHAR: ~s ~s" x y))
    ((lap (x y) (BOOLEAN (LTE (_S2CINT x) (_S2CINT y)))) x y))

(define-external (char<=? x y) scrt3)

(define-in-line (CHAR>=? x y)
    (if (and *type-check* (not (two-chars? x y)))
	(error 'CHAR>=? "Argument(s) not CHAR: ~s ~s" x y))
    ((lap (x y) (BOOLEAN (GTE (_S2CINT x) (_S2CINT y)))) x y))

(define-external (char>=? x y) scrt3)

(define-external (char-ci=? x y) scrt3)

(define-external (char-ci<? x y) scrt3)

(define-external (char-ci>? x y) scrt3)

(define-external (char-ci<=? x y) scrt3)

(define-external (char-ci>=? x y) scrt3)

(define-external (char-alphabetic? x) scrt3)

(define-external (char-numeric? x) scrt3)

(define-external (char-whitespace? x) scrt3)

(define-external (char-upper-case? x) scrt3)

(define-external (char-lower-case? x) scrt3)

(define-external (char-upcase x) scrt3)

(define-external (char-downcase x) scrt3)

(define-in-line (CHAR->INTEGER x)
    (if (and *type-check* (not (char? x)))
	(error 'CHAR->INTEGER "Argument not a CHAR: ~s" x))
    ((lap (x) (CHAR_FIX x)) x))

(define-external (char->integer x) scrt3)

(define-in-line (INTEGER->CHAR x)
    (if (and *type-check* (or (not (fixed? x)) (< x 0) (> x 255)))
	(error 'INTEGER->CHAR "Argument not an unsigned 8-bit INTEGER: ~s" x))
    ((lap (x) (FIX_CHAR x)) x))

(define-external (integer->char x) scrt3)

;;; 6.7  Strings.

(define-in-line (STRING? x)
    ((lap (x)
	  (BOOLEAN (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			(EQ (TSCP_EXTENDEDTAG x) STRINGTAG)))) x))

(define-external (string? x) scrt3)

(define-external (make-string x . y) sc)

(define-external (string . x) scrt3)

(define-external (string-copy x) sc)

(define-in-line (STRING-LENGTH x)
    (if (and *type-check* (not (string? x)))
	(error 'STRING-LENGTH "Argument is not a STRING: ~s" x))
    ((lap (x) (C_FIXED (STRING_LENGTH x))) x))

(define-external (string-length x) scrt3)

(define-in-line (STRING-REF x y)
    (if (and *type-check* (not (fixed? y)))
	(error 'STRING-REF "Argument is not an INTEGER: ~s" y))
    (if (and *bounds-check*
	     (or (negative? y) (>= y (string-length x))))
	(error 'STRING-REF "Argument is out of range: ~s" y))
    ((lap (x y) (C_CHAR (STRING_CHAR x y))) x y))

(define-external (string-ref x y) scrt3)

(define-in-line (STRING-SET! x y z)
    (if (and *type-check* (not (fixed? y)))
	(error 'STRING-SET! "Argument is not an INTEGER: ~s" y))
    (if (and *type-check* (not (char? z)))
	(error 'STRING-SET! "Argument is not a CHAR: ~s" z))
    (if (and *bounds-check* (or (negative? y) (>= y (string-length x))))
	(error 'STRING-SET! "Argument(s) incorrect"))
    ((lap (x y z) (SET (STRING_CHAR x y) (CHAR_C z)) z) x y z))

(define-external (string-set! x y z) scrt3)

(define-external (string=? x y) scrt3)

(define-external (string<? x y) scrt3)

(define-external (string>? x y) scrt3)

(define-external (string<=? x y) scrt3)

(define-external (string>=? x y) scrt3)

(define-external (string-ci=? x y) scrt3)

(define-external (string-ci<? x y) scrt3)

(define-external (string-ci>? x y) scrt3)

(define-external (string-ci<=? x y) scrt3)

(define-external (string-ci>=? x y) scrt3)

(define-external (substring x y z) scrt3)

(define-external (string-append . x) scrt3)

(define-external (string->list x) scrt3)

(define-external (list->string x) scrt3)

(define-external (string-fill! s c) scrt3)

;;; 6.8  Vectors.

(define-in-line (VECTOR? x)
    ((lap (x) (BOOLEAN (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			    (EQ (TSCP_EXTENDEDTAG x) VECTORTAG)))) x))

(define-external (vector? x) scrt4)

(define-in-line (VECTOR-BOUNDS? v x)
    ((lap (v x) (BOOLEAN (LT (_S2CUINT (FIXED_C x))
			     (_S2CUINT (VECTOR_LENGTH v)))))
     v x))

(define-external (make-vector x . y) sc)

(define-external (vector . x) scrt4)

(define-in-line (VECTOR-LENGTH x)
    (if (and *type-check* (not (vector? x)))
	(error 'VECTOR-LENGTH "Argument is not a VECTOR: ~s" x))
    ((lap (x) (C_FIXED (VECTOR_LENGTH x))) x))

(define-external (vector-length x) scrt4)

(define-in-line (VECTOR-REF x y)
    (if (and *type-check* (not (vector? x)))
	(error 'VECTOR-REF "Argument is not a VECTOR: ~s" x))
    (if (and *type-check* (not (fixed? y)))
	(error 'VECTOR-REF "Argument is not an INTEGER: ~s" y))
    (if (and (or *type-check* *bounds-check*) (not (vector-bounds? x y)))
	(error 'VECTOR-REF "Index is not in bounds: ~s" y))
    ((lap (x y) (VECTOR_ELEMENT x y)) x y))

(define-external (vector-ref x y) scrt4)

(define-in-line (VECTOR-SET! x y z)
    (if (and *type-check* (not (vector? x)))
	(error 'VECTOR-SET! "Argument is not a VECTOR: ~s" x))
    (if (and *type-check* (not (fixed? y)))
	(error 'VECTOR-SET! "Argument is not an INTEGER: ~s" y))
    (if (and (or *type-check* *bounds-check*) (not (vector-bounds? x y)))
	(error 'VECTOR-SET! "Index is not in bounds: ~s" y))
    ((lap (x y z) (SETGEN (VECTOR_ELEMENT x y) z)) x y z))

(define-external (vector-set! x y z) scrt4)

(define-external (vector->list x) scrt4)

(define-external (list->vector x) scrt4)

(define-external (vector-fill! x y) scrt4)

;;; 6.9  Control features.

(define-in-line (PROCEDURE? x)
    ((lap (x) (BOOLEAN (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			    (EQ (TSCP_EXTENDEDTAG x) PROCEDURETAG)))) x))

(define-external (procedure? x) scrt4)

(define-macro apply
    (lambda (form expander)
	    (if (equal? (length form) 3)
		(expander `(apply-two ,@(cdr form)) expander)
		(expander `(apply-two ,(cadr form) (cons* ,@(cddr form)))
		    expander))))

(define-external (apply-two x y) sc)

(define-external (apply x y . z) scrt4)

(define-macro MAP
    (lambda (form expander)
	    (case (length form)
		  ((3) (expander `(map-one ,@(cdr form)) expander))
		  ((4) (expander `(map-two ,@(cdr form)) expander))
		  ((5) (expander `(map-three ,@(cdr form)) expander))
		  (else `(map ,@(map (lambda (x) (expander x expander))
				     (cdr form)))))))

(define-in-line (MAP-ONE proc args)
    (let loop ((args args) (head '()) (tail '()))
	 (if (not (null? args))
	     (let ((val (cons (proc (car args)) '())))
		  (if (null? head)
		      (loop (cdr args) val val)
		      (loop (cdr args) head (set-cdr! tail val))))
	     head)))

(define-in-line (MAP-TWO proc args brgs)
    (let loop ((args args) (brgs brgs) (head '()) (tail '()))
	 (if (not (null? args))
	     (let ((val (cons (proc (car args) (car brgs)) '())))
		  (if (null? head)
		      (loop (cdr args) (cdr brgs) val val)
		      (loop (cdr args) (cdr brgs) head (set-cdr! tail val))))
	     head)))

(define-in-line (MAP-THREE proc args brgs crgs)
    (let loop ((args args) (brgs brgs) (crgs crgs) (head '()) (tail '()))
	 (if (not (null? args))
	     (let ((val (cons (proc (car args) (car brgs) (car crgs)) '())))
		  (if (null? head)
		      (loop (cdr args) (cdr brgs) (cdr crgs) val val)
		      (loop (cdr args) (cdr brgs) (cdr crgs)
			    head (set-cdr! tail val))))
	     head)))

(define-external (map x y . z) scrt4)

(define-macro FOR-EACH
    (lambda (form expander)
	    (case (length form)
		  ((3) (expander `(for-each-one ,@(cdr form)) expander))
		  ((4) (expander `(for-each-two ,@(cdr form)) expander))
		  ((5) (expander `(for-each-three ,@(cdr form)) expander))
		  (else `(for-each ,@(map (lambda (x) (expander x expander))
					  (cdr form)))))))

(define-in-line (FOR-EACH-ONE proc args)
    (do ((args args (cdr args)))
	((null? args))
	(proc (car args))))

(define-in-line (FOR-EACH-TWO proc args brgs)
    (do ((args args (cdr args))
	 (brgs brgs (cdr brgs)))
	((null? args))
	(proc (car args) (car brgs))))

(define-in-line (FOR-EACH-THREE proc args brgs crgs)
    (do ((args args (cdr args))
	 (brgs brgs (cdr brgs))
	 (crgs crgs (cdr crgs)))
	((null? args))
	(proc (car args) (car brgs) (car crgs))))

(define-external (for-each x y . z) scrt4)

(define-in-line (FORCE object) (object))

(define-external (force object) scrt4)

(define-external (make-promise proc) scrt4)

(define-external call-with-current-continuation sc)

(define-external (catch-error procedure) scrt4)

;;; 6.10  Input and output.

(define-external (call-with-input-file filename proc) scrt5)

(define-external (call-with-output-file filename proc) scrt5)

(define-external (input-port? x) scrt5)

(define-external (output-port? x) scrt5)

(define-external (current-input-port) scrt5)

(define-external (current-output-port) scrt5)

(define-external stdin-port scrt5)

(define-external stdout-port scrt5)

(define-external stderr-port scrt5)

(define-external debug-output-port scrt5)

(define-external trace-output-port scrt5)

(define-external (with-input-from-file filename proc) scrt5)

(define-external (with-output-to-file filename proc) scrt5)

(define-external (open-input-file filename) scrt5)

(define-external (open-output-file filename) scrt5)

(define-external (open-file filename type) scrt5)

(define-external (make-file-port fileptr type) scrt5)

(define-external (open-input-string string) scrt5)

(define-external (open-output-string) scrt5)

(define-external (close-input-port port) scrt5)

(define-external (close-output-port port) scrt5)

(define-external (close-port port) scrt5)

(define-external (read . port) scrt6)

(define-external (read-char . port) scrt6)

(define-external (peek-char . port) scrt6)

(define-external (char-ready? . port) scrt6)

(define-external (eof-object? x) scrt6)

(define-external $_eof-object "sc" "eofobject")

(define-external (write obj . port) scrt6)

(define-external (display obj . port) scrt6)

(define-external (write-char char . port) scrt6)

(define-external (newline . port) scrt6)

(define-external (flush-buffer . port) scrt6)

(define-external (get-output-string port) scrt6)

(define-external (write-count . port) scrt6)

(define-external (write-width . port) scrt6)

(define-external (set-write-width! width . port) scrt6)

(define-external (write-circle . port) scrt6)

(define-external (set-write-circle! flag . port) scrt6)

(define-external (write-level . port) scrt6)

(define-external (set-write-level! level . port) scrt6)

(define-external (write-length . port) scrt6)

(define-external (set-write-length! length . port) scrt6)

(define-external (write-pretty . port) scrt6)

(define-external (set-write-pretty! flag . port) scrt6)

(define-external (echo port . argl) scrt6)

(define-external (transcript-on filename) scrt6)

(define-external (transcript-off) scrt6)

(define-external (port->stdio-file port) scrt6)

(define-external (format form . args) scrt6)

(define-external (pp form . output) scrt6)

(define-external (rename-file old new) scrt6)

(define-external (remove-file name) scrt6)

(define-external (define-system-file-task file idle-task file-task) scrt6)

(define-external (wait-system-file file) scrt6)

(define-external (enable-system-file-tasks enable) scrt6)

;;; Extensions to the Scheme.

(define-external (weak-cons x y) sc)

(define-external (time-of-day) sc)

(define-external (c-string->string x) sc)

(define-external c-sizeof-short scrt4)

(define-external c-sizeof-int scrt4)

(define-external c-sizeof-long scrt4)

(define-external c-sizeof-float scrt4)

(define-external c-sizeof-double scrt4)

(define-external c-sizeof-tscp scrt4)

(define-external c-sizeof-s2cuint scrt4)

(define-external (c-byte-ref x y) scrt4)

(define-external (c-shortint-ref x y) scrt4)

(define-external (c-int-ref x y) scrt4)

(define-external (c-shortunsigned-ref x y) scrt4)

(define-external (c-unsigned-ref x y) scrt4)

(define-external (c-longint-ref x y) scrt4)

(define-external (c-longunsigned-ref x y) scrt4)

(define-external (c-s2cuint-ref x y) scrt4)

(define-external (c-tscp-ref x y) scrt4)

(define-external (c-float-ref x y) scrt4)

(define-external (c-double-ref x y) scrt4)

(define-external (c-byte-set! x y z) scrt4)

(define-external (c-shortint-set! x y z) scrt4)

(define-external (c-int-set! x y z) scrt4)

(define-external (c-shortunsigned-set! x y z) scrt4)

(define-external (c-unsigned-set! x y z) scrt4)

(define-external (c-longint-set! x y z) scrt4)

(define-external (c-longunsigned-set! x y z) scrt4)

(define-external (c-s2cuint-set! x y z) scrt4)

(define-external (c-tscp-set! x y z) scrt4)

(define-external (c-float-set! x y z) scrt4)

(define-external (c-double-set! x y z) scrt4)

(define-external (scheme-byte-ref x y) scrt4)

(define-external (scheme-int-ref x y) scrt4)

(define-external (scheme-tscp-ref x y) scrt4)

(define-external (scheme-s2cuint-ref x y) scrt4)

(define-external (scheme-byte-set! x y z) scrt4)

(define-external (scheme-int-set! x y z) scrt4)

(define-external (scheme-tscp-set! x y z) scrt4)

(define-external (scheme-s2cuint-set! x y z) scrt4)

(define-external (bit-and x . y) scrt4)

(define-external (bit-or x . y) scrt4)

(define-external (bit-not x) scrt4)

(define-external (bit-xor x . y) scrt4)

(define-external (bit-lsh x y) scrt4)

(define-external (bit-rsh x y) scrt4)

(define-external (when-unreferenced obj proc) scrt4)

(define-external (signal sig handler) scrt4)

(define-external (system command) scrt4)

(define-external (time-slice) sc)

(define-external (set-time-slice! x) sc)

(define-external (stack-size) sc)

(define-external (set-stack-size! x) sc)

(define-external (collect) sc)

(define-external (collect-all) sc)

(define-external after-collect top-level)

(define-external (collect-info) sc)

(define-external (set-gcinfo! x) sc)

(define-external (set-generation-limit! x) sc)

(define-external (set-maximum-heap! x) sc)

(define-external *frozen-objects* top-level)

(define-external *obarray* top-level)

(define-external (eval form . env) sceval)

(define-external (error procname format-string . args) scdebug)

(define-external *error-handler* scdebug)

(define-external reset screp)

(define-external exit screp)

(define-external top-level screp)

(define-external (read-eval-print . flags) screp)

(define-external (load file) screp)

(define-external (loadq file) screp)

(define-external (loade file) screp)

(define-external *scheme2c-result* screp)

(define-external implementation-information "sc" "implementation_v")

(define-external $_undefined "sc" "undefined")

(define-external $_empty-string "sc" "emptystring")

(define-external $_empty-vector "sc" "emptyvector")

(define-in-line (%RECORD? x)
    ((lap (x) (BOOLEAN (AND (EQ (TSCPTAG x) EXTENDEDTAG)
			    (EQ (TSCP_EXTENDEDTAG x) RECORDTAG)))) x))

(define-external (%record? x) scrt4)

(define-external (make-%record x . y) sc)

(define-external (%record . x) scrt4)

(define-in-line (%RECORD-LENGTH x)
    (if (and *type-check* (not (%record? x)))
	(error '%RECORD-LENGTH "Argument is not a %RECORD: ~s" x))
    ((lap (x) (C_FIXED (RECORD_LENGTH x))) x))

(define-external (%record-length x) scrt4)

(define-in-line (%RECORD-BOUNDS? v x)
    ((lap (v x) (BOOLEAN (LT (_S2CUINT (FIXED_C x))
			     (_S2CUINT (RECORD_LENGTH v)))))
     v x))

(define-in-line (%RECORD-REF x y)
    (if (and *type-check* (not (%record? x)))
	(error '%RECORD-REF "Argument is not a %RECORD: ~s" x))
    (if (and *type-check* (not (fixed? y)))
	(error '%RECORD-REF "Argument is not an INTEGER: ~s" y))
    (if (and (or *type-check* *bounds-check*) (not (%record-bounds? x y)))
	(error '%RECORD-REF "Index is not in bounds: ~s" y))
    ((lap (x y) (RECORD_ELEMENT x y)) x y))

(define-external (%record-ref x y) scrt4)

(define-in-line (%RECORD-SET! x y z)
    (if (and *type-check* (not (%record? x)))
	(error '%RECORD-SET! "Argument is not a %RECORD: ~s" x))
    (if (and *type-check* (not (fixed? y)))
	(error '%RECORD-SET! "Argument is not an INTEGER: ~s" y))
    (if (and (or *type-check* *bounds-check*) (not (%record-bounds? x y)))
	(error '%RECORD-SET! "Index is not in bounds: ~s" y))
    ((lap (x y z) (SETGEN (RECORD_ELEMENT x y) z)) x y z))

(define-external (%record-set! x y z) scrt4)

(define-in-line (%RECORD-METHODS x)
    (if (and *type-check* (not (%record? x)))
	(error '%RECORD-METHODS "Argument is not a %RECORD: ~s" x))
    ((lap (x) (RECORD_METHODS x)) x))

(define-external (%record-methods x) scrt4)

(define-in-line (%RECORD-METHODS-SET! x y)
    (if (and *type-check* (not (%record? x)))
	(error '%RECORD-SET! "Argument is not a %RECORD: ~s" x))
    ((lap (x y) (SETGEN (RECORD_METHODS x) y)) x y))

(define-external (%record-methods-set! x y) scrt4)

(define-external (%record->list x) scrt4)

(define-external (list->%record x) scrt4)

(define-external %RECORD-PREFIX-CHAR scrt4)

(define-external %RECORD-READ scrt4)

(define-external (%RECORD-LOOKUP-METHOD record method-name) scrt4)

;;; During debugging, the following symbols are defined:
;;;
;;; 	backtrace, *args*, *bpt-env*, *error-env*, *result*, proceed,
;;; 	proceed?, reset-bpt, reset-error
