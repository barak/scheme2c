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

(module scrt6
    (top-level
	READ READ-CHAR PEEK-CHAR CHAR-READY? EOF-OBJECT?
	WRITE DISPLAY WRITE-CHAR NEWLINE FLUSH-BUFFER GET-OUTPUT-STRING
	WRITE-COUNT WRITE-WIDTH SET-WRITE-WIDTH!
	WRITE-CIRCLE SET-WRITE-CIRCLE! WRITE-LEVEL SET-WRITE-LEVEL!
	WRITE-LENGTH SET-WRITE-LENGTH! WRITE-PRETTY SET-WRITE-PRETTY!
	ECHO TRANSCRIPT-ON TRANSCRIPT-OFF PORT->STDIO-FILE FORMAT PP
	REMOVE-FILE RENAME-FILE
	DEFINE-SYSTEM-FILE-TASK WAIT-SYSTEM-FILE ENABLE-SYSTEM-FILE-TASKS))

(include "repdef.sc")

;;; 6.10.2. Input

;;; Verify that an optional input port was supplied, and return the procedure
;;; to acquire the port methods.  Flush stdout if working with stdin and it
;;; has pending operations.

(define PENDING-STDOUT #f)

(define (INPUT-PORT func pl)
    (let ((port (if pl
		    (let ((port (car pl)))
			 (if (not (input-port? port))
			     (error func "Argument is not an INPUT-PORT: ~s"
				    port)
			     port))
		    (current-input-port))))
	 (if (and (eq? port stdin-port) pending-stdout)
	     (flush-buffer stdout-port))
	 (cdr port)))
    
(define (READ . port) (read-datum (input-port 'read port)))

(define (READ-CHAR . port) (((input-port 'read-char port) 'read-char)))

(define (PEEK-CHAR . port) (((input-port 'peek-char port) 'peek-char)))

(define (CHAR-READY? . port) (((input-port 'char-ready? port) 'char-ready?)))

(define (EOF-OBJECT? obj) (eq? obj $_eof-object))

;;; 6.10.3. Output

;;; Verify that an optional output port was supplied, and return the procedure
;;; to acquire the port methods.

(define (OUTPUT-PORT func pl)
    (let ((port (if pl
		    (let ((port (car pl)))
			 (if (not (output-port? port))
			     (error func "Argument is not an OUTPUT-PORT: ~s"
				    port)
			     port))
		    (current-output-port))))
	 (cond ((and (eq? port stderr-port) pending-stdout)
		(flush-buffer stdout-port))
	       ((eq? port stdout-port)
		(set! pending-stdout (not (eq? func 'flush-buffer)))))
	 (cdr port)))

(define (WRITE obj . port)
    (write/display obj #t (output-port 'write port)))

(define (DISPLAY obj . port)
    (write/display obj #f (output-port 'display port)))

(define (WRITE-CHAR char . port)
    (if (not (char? char))
	(error 'WRITE-CHAR "Argument is not a CHARACTER: ~s" char))
    (((output-port 'write-char port) 'write-char) char))

(define (NEWLINE . port)
    (((output-port 'newline port) 'write-char) #\newline))

(define (FLUSH-BUFFER . port)
    (((output-port 'flush-buffer port) 'write-flush)))
    
(define (GET-OUTPUT-STRING port)
    (let ((s (and (output-port? port) (((cdr port) 'get-output-string)))))
	 (if s
	     s
	     (error 'GET-OUTPUT-STRING
	       "Argument is not an OUTPUT STRING PORT: ~s" port))))

(define (WRITE-COUNT . port)
    (((output-port 'write-count port) 'write-count)))

(define (WRITE-WIDTH . port)
    (((output-port 'write-width port) 'write-width)))

(define (SET-WRITE-WIDTH! width . port)
    (if (or (not (fixed? width)) (<= width 0))
	(error 'SET-WRITE-WIDTH! "Argument is not a POSITIVE INTEGER: ~s"
	       width))
    (((output-port 'set-write-width! port) 'write-width!) width))

(define (WRITE-CIRCLE . port)
    (((output-port 'write-circle port) 'write-circle)))

(define (SET-WRITE-CIRCLE! flag . port)
    (if (not (boolean? flag))
	(error 'SET-WRITE-CIRCLE! "Argument is not a BOOLEAN: ~s"
	       flag))
    (((output-port 'set-write-circle! port) 'write-circle!) flag))

(define (WRITE-LEVEL . port)
    (((output-port 'write-level port) 'write-level)))

(define (SET-WRITE-LEVEL! level . port)
    (if (not (or (eq? level #f) (and (fixed? level) (>= level 0))))
	(error 'SET-WRITE-LEVEL!
	       "Argument is not #F or a NON-NEGATIVE INTEGER: ~s"
	       level))
    (((output-port 'set-write-level! port) 'write-level!) level))

(define (WRITE-LENGTH . port)
    (((output-port 'write-length port) 'write-length)))

(define (SET-WRITE-LENGTH! length . port)
    (if (not (or (eq? length #f) (and (fixed? length) (>= length 0))))
	(error 'SET-WRITE-LENGTH!
	       "Argument is not #F or a NON-NEGATIVE INTEGER: ~s"
	       length))
    (((output-port 'set-write-length! port) 'write-length!) length))

(define (WRITE-PRETTY . port)
    (((output-port 'write-pretty port) 'write-pretty)))

(define (SET-WRITE-PRETTY! flag . port)
    (if (not (boolean? flag))
	(error 'SET-WRITE-PRETTY! "Argument is not a BOOLEAN: ~s"
	       flag))
    (((output-port 'set-write-pretty! port) 'write-pretty!) flag))

;;; 6.10.4. User Interface

(define (ECHO port . argl)
    (if (and (not (input-port? port)) (not (output-port? port)))
	(error 'ECHO "Argument is not a port: ~s" port))
    (if (not ((cdr port) 'echo))
	(error 'ECHO "Port does not support ECHO: ~s" port))
    (if argl
	(let ((echo-port (car argl)))
	     (if (and echo-port (not (output-port? echo-port)))
		 (error 'ECHO "Argument is not an OUTPUT PORT or #F: ~s"
			echo-port))
	     (if (equal? port echo-port)
		 (error 'ECHO "PORT cannot be echoed to itself: ~s"
			echo-port))
	     (((cdr port) 'echo!) echo-port))
	(((cdr port) 'echo))))

(define (TRANSCRIPT-ON filename)
    (if (or (echo stdin-port) (echo stdout-port))
	(error 'TRANSCRIPT-ON "A TRANSCRIPT is already in progress"))
    (let ((port (open-file filename "w")))
	 (echo stdin-port port)
	 (echo stdout-port port)
	 'transcript-on))

(define (TRANSCRIPT-OFF)
    (let ((input-echo (echo stdin-port))
	  (output-echo (echo stdout-port)))
	 (if (not (equal? input-echo output-echo))
	    (error 'TRANSCRIPT-OFF "A TRANSCRIPT is not in progress"))
	 (echo stdin-port #f)
	 (echo stdout-port #f)
	 (close-port input-echo)))

;;; *.*.  Additional I/O

(define (PORT->STDIO-FILE port)
    (if (or (input-port? port) (output-port? port))
	(let ((method ((cdr port) 'file-port)))
	     (if method (method) #f))
	(error 'PORT->STDIO-FILE "Argument is not a port: ~s" port)))

(define (FORMAT form . args)
    (if (eq? form #t) (set! form (current-output-port)))
    (cond ((and (not form) args (string? (car args)))
	   (let ((port (open-output-string)))
		(formatx port (car args) (cdr args))
		(get-output-string port)))
	  ((string? form)
	   (let ((port (open-output-string)))
		(formatx port form args)
		(get-output-string port)))
	  ((and (output-port? form) args (string? (car args)))
	   (formatx form (car args) (cdr args)))
	  (else (error 'format "Illegal arguments: ~s" (cons form args)))))

(define (FORMATX port form args)
    (let ((arg (lambda ()
		       (if (null? args)
			   (error 'format "Too few ARGUMENTS for ~s" form))
		       (let ((result (car args)))
			    (set! args (cdr args))
			    result))))
	 (do ((i 0 (+ 1 i))
	      (tilde #f)
	      (c #f))
	     ((= i (string-length form))
	      (if tilde
		  (error 'format "FORM ends with a ~~:  ~s" form))
	      (if args
		  (error 'format "Too many ARGUMENTS for ~s" form)))
	     (set! c (string-ref form i))
	     (if tilde
		 (begin (set! tilde #f)
			(case c
			      ((#\~)     (display c port))
			      ((#\%)     (newline port))
			      ((#\s #\S) (write (arg) port))
			      ((#\a #\A) (display (arg) port))
			      ((#\c #\C) (write-char (arg) port))
			      (else (error 'format
					 "Unrecognized OUTPUT DESCRIPTOR in ~s"
					 form))))		   
		 (cond ((eq? c #\~) (set! tilde #t))
		       (else (write-char c port)))))))

;;; (PP form [ output ]) pretty-prints the form on the current output port,
;;; another port, or to a file depending upon the value of "output".

(define (PP form . output)
    (cond ((null? output)
	   (pp1 form (current-output-port)))
	  ((output-port? (car output))
	   (pp1 form (car output)))
	  (else
	       (let ((port (open-output-file (car output))))
		    (pp1 form port)
		    (close-output-port port))))
    #t)

(define (PP1 form port)
    (let* ((indent (write-count port))
	   (left (print-in form (- (write-width port) indent))))
	  (cond ((negative? left)
		 (cond ((pair? form)
			(display "(" port)
			(pp1 (car form) port)
			(do ((tab (make-string (+ indent 2) #\space))
			     (x (cdr form) (cdr x)))
			    ((not (pair? x))
			     (when x
				   (newline port)
				   (display tab port)
				   (display ". " port)
				   (pp1 x port))
			     (display ")" port))
			    (newline port)
			    (display tab port)
			    (pp1 (car x) port)))
		       ((vector? form)
			(display "#" port)
			(pp1 (vector->list form) port))
		       (else (write form port))))
		(else (write form port)))))		 

;;; PRINT-IN is used to decide if a form can be printed in line-length 
;;; characters.  If it can, then it will return:
;;;    line-length - # characters needed
;;; otherwise it will return a negative number.

(define (PRINT-IN form line-length)
    (cond ((negative? line-length) line-length)
	  ((pair? form)
	   (cond ((null? (cdr form))	;;; End of list
		  (- (print-in (car form) (- line-length 1)) 1))
		 ((pair? (cdr form))	;;; Continued list
		  (print-in (cdr form) (print-in (car form)
					   (- line-length 1))))
		 (else			;;; Dotted pair
		     (print-in (cdr form)
			 (print-in (car form) (- line-length 5))))))
	  ((vector? form)		;;; Vector is 1 longer than its list
	   (print-in (vector->list form) (- line-length 1)))
	  (else				;;; Print to a string port and measure
	      (let ((port (open-output-string)))
		   (write form port)
		   (- line-length (string-length (get-output-string port)))))))

(define (REMOVE-FILE filename)
    (if (not (string? filename))
	(error 'REMOVE-FILE "Argument is not a STRING: ~s" filename))
    (let ((status (removefile filename)))
	 (if status
	     (error 'REMOVE-FILE (string-append status ": ~s") filename))))

(define (RENAME-FILE old-filename new-filename)
    (if (not (string? old-filename))
	(error 'RENAME-FILE "Argument is not a STRING: ~s" old-filename))
    (if (not (string? new-filename))
	(error 'RENAME-FILE "Argument is not a STRING: ~s" new-filename))
    (let ((status (rename old-filename new-filename)))
	 (if status
	     (error 'RENAME-FILE (string-append status ": ~s ~s")
		    old-filename new-filename))))

;;; *.*.  System file tasks.

;;; When there are no characters available on a port, the I/O system executes
;;; the idle task associated with each system file and then dispatches system
;;; tasks or continues reading from the port when some read completes.  N.B:
;;;
;;;    (1) System file tasks never interrupt an executing Scheme program.
;;;    (2) System file tasking is disabled while in the debugger.
;;;    (3) All pending system file tasks are executed before continuing reads
;;;        from the port.
;;;    (4) Not all implementations support system file tasks.

(define SYSTEM-TASKING #t)

(define SYSTEM-FILE-MASK 0)

(define MAX-SYSTEM-FILE -1)

(define SYSTEM-FILE-TASK #f)

(define IDLE-TASKS (make-vector 32 #f))

(define FILE-TASKS (make-vector 32 #f))

;;; A task is associated with a system file number by the following procedure.
;;; A task is deleted by passing #F for each task procedure.

(define (DEFINE-SYSTEM-FILE-TASK file idle-task file-task)
    (vector-set! idle-tasks file idle-task)
    (vector-set! file-tasks file file-task)
    (set! system-file-mask 0)
    (set! max-system-file -1)
    (do ((i 0 (+ 1 i)))
	((= i 32))
	(when (vector-ref file-tasks i)
	      (set! max-system-file i)
	      (set! system-file-mask (bit-or system-file-mask (bit-lsh 1 i)))))
    file)

;;; A task waits for input on a file by calling the following procedure with
;;; the system file number, or #f.  When input is available on the file (<> #f)
;;; or all tasks have completed, the procedure returns.

(define (WAIT-SYSTEM-FILE file)
    (when (and (not (eq? system-file-mask 0)) system-tasking)
	  (if (eq? file 0) (flush-buffer stdout-port))
	  (do ((i 0 (+ i 1)))
	      ((> i max-system-file))
	      (if (vector-ref idle-tasks i)
		  (let ((save *reading-stdin*))
		       (set! *reading-stdin* #f)
		       ((vector-ref idle-tasks i))
		       (set! *reading-stdin* save))))
	  (let ((inputs (inputready (bit-or system-file-mask
					    (if file (bit-lsh 1 file) 0)))))
	       (if (zero? inputs)
		   (wait-system-file file)
		   (begin (do ((i 0 (+ i 1))
			       (mask 1 (bit-lsh mask 1)))
			      ((> i max-system-file))
			      (if (not (eq? 0 (bit-and mask inputs)))
				  (let ((task (vector-ref file-tasks i)))
				       (if task
					   (let ((save *reading-stdin*))
						(set! *reading-stdin* #f)
						(set! system-file-task i)
						(task)
						(set! *reading-stdin*
						      save))))))
			  (set! system-file-task #f)
			  (if (or (not file)
				  (zero? (bit-and inputs (bit-lsh 1 file))))
			      (wait-system-file file)))))))

;;; System file tasking is enabled and disabled by the following procedure.
;;; It returns the previous state of system file tasking.  When called with
;;; WAIT as its argument, it will not return until all system file tasks have
;;; completed.

(define (ENABLE-SYSTEM-FILE-TASKS enable)
    (let ((prev system-tasking))
	 (set! system-tasking (if enable #t #f))
	 (if (eq? enable 'wait) (wait-system-file #f))
	 prev))
