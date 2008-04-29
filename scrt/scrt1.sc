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

(module scrt1
    (top-level
	NOT BOOLEAN?
	EQV? EQ? EQUAL?
	PAIR? CONS* CAR CDR CAAR CADR CDAR CDDR
	CAAAR CAADR CADAR CADDR CDAAR CDADR CDDAR CDDDR
	CAAAAR CAAADR CAADAR CAADDR CADAAR CADADR CADDAR CADDDR
        CDAAAR CDAADR CDADAR CDADDR CDDAAR CDDADR CDDDAR CDDDDR
	SET-CAR! SET-CDR! NULL? LIST? LIST LENGTH APPEND REVERSE LIST-TAIL
	LIST-REF LAST-PAIR MEMQ MEMV MEMBER ASSQ ASSV ASSOC REMQ REMV REMOVE
	REMQ! REMV! REMOVE!))

;;; 6.1  Booleans.

(define (NOT x) (not x))

(define (BOOLEAN? x)
    (or (eq? x #f) (eq? x #t)))

;;; 6.2  Equivalence Predicates.

(define (EQV? x y) (eqv? x y))

(define (EQ? x y) (eq? x y))

(define (EQUAL? x y)
    (cond ((pair? x)
	   (and (pair? y) (equal? (car x) (car y)) (equal? (cdr x) (cdr y))))
	  ((vector? x)
	   (let ((lx (vector-length x)))
		(and (vector? y)
		     (= (vector-length y) lx)
		     (let test ((i (- lx 1)))
			  (or (= i -1)
			      (and (equal? (vector-ref x i) (vector-ref y i))
				   (test (- i 1))))))))
	  ((string? x)
	   (and (string? y) (string=? x y)))
	  ((%record? x)
	   ((%record-lookup-method x '%to-equal?) x y))
	  (else (eqv? x y))))

;;; 6.3  Pairs and Lists.

(define (PAIR? x) (pair? x))

(define (CONS* x . y)
    (letrec ((cons*1 (lambda (x)
			     (cond ((null? (cdr x)) (car x))
				   (else (cons (car x) (cons*1 (cdr x))))))))
	    (if y (cons x (cons*1 y)) x)))

(define ($_CAR-ERROR x) (error 'CAR "Argument not a PAIR: ~a" x))

(define ($_CDR-ERROR x) (error 'CDR "Argument not a PAIR: ~a" x))

(define (CAR x) (car x))

(define (CDR x) (cdr x))

(define (CAAR x) (car (car x)))
(define (CADR x) (car (cdr x)))
(define (CDAR x) (cdr (car x)))
(define (CDDR x) (cdr (cdr x)))

(define (CAAAR x) (car (car (car x))))
(define (CAADR x) (car (car (cdr x))))
(define (CADAR x) (car (cdr (car x))))
(define (CADDR x) (car (cdr (cdr x))))
(define (CDAAR x) (cdr (car (car x))))
(define (CDADR x) (cdr (car (cdr x))))
(define (CDDAR x) (cdr (cdr (car x))))
(define (CDDDR x) (cdr (cdr (cdr x))))

(define (CAAAAR x) (car (car (car (car x)))))
(define (CAAADR x) (car (car (car (cdr x)))))
(define (CAADAR x) (car (car (cdr (car x)))))
(define (CAADDR x) (car (car (cdr (cdr x)))))
(define (CADAAR x) (car (cdr (car (car x)))))
(define (CADADR x) (car (cdr (car (cdr x)))))
(define (CADDAR x) (car (cdr (cdr (car x)))))
(define (CADDDR x) (car (cdr (cdr (cdr x)))))

(define (CDAAAR x) (cdr (car (car (car x)))))
(define (CDAADR x) (cdr (car (car (cdr x)))))
(define (CDADAR x) (cdr (car (cdr (car x)))))
(define (CDADDR x) (cdr (car (cdr (cdr x)))))
(define (CDDAAR x) (cdr (cdr (car (car x)))))
(define (CDDADR x) (cdr (cdr (car (cdr x)))))
(define (CDDDAR x) (cdr (cdr (cdr (car x)))))
(define (CDDDDR x) (cdr (cdr (cdr (cdr x)))))

(define (SET-CAR! x y) (set-car! x y))

(define (SET-CDR! x y) (set-cdr! x y))

(define (NULL? x) (null? x))

(define (LIST? x)
    (define (L1 x prev)
	    (cond ((null? x) #t)
		  ((pair? x) (if (eq? x prev) #f (l2 (cdr x) prev)))
		  (else #f)))
    (define (L2 x prev)
	    (cond ((null? x) #t)
		  ((pair? x) (if (eq? x prev) #f (l1 (cdr x) (cdr prev))))
		  (else #f)))
    (cond ((null? x) #t)
	  ((pair? x) (l1 (cdr x) x))
	  (else #f)))

(define (LIST . x) x)

(define (LENGTH x)
    (do ((len 0 (+ len 1))
	 (x   x (cdr x)))
	((null? x) len)))

(define (APPEND-TWO x y)
    (if (null? x)
	y
	(let ((new (cons (car x) '())))
	     (let loop ((tail new) (old (cdr x)))
		  (cond ((null? old)
			 (set-cdr! tail y)
			 new)
			(else
			 (set-cdr! tail (cons (car old) '()))
			 (loop (cdr tail) (cdr old))))))))

(define (APPEND . x)
    (define (APPEND-LIST x)
	    (case (length x)
		  ((0) '())
		  ((1) (car x))
		  ((2) (append-two (car x) (cadr x)))
		  (else (append-two (car x) (append-list (cdr x))))))
    (append-list x))

(define (REVERSE x)
    (do ((new '() (cons (car old) new))
	 (old  x  (cdr old)))
	((null? old) new)))

(define (LIST-TAIL x k)
    (if (zero? k) x (list-tail (cdr x) (- k 1))))

(define (LIST-REF x k) (car (list-tail x k)))

(define (LAST-PAIR x)
    (let ((cdrx (cdr x)))
	 (if (pair? cdrx) (last-pair cdrx) x)))

(define (MEMQ x y)
    (cond ((null? y) #f)
	  ((eq? x (car y)) y)
	  (else (memq x (cdr y)))))

(define (MEMV x y)
    (cond ((null? y) #f)
	  ((eqv? x (car y)) y)
	  (else (memv x (cdr y)))))

(define (MEMBER x y)
    (cond ((null? y) #f)
	  ((equal? x (car y)) y)
	  (else (member x (cdr y)))))

(define (ASSQ x y)
    (if y
	(let ((cary (car y)))
	     (if (eq? x (car cary)) cary (assq x (cdr y))))
	#f))

(define (ASSV x y)
    (if y
	(let ((cary (car y)))
	     (if (eqv? x (car cary)) cary (assv x (cdr y))))
	#f))

(define (ASSOC x y)
    (if y
	(let ((cary (car y)))
	     (if (equal? x (car cary)) cary (assoc x (cdr y))))
	#f))

(define (REMQ x y)
    (cond ((null? y) y)
	  ((eq? x (car y)) (remq x (cdr y)))
	  (else (cons (car y) (remq x (cdr y))))))

(define (REMV x y)
    (cond ((null? y) y)
	  ((eqv? x (car y)) (remv x (cdr y)))
	  (else (cons (car y) (remv x (cdr y))))))

(define (REMOVE x y)
    (cond ((null? y) y)
	  ((equal? x (car y)) (remove x (cdr y)))
	  (else (cons (car y) (remove x (cdr y))))))

(define (REMQ! x y)
    (cond ((null? y) y)
	  ((eq? x (car y)) (remq! x (cdr y)))
	  (else (let loop ((prev y))
		     (cond ((null? (cdr prev))
			    y)
			   ((eq? (cadr prev) x)
			    (set-cdr! prev (cddr prev))
			    (loop prev))
			   (else (loop (cdr prev))))))))

(define (REMV! x y)
    (cond ((null? y) y)
	  ((eqv? x (car y)) (remv! x (cdr y)))
	  (else (let loop ((prev y))
		     (cond ((null? (cdr prev))
			    y)
			   ((eqv? (cadr prev) x)
			    (set-cdr! prev (cddr prev))
			    (loop prev))
			   (else (loop (cdr prev))))))))

(define (REMOVE! x y)
    (cond ((null? y) y)
	  ((equal? x (car y)) (remove! x (cdr y)))
	  (else (let loop ((prev y))
		     (cond ((null? (cdr prev))
			    y)
			   ((equal? (cadr prev) x)
			    (set-cdr! prev (cddr prev))
			    (loop prev))
			   (else (loop (cdr prev))))))))
