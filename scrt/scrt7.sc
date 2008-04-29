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


(module scrt7 (top-level))

(include "repdef.sc")

;;; 7.1.1.  Lexical Structure

;;; The following global values define tokens used to denote special symbols
;;; which are returned by TOKEN.  They must be computed at run-time as they
;;; cannot use READCONSTANT.

(define TOKEN-LEFT-PAREN (cons 'left-paren '()))

(define TOKEN-RIGHT-PAREN (cons 'right-paren '()))

(define TOKEN-QUOTE (cons 'quote '()))

(define TOKEN-QUASIQUOTE (cons 'quasiquote '()))

(define TOKEN-UNQUOTE-SPLICING (cons 'unquote-splicing '()))

(define TOKEN-UNQUOTE (cons 'unquote '()))

(define TOKEN-PERIOD (cons 'period '()))

(define TOKEN-VECTOR (cons 'vector '()))

(define TOKEN-RECORD (cons '%record '()))

;;; In order to read characters faster from the current input port, the
;;; methods are cached here on entry to this module by READ-DATUM.

(define PEEK-CHAR-PORT '())		;;; Method to inspect a char

(define READ-CHAR-PORT '())		;;; Method to read a char

(define READ-DATUM-PORT-PROC '())	;;; Procedure representing the port

(define (NEXT-CHAR)
    (let ((char (read-char-port)))
	 (if (eof-object? char)
	     (error 'READ "Unexpected end-of-file")
	     char)))

(define-in-line (CHAR-WHITESPACE? char)
    ((lap (char)
	  (BOOLEAN (OR (EQ char (C_CHAR "040"))
		       (AND (GTE char (C_CHAR "011"))
			    (LTE char (C_CHAR "015")))))) char))

(define-in-line (CHAR->INTEGER c) ((lap (c) (C_FIXED (CHAR_C c))) c))

(define-in-line (SPECIAL-INITIAL? char)
    (memq char '(#\! #\$ #\% #\& #\* #\/ #\: #\< #\= #\> #\? #\~ #\_ #\^)))

(define-in-line (SPECIAL-SUBSEQUENT? char) (memq char '(#\. #\+ #\-)))

(define (TOKEN)
    (let ((char (next-char)))
	 (cond ((or (char-whitespace? char) (comment? char))
		(token))
	       ((char-alphabetic? char)
		(identifier (char-upcase char)))
	       ((char=? char #\")
		(read-string))
	       ((char=? char #\()
		token-left-paren)
	       ((char=? char #\))
		token-right-paren)
	       ((char=? char #\')
		token-quote)
	       ((char=? char #\`)
		token-quasiquote)
	       ((char=? char #\,)
		(if (char=? (peek-char-port) #\@)
		    (begin (next-char)
		           token-unquote-splicing)
		    token-unquote))
	       ((char=? char #\.)
		(cond ((char-numeric? (peek-char-port)) (number char 10 1))
		      ((char-whitespace? (peek-char-port)) token-period)
		      (else (identifier char))))
	       ((char=? char #\#)
		(set! char (char-upcase (next-char)))
		(cond ((char=? char #\()
		       token-vector)
		      ((char=? char #\\ )
		       (character))
		      ((char=? char #\T)
		       #t)
		      ((char=? char #\F)
		       #f)
		      ((char=? char #\B)
		       (number (next-char) 2 1))
		      ((char=? char #\O)
		       (number (next-char) 8 1))
		      ((char=? char #\D)
		       (number (next-char) 10 1))
		      ((char=? char #\X)
		       (number (next-char) 16 1))
		      ((and %record-prefix-char
			    (char=? char %record-prefix-char))
		       token-record)
		      (else (error 'READ "Invalid # option: ~a" char))))
	       ((special-initial? char)
		(identifier char))
	       ((char=? char #\\ )
		(identifier (next-char)))
	       ((or (eq? char '#\+) (eq? char #\-))
		(let ((next (peek-char-port)))
		     (if (or (char-numeric? next) (memq next '(#\# #\.)))
			 (number char 0 0)
			 (identifier char))))
	       (else (number char 0 0)))))
	       				   		
(define (DELIMITER? char)
    (or (eof-object? char)
	(char-whitespace? char)
	(memq char '(#\( #\) #\" #\;))))

(define (COMMENT? char)
    (if (char=? char #\;)
	(do () ((char=? (next-char) #\newline) #t))
	#f))

;;; When a " is detected, this function is called to read the rest of the
;;; string.

(define (READ-STRING)
    (do ((cl '() (cons char cl))
	 (char (next-char) (next-char)))
	((char=? char #\")
	 (list->string (reverse cl)))
	(if (char=? #\\ char) (set! char (next-char)))))

;;; When a #\ is detected, this function is called to read the rest of the
;;; character constant.

(define (CHARACTER)
    (let ((char (next-char)))
	 (if (and (char-alphabetic? char)
		  (not (delimiter? (peek-char-port))))
	     (let ((id (identifier (char-upcase char))))
		  (case id 
			((tab)      (integer->char #o11))
			((newline)  (integer->char #o12))
			((linefeed) (integer->char #o12))
			((formfeed) (integer->char #o14))
			((return)   (integer->char #o15))
			((space)    (integer->char #o40))
			(else (error 'READ "Unrecognized CHARACTER NAME: ~s"
				     id))))
	     char)))

;;; When the start of an identifier is detected, the following function is
;;; called to finish reading it.  It is table driven from the IDTABLE which
;;; contains an entry for each possible character.  The entries are:
;;;
;;;	#f	character is not part of the identifier.
;;;	newchar	character is part of the identifier and "newchar" is the
;;;		 upshifted value.
;;;	#t	character is \ so the following character is taken as is.

(define IDTABLE
    (let ((tab (make-vector 256 #f)))
	 (do ((i (char->integer #\A) (+ i 1))
	      (last (char->integer #\Z)))
	     ((> i last))
	     (vector-set! tab i (integer->char i))
	     (vector-set! tab (+ i 32) (integer->char i)))
	 (for-each
	     (lambda (c)
		     (vector-set! tab (char->integer c) c))
	     '(#\0 #\1 #\2 #\3 #\4 #\5 #\6 #\7 #\8 #\9
					; Numeric characters.
	       #\! #\$ #\% #\& #\* #\/ #\: #\< #\= #\> #\? #\~ #\_ #\^
	       				; Special initial.
	       #\. #\+ #\-))		; Special subsequent.
	 (vector-set! tab (char->integer #\\) #t)
	 tab))

(define (IDENTIFIER firstchar)
    (let loop ((cl (list firstchar)))
	 (let* ((pc (peek-char-port))
		(tc (and (char? pc)
			 (vector-ref idtable (char->integer pc)))))
	       (cond ((char? tc)
		      (read-char-port)
		      (loop (cons tc cl)))
		     (tc
		      (read-char-port)
		      (loop (cons (next-char) cl)))
		     (else
		      (string->symbol (list->string (reverse cl))))))))

;;; Integer bounds expressed a floating point values.

(define MAXINTF ((lap () (DOUBLE_TSCP MAXTSCPINTF))))
(define MININTF ((lap () (DOUBLE_TSCP MINTSCPINTF))))

;;; When the start of a number is detected, the following function is called
;;; to finish reading it.

(define (NUMBER firstchar base sign)
    (if (zero? sign)
	(cond ((char=? firstchar #\+)
	       (set! sign 1)
	       (set! firstchar (next-char)))
	      ((char=? firstchar #\-)
	       (set! sign -1)
	       (set! firstchar (next-char)))
	      (else (set! sign 1))))
    (if (zero? base)
	(cond ((char=? firstchar #\#)
	       (let ((char (next-char)))
		    (case char
			  ((#\B #\b) (set! base 2))
			  ((#\O #\o) (set! base 8))
			  ((#\D #\d) (set! base 10))
			  ((#\X #\x) (set! base 16))
			  (else (error 'READ "Invalid number base: ~a" char))))
	       (set! firstchar (next-char)))
	      (else (set! base 10))))
    (do ((cl (list firstchar) (cons char cl))
	 (char (peek-char-port) (peek-char-port))
	 (bv (case firstchar ((#\0) 0) ((#\1) 1) (else -1))
	     (case char ((#\0) (* bv 2)) (( #\1) (+ (* bv 2) 1)) (else -1)))
	 (iv (accv 0 base firstchar) (accv iv base char))
	 (maxchar (char->integer firstchar) (max maxchar (char->integer char)))
	 (fpt (eq? firstchar #\.)
	      (or fpt
		  (eq? char #\.)
		  (and (not (= base 16)) (or (eq? char #\e) (eq? char #\E))))))
	((delimiter? char)
	 (if (and (>= iv 0) (not fpt))
	     (let ((siv (* sign iv)))
		  (if (or (fixed? siv) (> siv maxintf) (< siv minintf))
		      siv
		      (float->fixed siv)))
	     (let ((cl (list->string (reverse cl))))
		  (if (not fpt)
		      (error 'READ "Illegal digit(s) in integer: ~a" cl))
		  (if (not (eq? base 10))
		      (error 'READ
			     "Floating point numbers must be base 10: ~a" cl))
		  (let ((value (readnumber cl 0)))
		       (if value
			   (if (eq? sign -1)
			       (- value)
			       value)
			   (error 'READ "Illegal floating point number: ~a"
				  cl))))))
	(next-char)))

(define MAX-ACCV-VALUE (quotient (- (float->fixed maxintf) 15) 16))

(define (ACCV value base char)
    (let ((cv (assq char '((#\0 0)  (#\1 1)  (#\2 2)  (#\3 3)
			   (#\4 4)  (#\5 5)  (#\6 6)  (#\7 7)
			   (#\8 8)  (#\9 9)  (#\a 10) (#\b 11)
			   (#\c 12) (#\d 13) (#\e 14) (#\f 15)
			   (#\A 10) (#\B 11) (#\C 12) (#\D 13)
			   (#\E 14) (#\F 15)))))
	 (cond ((or (eq? value -1) (not cv) (>= (cadr cv) base)) -1)
	       ((and (fixed? value) (> value max-accv-value))
		(accv (fixed->float value) base char))
	       (else (+ (* base value) (cadr cv))))))

;;; 7.1.2. External Representations

(define (READ-DATUM port-proc)
    (let ((save-peek-char-port peek-char-port)
	  (save-read-char-port read-char-port)
	  (save-read-datum-port-proc read-datum-port-proc))
	 (set! peek-char-port (port-proc 'peek-char))
	 (set! read-char-port (port-proc 'read-char))
	 (set! read-datum-port-proc port-proc)
	 (let ((result (let loop ((char (peek-char-port)))
			    (cond ((eof-object? char)
				   (read-char-port))
				  ((char-whitespace? char)
				   (read-char-port)
				   (loop (peek-char-port)))
				  ((char=? char #\;)
				   (do () ((char=? (next-char) #\newline)))
				   (loop (peek-char-port)))
				  (else (datum (token)))))))
	      (set! read-datum-port-proc save-read-datum-port-proc)
	      (set! peek-char-port save-peek-char-port)
	      (set! read-char-port save-read-char-port)
	      result)))

(define (DATUM current-token)
    (cond ((eq? current-token token-left-paren)
	   (datum-list (token)))
	  ((eq? current-token token-vector)
	   (list->vector (datum-vector (token))))
	  ((eq? current-token token-quote)
	   (list 'quote (datum (token))))
	  ((eq? current-token token-quasiquote)
	   (list 'quasiquote (datum (token))))
	  ((eq? current-token token-unquote)
	   (list 'unquote (datum (token))))
	  ((eq? current-token token-unquote-splicing)
	   (list 'unquote-splicing (datum (token))))
	  ((not (pair? current-token))
	   current-token)
	  ((eq? current-token token-record)
	   (%record-read (cons 'port read-datum-port-proc)))
	  (else (error 'READ "Poorly formed DATUM: ~s" current-token))))

(define (DATUM-LIST current-token)
    (cond ((eq? current-token token-right-paren)
	   '())
	  ((eq? current-token token-period)
	   (let ((result (datum (token))))
		(if (eq? (token) token-right-paren)
		    result
		    (error 'READ "Poorly formed LIST"))))
	  (else
	   (cons (datum current-token) (datum-list (token))))))

(define (DATUM-VECTOR current-token)
    (cond ((eq? current-token token-right-paren)
           '())
          (else
           (cons (datum current-token)
		 (datum-vector (token))))))

;;; Method for printing a token, the write-length, and the write width
;;; are cached here.

(define WRITE-TOKEN-PORT '())

(define WRITE-LENGTH-PORT #f)

(define WRITE-WIDTH-PORT #f)

(define WRITE/DISPLAY-PORT-PROC #f)

(define (WRITE/DISPLAY obj readable port-proc)
    (let ((save-write-token-port write-token-port)
	  (save-write-length-port write-length-port)
	  (save-write-width-port write-width-port)
	  (save-write/display-port-proc write/display-port-proc))
	 (set! write-token-port (port-proc 'write-token))
	 (set! write-length-port ((port-proc 'write-length)))
	 (set! write-width-port ((port-proc 'write-width)))
	 (set! write/display-port-proc port-proc)
	 (let ((result (write/display2 obj readable
			   (if ((port-proc 'write-pretty)) 0 #f)
			   ((port-proc 'write-level))
			   write-length-port
			   (if ((port-proc 'write-circle)) '() #f))))
	      (set! write-token-port save-write-token-port)
	      (set! write-length-port save-write-length-port)
	      (set! write-width-port save-write-width-port)
	      (set! write/display-port-proc save-write/display-port-proc)
	      result)))

(define (WRITE/DISPLAY2 obj readable indent wlevel wlength circle)
    
    (define (WRITE/DISPLAY-SIZE obj)
	    (let ((save-write-token-port write-token-port)
		  (size 0))
		 (define (COUNT-CHAR x)
			 (set! size
			       (+ (or (and (string? x) (string-length x))
				      (and (pair? x) (length x))
				      1)
				  size)))
		 
		 (set! write-token-port count-char)
		 (write/display2 obj readable #f (or wlevel 50) (or wlength 50)
		     circle)
		 (set! write-token-port save-write-token-port)
		 size))
    
    (cond ((and (eq? wlevel 0) (or (pair? obj) (vector? obj) (%record? obj)))
	   (write-token-port "#"))
	  ((and (not (eq? circle #f))
		(or (pair? obj) (vector? obj) (%record? obj))
		(memq obj circle))
	   (write-token-port "..."))
	  ((pair? obj)
	   (let ((qq (and (pair? (cdr obj)) (null? (cddr obj))
			  (assq (car obj)
				'((quote "'") (quasiquote "`")
				  (unquote ",") (unquote-splicing ",@"))))))
		(cond ((eq? write-length-port 0)
		       (write-token-port "(...)"))
		      ((and qq readable) 
		       (write-token-port (cadr qq))
		       (write/display2 (cadr obj) readable indent wlevel
			   wlength circle))
		      ((and indent
			    (<= (+ indent (write/display-size obj))
				write-width-port))
		       (write/display2 obj readable #f wlevel wlength circle))
		      (else
			   (write-token-port "(")
			   (write/display2 (car obj) readable
			       (and indent (+ indent 1))
			       (and wlevel (- wlevel 1))
			       (and write-length-port (- write-length-port 1))
			       (and (not (eq? circle #f)) (cons obj circle)))
			   (write/display-list (cdr obj) readable
			       (and indent (+ indent 1))
			       (and wlevel (- wlevel 1))
			       (and write-length-port (- write-length-port 1))
			       (and (not (eq? circle #f))
				    (cons obj circle)))))))
	  ((symbol? obj)
	   (if readable
	       (if (memq obj '(+ - ))
		   (write-token-port (symbol->string obj))
		   (write-token-port (readable-symbol obj)))
	       (write-token-port (symbol->string obj))))
	  ((fixed? obj)
	   (write-token-port (fixed->clist obj)))
	  ((string? obj)
	   (write-token-port (if readable (readable-string obj) obj)))
	  ((char? obj)
	   (write-token-port (if readable (readable-char obj) obj)))
	  ((or (string? obj) (char? obj))
	   (write-token-port obj))
	  ((vector? obj)
	   (write-token-port "#")
	   (write/display2 (vector->list obj) readable
	       (and indent (+ indent 1)) wlevel wlength
	       (and (not (eq? circle #f)) (cons obj circle))))
	  ((float? obj)
	   (write-token-port (float->string obj)))
	  ((eq? obj #t)
	   (write-token-port "#T"))
	  ((eq? obj #f)
	   (write-token-port "#F"))
	  ((null? obj)
	   (write-token-port "()"))
	  ((eof-object? obj)
	   (write-token-port "#*END-OF-FILE*"))
	  ((eq? obj undefined)
	   (write-token-port "#*UNDEFINED*"))
	  ((procedure? obj)
	   (write-token-port "#*PROCEDURE*"))
	  ((%record? obj)
	   (let* ((method (%record-lookup-method obj
			      (if readable '%to-write '%to-display)))
		  (data (method obj (cons 'port write/display-port-proc)
				indent wlevel wlength circle)))
		 (if (pair? data)
		     (write/display2 (car data) readable
			 (and indent (+ indent 2)) wlevel wlength
			 (and (not (eq? circle #f)) (cons obj circle))))))
	  (else (write-token-port "#*??????*"))))

(define (WRITE/DISPLAY-LIST obj readable indent wlevel wlength circle)
    
    (define (PRINT x)
	    (if indent
		(begin (write-token-port #\newline)
		       (let loop ((i indent))
			    (unless (zero? i)
				    (write-token-port #\space)
				    (loop (- i 1))))
		       (write-token-port (substring x 1 (string-length x))))
		(write-token-port x)))
    
    (cond ((null? obj)
	   (write-token-port ")"))
	  ((eq? wlength 0)
	   (print " ...)"))
	  ((and (not (eq? circle #f)) (memq obj circle))
	   (print " ...)"))
	  ((not (pair? obj))
	   (print " . ")
	   (write/display2 obj readable indent wlevel wlength circle)
	   (write-token-port ")"))
	  (else
	   (print " ")
	   (write/display2 (car obj) readable indent wlevel wlength circle)
	   (write/display-list (cdr obj) readable indent wlevel
	       (and wlength (- wlength 1)) circle))))

(define (READABLE-CHAR obj)
    (if (and (char>? obj #\space) (char<=? obj #\~))
	(list->string (list #\# #\\ obj))
	(let ((spec (assoc obj '((#\tab      "#\\tab")
				 (#\newline  "#\\newline")
				 (#\linefeed "#\\linefeed")
				 (#\formfeed "#\\formfeed")
				 (#\return   "#\\return")
				 (#\space    "#\\space")))))
	     (if spec
		 (cadr spec)
		 "#\\???"))))

(define (READABLE-STRING obj) 
    (do ((cl '(#\") (cons (string-ref obj i) cl))
	 (len (string-length obj))
	 (i 0 (+ i 1)))
	((= len i) (reverse (cons #\" cl)))
	(if (and (or (eq? (string-ref obj i) #\\ )
		     (eq? (string-ref obj i) #\" )))
	    (set! cl (cons #\\ cl)))))

(define (READABLE-SYMBOL obj)
    (set! obj (symbol->string obj))
    (do ((cl '() (cons (string-ref obj i) cl))
	 (len (string-length obj))
	 (i 0 (+ 1 i)))
	((= i len) (reverse cl))
	(let ((c (string-ref obj i)))
	     (cond ((and (not (and (char-alphabetic? c) (char-upper-case? c)))
			 (not (special-initial? c))
			 (not (special-subsequent? c))
			 (not (char-numeric? c)))
		    (set! cl (cons #\\ cl)))
		   ((and (zero? i) (not (char-alphabetic? c))
			 (not (special-initial? c)))
		    (set! cl (cons #\\ cl)))))))

(define (FIXED->CLIST obj)
    (do ((cl '() (cons (integer->char (+ (char->integer #\0)
					 (abs (remainder number 10))))
		       cl))
	 (number obj (quotient number 10)))
	((and (zero? number) cl)
	 (if (< obj 0) (cons #\- cl) cl))))

(define (FLOAT->STRING obj)
    (let ((buffer (formatnumber obj 3 16)))
	 (let loop ((i (- (string-length buffer) 1)))
	      (cond ((< i 0) (string-append buffer "."))
		    ((memq (string-ref buffer i) '(#\. #\e)) buffer)
		    (else (loop (- i 1)))))))
