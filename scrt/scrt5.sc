;;;  SCHEME->C Runtime Library

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

(module scrt5
    (top-level
    	STDIN-PORT STDOUT-PORT STDERR-PORT DEBUG-OUTPUT-PORT TRACE-OUTPUT-PORT
	CALL-WITH-INPUT-FILE CALL-WITH-OUTPUT-FILE INPUT-PORT? OUTPUT-PORT?
	CURRENT-INPUT-PORT CURRENT-OUTPUT-PORT
	WITH-INPUT-FROM-FILE WITH-OUTPUT-TO-FILE
	OPEN-INPUT-FILE OPEN-OUTPUT-FILE OPEN-FILE 
	MAKE-FILE-PORT OPEN-INPUT-STRING OPEN-OUTPUT-STRING
	CLOSE-INPUT-PORT CLOSE-OUTPUT-PORT CLOSE-PORT))

(include "repdef.sc")

;;; 6.10.  Input and Output
;;;
;;; All I/O is done to and from "ports", where a port is an object that can
;;; read and write characters.  A port is represented as  (PORT . proc)
;;; where the symbol "PORT" identifies the object, and the procedure "proc"
;;; implements the operations.  This is but one example where closures provide
;;; an elegant, simple solution.  Needless to say, if a more general object
;;; based system is later implemented, the I/O system should be rewritten
;;; using it.
;;;
;;; The function MAKE-STRING-PORT makes a port which allows expressions to be
;;; read from a string, and MAKE-FILE-PORT makes a port which allows
;;; expressions to be read from a file.  Each time an I/O operation is done,
;;; the port's procedure is invoked.  It is called with a symbol which is the
;;; method needed and a procedure which performs that method is returned.  That
;;; procedure is then called with the appropriate arguments to perform the
;;; operation and return the result.  If the desired method does not exist,
;;; then #F should be returned.  The required methods for all ports are:
;;;
;;;  METHOD     ARGUMENTS         OPERATION & RESULT
;;;
;;; CLOSE-PORT    -		close port for all I/O, result is unspecified
;;;
;;; If the port supports input, then it must provide the following methods:
;;;
;;; READ-CHAR	  -		next input character or EOF-OBJECT
;;; PEEK-CHAR     -		"peek" at the next character, or EOF-OBJECT
;;; CHAR-READY?	  -		boolean indicating that an input character is
;;;				available.  N.B. if platform does not support
;;;				this for a port, then #T is always returned.
;;;
;;; Ports which support output must provide the following methods:
;;;
;;; WRITE-CHAR    character     output the character, result is unspecified
;;; WRITE-TOKEN	  token		output the token (character, string, or list
;;;				of characters)
;;; WRITE-WIDTH   -		number of characters per line for pretty print
;;; WRITE-WIDTH!  number	sets the number of characters per line for
;;;				pretty print, result is unspecified
;;; WRITE-COUNT	  -		number of characters on current line
;;; WRITE-FLUSH   -		flush buffers, result is unspecified
;;; WRITE-CIRCLE  -		boolean controlling circular printing
;;; WRITE-CIRCLE! #F/#T		#F for normal printing, #T to detect circles
;;; WRITE-LEVEL   -		depth for printing lists and arrays
;;; WRITE-LEVEL!  number/#F	sets depth for printing lists and arrays
;;; WRITE-LENGTH  -		length for printing lists and arrays
;;; WRITE-LENGTH! number/#f	sets length for printing lists and arrays
;;; WRITE-PRETTY  -		selects normal or pretty-print
;;; WRITE-PRETTY! #F/#T		#F for normal printing, #T for pretty-printing
;;;
;;; Some ports support the following additional methods:
;;;
;;; ECHO	  -             port that I/O is echoed to (or #f)
;;; ECHO!	  port/#F	sets I/O echo port
;;; FILE-PORT	  -		system dependent FILE for the port

;;; 6.10.1  Ports

(define (CALL-WITH-INPUT-FILE filename proc)
    (if (not (procedure? proc))
	(error 'CALL-WITH-INPUT-FILE "Argument is not a PROCEDURE: ~s" proc))
    (let* ((port (open-file filename "r"))
	   (result (proc port)))
	  (close-port port)
	  result))

(define (CALL-WITH-OUTPUT-FILE filename proc)
    (if (not (procedure? proc))
        (error 'CALL-WITH-OUTPUT-FILE "Argument is not a PROCEDURE: ~s" proc))
    (let* ((port (open-file filename "w"))
	   (result (proc port)))
	  (close-port port)
	  result))

(define (INPUT-PORT? x)
    (if (and (pair? x) (eq? (car x) 'port) (procedure? (cdr x))
	     ((cdr x) 'read-char))
	#t
	#f))

(define (OUTPUT-PORT? x)
    (if (and (pair? x) (eq? (car x) 'port) (procedure? (cdr x))
	     ((cdr x) 'write-char))
	#t
	#f))

;;; The current input and output ports are kept in the following two cells.
;;; Initially the input port uses stdin and the output port uses stdout.

(define CURRENT-INPUT-PORT-VALUE #f)

(define CURRENT-OUTPUT-PORT-VALUE #f)

(define STDERR-PORT #f)

(case (scheme-mode)
    ((embedded)
     (set! current-input-port-value (open-input-string ""))
     (set! current-output-port-value (open-output-string))
     (set! stderr-port (let ((port (open-output-string)))
			    (set-write-circle! #t port)
			    (set-write-level! 40 port)
			    (set-write-length! 40 port)
			    port)))
    ((stand-alone interactive)
     (set! current-input-port-value (make-file-port stdin "r"))
     (set! current-output-port-value (make-file-port stdout "w"))
     (set! stderr-port (let ((port (make-file-port stderr "w")))
			    (set-write-circle! #t port)
                            (set-write-level! 40 port)
                            (set-write-length! 40 port)
                            port))))

(define STDIN-PORT current-input-port-value)

(define STDOUT-PORT current-output-port-value)

;;; Interactive users may wish to set DEBUG-OUTPUT-PORT to STDOUT-PORT rather
;;; than the default STDERR-PORT for improved performance.

(define DEBUG-OUTPUT-PORT stderr-port)

;;; Interactive users may wish to set TRACE-OUTPUT-PORT to something other than
;;; the default STDOUT-PORT.

(define TRACE-OUTPUT-PORT stdout-port)

(define (CURRENT-INPUT-PORT) current-input-port-value)

(define (CURRENT-OUTPUT-PORT) current-output-port-value)

(define (WITH-INPUT-FROM-FILE filename proc)
    (let ((old-input-port (current-input-port))
	  (result '()))
	 (if (not (procedure? proc))
	     (error 'WITH-INPUT-FROM-FILE "Argument is not a PROCEDURE: ~s"
		    proc))
	 (set! current-input-port-value (open-file filename "r"))
	 (set! result (proc))
	 (close-port current-input-port-value)
	 (set! current-input-port-value old-input-port)
	 result))

(define (WITH-OUTPUT-TO-FILE filename proc)
    (let ((old-output-port (current-output-port))
	  (result '()))
	 (if (not (procedure? proc))
	     (error 'WITH-OUTPUT-TO-FILE "Argument is not a PROCEDURE: ~s"
		    proc))
	 (set! current-output-port-value (open-file filename "w"))
	 (set! result (proc))
	 (close-port current-output-port-value)
	 (set! current-output-port-value old-output-port)
	 result))

(define (OPEN-INPUT-FILE filename) (open-file filename "r"))

(define (OPEN-OUTPUT-FILE filename) (open-file filename "w"))

;;; The following function does the actual file opening.  It uses the OS
;;; independent fopen implemented in cio.c.  The open types supported are
;;; "r" and "w" as well as anything that is OS dependent.  The filename and
;;; type are expected to be strings and the return value of the function is
;;; a port.

(define (OPEN-FILE filename type)
    (let ((file '()))
	 (if (not (string? filename))
	     (error 'FILENAME->FILE "Argument is not a STRING: ~s" filename))
	 (set! file (fopen filename type))
	 (if (string? file)
	     (error 'FILENAME->FILE (string-append file ": ~s") filename))
	 (let ((port (make-file-port file type)))
	      (when-unreferenced port close-port)
	      port)))

;;; The following function is used to make a port which is does I/O to a UNIX
;;; file or process.  It takes a file-number returned by fopen and the type
;;; string that was used to initially fopen the file.

(define (MAKE-FILE-PORT file type)
    (letrec ((charcnt 0)
	     (width 80)
	     (circle #f)
	     (level #f)
	     (wlength #f)
	     (pretty #f)
	     (echo-port #f)
	     (nextchar #f)

	     (write-char (lambda (char)
				 (if (char<? char #\space)
				     (cond ((memq char
						  '(#\linefeed #\return
						    #\newline))
					    (set! charcnt 0))
					   ((eq? char #\tab)
					    (set! charcnt
						  (+ charcnt
						     (- 8
							(remainder charcnt
							           8)))))
					   (else (set! charcnt (+ charcnt 1))))
				     (set! charcnt (+ charcnt 1)))
				 (let ((status (fputc char file)))
				      (if status
					  (error 'MAKE-FILE-PORT status)))))

	     (write-token (lambda (token)
				  (cond ((char? token)
					 (write-char token))
					((or (pair? token) (null? token))
					 (for-each write-char token))
					(else
					 (let ((len (string-length token)))
					      (do ((i 0 (+ i 1)))
						  ((= i len))
						  (write-char
						      (string-ref
							  token i))))))))

	     (read-char (lambda ()
				(cond (nextchar
				       (let ((c nextchar))
					    (set! nextchar #f)
					    c))
				      (else
				       (if (and (not (eq? system-file-mask 0))
						(not (charready file)))
					   (wait-system-file (fileno file)))
				       (let ((char (fgetc file)))
					    (if (string? char)
						(error 'MAKE-FILE-PORT char)
						char))))))

	     (peek-char (lambda ()
				(if nextchar
				    nextchar
				    (set! nextchar (read-char)))))

	     (read-char-echo (lambda ()
				     (let ((char (read-char)))
					  (if (not (eof-object? char))
					      (((cdr echo-port) 'write-char)
					       char))
					  char)))

	     (char-ready? (lambda () (or nextchar (charready file))))

	     (close-port (lambda ()
				 (fflush file)
				 (fclose file)))

	     (write-char-echo (lambda (char)
				      (write-char char)
				      (((cdr echo-port) 'write-char) char)))

	     (write-token-echo (lambda (token)
				       (write-token token)
				       (((cdr echo-port) 'write-token) token)))

	     (write-count (lambda () charcnt))

	     (write-width (lambda () width))

	     (write-width! (lambda (w) (set! width w)))

	     (write-flush (lambda () (fflush file)))

	     (write-circle (lambda () circle))

	     (write-circle! (lambda (c) (set! circle c)))

	     (write-level (lambda () level))

	     (write-level! (lambda (l) (set! level l)))

	     (write-length (lambda () wlength))

	     (write-length! (lambda (l) (set! wlength l)))

	     (write-pretty (lambda () pretty))

	     (write-pretty! (lambda (p) (set! pretty p)))

	     (echo (lambda () echo-port))

	     (echo! (lambda (p) (set! echo-port p)))

	     (file-port (lambda () file)))

	 (cond ((equal? type "r")
		(set! write-char-echo #f)
		(set! write-char #f))
	       ((equal? type "w")
		(set! read-char-echo #f)
		(set! read-char #f)))	     
	 (cons 'port
	       (lambda (method)
		       (case method
		             ((close-port)     close-port)
			     ((read-char)      (if echo-port
						   read-char-echo
						   read-char))
			     ((peek-char)      peek-char)
			     ((char-ready?)    char-ready?)
			     ((write-char)     (if echo-port
						   write-char-echo
						   write-char))
			     ((write-token)    (if echo-port
						   write-token-echo
						   write-token))
			     ((write-width)    write-width)
			     ((write-width!)   write-width!)
			     ((write-count)    write-count)
			     ((write-flush)    write-flush)
			     ((write-circle)   write-circle)
			     ((write-circle!)  write-circle!)
			     ((write-level)    write-level)
			     ((write-level!)   write-level!)
			     ((write-length)   write-length)
			     ((write-length!)  write-length!)
			     ((write-pretty)   write-pretty)
			     ((write-pretty!)  write-pretty!)
			     ((echo) 	       echo)
			     ((echo!)	       echo!)
			     ((file-port)      file-port)
			     (else #f))))))

;;; The following function turns a string into an input port and thus allows
;;; Scheme expressions to be read from strings.  It is as defined in Chez
;;; Scheme.
    
(define (OPEN-INPUT-STRING string)
    (letrec ((nextchar 0)
	     (strlen   (string-length string))

	     (read-char (lambda ()
				(if (= nextchar strlen)
				    $_eof-object
				    (let ((char
					       (string-ref string nextchar)))
					 (set! nextchar (+ 1 nextchar))
					 char))))
	     
	     (peek-char (lambda () (if (= nextchar strlen)
				       $_eof-object
				       (string-ref string nextchar))))
	     (true (lambda () #t)))
	    
	    (cons 'port
		  (lambda (method)
			  (case method
				((read-char)   read-char)
				((peek-char)   peek-char)
				((char-ready?) true)
				((close-port)  true)
				(else #f))))))

;;; The following function is used to make a port which does I/O to a string.
;;; It is as defined in Chez Scheme.

(define (OPEN-OUTPUT-STRING)
    (letrec ((chars '())
	     (width 80)
	     (circle #t)
	     (level #f)
	     (wlength #f)
	     (pretty #f)

	     (write-token (lambda (token)
				  (cond ((char? token)
					 (set! chars (cons token chars)))
					((or (pair? token) (null? token))
					 (set! chars (append (reverse token)
							     chars)))
					(else
					 (write-token (string->list token))))))

	     (get-output-string
		 (lambda ()
			 (let* ((cl chars)
				(maxstring ((lap () (C_FIXED MAXSTRINGSIZE))))
				(len (length cl))
			        (overflow (> len maxstring)))
			       (set! chars '())
			       (do ((s (make-string (min len maxstring)))
				    (i (- (min len maxstring) 1) (- i 1))
				    (end (if overflow 2 -1))
				    (cl cl (cdr cl)))
				   ((eq? i end)
				    (when overflow
					  (string-set! s 0 #\.)
				          (string-set! s 1 #\.)
				          (string-set! s 2 #\.))
				    s)
				   (string-set! s i (car cl))))))
	     
	     (write-char (lambda (char) (set! chars (cons char chars))))
	     
	     (write-width (lambda () width))

	     (write-width! (lambda (w) (set! width w)))
	     
	     (write-count (lambda ()
				  (let ((count 0))
				       (let loop ((cl chars))
					    (cond ((null? cl))
						  ((memq (car cl)
							 '(#\linefeed #\return
							   #\newline)))
						  ((eq? (car cl) #\tab)
						   (loop (cdr cl))
						   (set! count
							 (+ count
							    (- 8
							       (remainder count
								   8)))))
						  (else (loop (cdr cl))
							(set! count
							      (+ 1 count)))))
				       count)))

	     (write-circle (lambda () circle))

	     (write-circle! (lambda (c) (set! circle c)))

	     (write-level (lambda () level))

	     (write-level! (lambda (l) (set! level l)))

	     (write-length (lambda () wlength))

	     (write-length! (lambda (l) (set! wlength l)))

	     (write-pretty (lambda () pretty))

	     (write-pretty! (lambda (p) (set! pretty p))))
	    
	    (cons 'port
		  (lambda (method)
			  (case method
				((write-token)       write-token)
				((write-char)        write-char)
				((write-width)       write-width)
				((write-width!)      write-width!)
				((write-count)       write-count)
				((write-flush)	     (lambda () #t))
			        ((write-circle)	     write-circle)
			        ((write-circle!)     write-circle!)
			        ((write-level)       write-level)
			        ((write-level!)      write-level!)
			        ((write-length)      write-length)
			        ((write-length!)     write-length!)
			        ((write-pretty)      write-pretty)
			        ((write-pretty!)     write-pretty!)
				((get-output-string) get-output-string)
				(else #f))))))

(define (CLOSE-INPUT-PORT port) (close-port port))

(define (CLOSE-OUTPUT-PORT port) (close-port port))

(define (CLOSE-PORT port)
    (if (and (not (input-port? port)) (not (output-port? port)))
	(error 'CLOSE-PORT "Argument is not a PORT: ~s" port))
    (when-unreferenced port #f)
    (((cdr port) 'close-port)))
