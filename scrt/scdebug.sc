;;; This module contains code for tracing and breakpointing functions using
;;; the SCHEME->C interpreter.  It also contains the code for an error
;;; handler which back traces the control stack.

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


(module scdebug
    (top-level
	TRACED-PROCS BPT-PROCS *ARGS* *BPT-ENV* *RESULT*
	RESET-BPT PROCEED DOTRACE TRACER DOUNTRACE DOBPT DOUNBPT BACKTRACE
	ERROR RESET-ERROR *ERROR-HANDLER* *ERROR-ENV* PROCEED?
	*DEBUG-ON-ERROR*))

(include "repdef.sc")

;;; Top level variables used by debugger.

(define TRACE-LEVEL 0)		;;; Nesting level for trace and breakpoints.

(define TRACED-PROCS '())	;;; A-list of traced procedures with elements:
				;;; (symbol original-proc debugged-proc)

(define BPT-PROCS '())		;;; A-list of bpted proceduress with elements:
				;;; (symbol original-proc debugged-proc)

;;; Arguments at the time of a breakpoint are in *ARGS*, and the result is in
;;; *RESULT* after the procedure is called.  A new result may be returned by
;;; continuing from the breakpoint with (PROCEED new-value).

(define *ARGS* '())

(define *RESULT* '())

(define *BPT-ENV* #f)		;;; List of environments associated with the
				;;; breakpoint in an embedded interpreter.

;;; Procedure tracing.

(install-expander
    'TRACE
     (lambda (x e)
	     (if (cdr x)
		 `(map (lambda (f) (dotrace f)) (quote ,(cdr x)))
		 '(map (lambda (x) (car x)) traced-procs))))

(define (DOTRACE name)
    (if (assoc name traced-procs) (dountrace name))
    (if (assoc name bpt-procs) (dounbpt name))
    (let ((proc (top-level-value name))
	  (trace-proc #f))
	 (if (not (procedure? proc))
	     (error 'TRACE "Argument is not a PROCEDURE name"))
	 (if (assoc name traced-procs)
	     (error 'TRACE "~s is already traced" name))
	 (set! trace-proc (tracer name proc))
	 (set! traced-procs (cons (list name proc trace-proc) traced-procs))
	 (set-top-level-value! name trace-proc))
    name)

(define (TRACER name proc)
    (lambda x
	    (format trace-output-port "~a~s~%"
		    (make-string (* 2 (min trace-level 15)) #\space)
		    (cons name x))
	    (set! trace-level (+ trace-level 1))
	    (let ((result (apply proc x)))
		 (set! trace-level (- trace-level 1))
		 (format trace-output-port "~a~a~s~%"
			 (make-string (* 2 (min trace-level 15)) #\space)
		 	 "==> " result)
		 result)))

(install-expander
    'UNTRACE
    (lambda (x e)
	    (if (null? (cdr x))
		(set! x (map (lambda (x) (car x)) traced-procs))
		(set! x (cdr x)))
	    `(map (lambda (f) (dountrace f)) (quote ,x))))

(define (DOUNTRACE name)
    (let ((name-proc-trace (assoc name traced-procs)))
	 (if (not name-proc-trace)
	     (error 'UNTRACE "~s is not traced" name))
	 (if (eq? (top-level-value name) (caddr name-proc-trace))
	     (set-top-level-value! name (cadr name-proc-trace)))
	 (set! traced-procs (remove name-proc-trace traced-procs)))
    name)

;;; Procedure breakpoints.

(install-expander
    'BPT
     (lambda (x e)
	     (case (length x)
		   ((1) '(map (lambda (x) (car x)) bpt-procs))
		   ((2) `(apply dobpt (quote ,(cdr x))))
		   ((3) (let ((func (e (caddr x) e)))
			     `(apply dobpt
				     (list (quote ,(cadr x)) (quote ,func)))))
		   (else (error 'BPT "Illegal arguments")))))

(define (DOBPT name . condition)
    (if (assoc name bpt-procs) (dounbpt name))
    (let ((proc (top-level-value name))
	  (bpt-proc #f))
	 (if (not (procedure? proc))
	     (error 'BPT "Argument is not a PROCEDURE name"))
	 (set! bpt-proc
	       (bpter name proc (if condition (eval (car condition)))))
	 (set! bpt-procs (cons (list name proc bpt-proc) bpt-procs))
	 (set-top-level-value! name bpt-proc))
    name)

(define (RESET-BPT)
    (set! trace-level 0)
    (set! proceed default-proceed)
    (set! *bpt-env* #f))

(define (DEFAULT-PROCEED) (error 'PROCEED "Not at a breakpoint"))

(define PROCEED default-proceed)

(define BPTER-PROCNAME "INTERACTIVE [inside BPTER]")
			;;; Name of interactive breakpoint procedure.
	 
(define (BPTER name proc condition)
    
    (define (EMBEDDED . x)
	    (if (and (not *bpt-env*)
		     (or (not condition) (apply condition x)))
		(let* ((trace-port (open-output-string))
		       (envs (dobacktrace "EMBEDDED [inside BPTER]"
				 "SCHEME2C" 20 trace-port)))
		      (set! *args* x)
		      (set! *bpt-env* envs)
		      (set! backtrace
			    (let ((btrace (get-output-string trace-port)))
				 (lambda ()
					 (display btrace stderr-port)
					 'backtrace:)))
		      (write trace-level stderr-port)
		      (display " -calls  - " stderr-port)
		      (write (cons name x) stderr-port)
		      (newline stderr-port)
		      (call-with-current-continuation
			  (lambda (continue)
				  (set! proceed (lambda () (continue #t)))
				  (jump-to-scheme2c *scheme2c-result* 4)))
		      (set! *bpt-env* #f)
		      (set! trace-level (+ 1 trace-level))
		      (set! *result* (apply proc *args*))
		      (set! trace-level (- 1 trace-level))
		      (set! *args* x)
		      (set! *bpt-env* envs)
		      (write trace-level stderr-port)
		      (display " -returns- " stderr-port)
		      (write *result* stderr-port)
		      (newline stderr-port)
		      (call-with-current-continuation
			  (lambda (continue)
				  (set! proceed
					(lambda x
						(if (not (eq? x '()))
						    (set! *result* (car x)))
						(continue #t)))
				  (jump-to-scheme2c *scheme2c-result* 5)))
		      (set! *bpt-env* #f)
		      *result*)
		(apply proc x)))
    
    (define (XEQ . args)
	    (let ((ftok (enable-system-file-tasks #f)))
		 (let ((result (apply read-eval-print args)))
		      (enable-system-file-tasks ftok)
		      result)))
    
    (define (INTERACTIVE . x)
	    (if (or (not condition) (apply condition x))
		(let ((prompt (format "~s- " trace-level)))
		     (set! backtrace interactive-backtrace)
		     (set! *args* x)
		     (xeq
			 'header
			 (format "~%~s -calls  - ~s" trace-level
				 (cons name x))
			 'prompt
			 prompt
			 'env
			 (dobacktrace bpter-procname "READ-EVAL-PRINT" 20 #f))
		     (set! trace-level (+ trace-level 1))
		     (set! *result* (apply proc *args*))
		     (set! trace-level (- trace-level 1))
		     (xeq
			 'header
			 (format "~s -returns- ~s" trace-level *result*)
			 'prompt
			 prompt
			 'result
			 *result*
			 'env
			 (dobacktrace bpter-procname "READ-EVAL-PRINT" 20 #f)))
		(apply proc x)))
    
    (if (eq? (scheme-mode) 'embedded) embedded interactive))

;;; A backtrace at a breakpoint is done by the following procedure.  When
;;; the system is interactive, it takes an optional count.

(define BACKTRACE #f)

(define (INTERACTIVE-BACKTRACE . count)
    (dobacktrace bpter-procname "READ-EVAL-PRINT" (if count (car count) 20)
	debug-output-port)
    #f)

(install-expander
    'UNBPT
    (lambda (x e)
	    (if (null? (cdr x))
		(set! x (map (lambda (x) (car x)) bpt-procs))
		(set! x (cdr x)))
	    `(map (lambda (f) (dounbpt f)) (quote ,x))))

(define (DOUNBPT name)
    (let ((name-proc-bpt (assoc name bpt-procs)))
	 (if (not name-proc-bpt)
	     (error 'UNBPT "~s is not breakpointed" name))
	 (if (eq? (top-level-value name) (caddr name-proc-bpt))
	     (set-top-level-value! name (cadr name-proc-bpt)))
	 (set! bpt-procs (remove name-proc-bpt bpt-procs))
	 (if (null? bpt-procs) (reset-bpt)))
    name)

;;; Indices for taking apart stack trace records.

(define PROCNAMEX (* ((lap () (C_FIXED (SIZEOF TSCP)))) 1))
(define EXPX (* ((lap () (C_FIXED (SIZEOF TSCP)))) 2))

;;; Backtracing is done by the following procedure.  It accepts a starting
;;; procedure (or #F), a termination procedure (or #F), a line count, and an
;;; output port.  It returns an a-list of environments for use with eval, where
;;; each item is of the form (ENV-n . environment) when the system is
;;; interactive, or a list of environments when the system is not interactive,
;;; where list element 'n' is environment 'n'.

(define (DOBACKTRACE start stop lines port)
    (do ((stp (stacktrace) (c-s2cuint-ref stp 0))
	 (interactive (eq? (scheme-mode) 'interactive))
	 (procname "")
	 (envlist '())
	 (envid '(env-0 env-1 env-2 env-3 env-4 env-5 env-6 env-7 env-8 env-9
		  env-10 env-11 env-12 env-13 env-14 env-15 env-16 env-17
		  env-18 env-19 env-20 env-21 env-22 env-23 env-24 env-25))
	 (string-out (let ((port (open-output-string)))
			  (set-write-circle! #t port)
			  (set-write-level! 10 port)
			  (set-write-length! 20 port)
			  port)))
	((or (= stp 0)
	     (= lines 0)
	     (null? envid)
	     (and (not start) (equal? procname stop)))
	 (if envlist
	     (if interactive
		 (append (cdr (assq 'env-0 envlist)) envlist)
		 (reverse envlist))
	     envlist))
	(set! procname (if (or (valid-scheme-pointer?
				   (c-tscp-ref stp procnamex))
			       (eq? (c-tscp-ref stp procnamex) '()))
			   (c-tscp-ref stp procnamex)
			   (c-string->string (c-s2cuint-ref stp procnamex))))
	(cond (start
	       (if (equal? start procname) (set! start #f)))
	      ((not (string? procname))
	       (when port
	             (write (c-tscp-ref stp expx) string-out)
	             (let ((expr (get-output-string string-out)))
		          (if (> (string-length expr) 65)
			         (display (string-append (substring expr 0 65)
					      " ...") port)
			         (display expr port)))
			  (display " in " port)
	       		  (display (car envid) port)
	       		  (newline port))
	       (if interactive
		   (set! envlist (cons (cons (car envid) procname) envlist))
	           (set! envlist (cons procname envlist)))
	       (set! envid (cdr envid))
	       (set! lines (- lines 1)))
	      ((member procname
		       '("SCEVAL_INTERPRETED-PROC" "LOOP [inside EXEC]")))
	      (else
	       (when port
		     (display "(" port)
	             (display procname port)
	             (display " ...)" port)
	             (newline port))
	       (set! lines (- lines 1))))))

;;; Keyboard interrupt signals are handled by the following function.  If
;;; the interpreter is currently reading stdin, then this results in a reset.
;;; Otherwise, a stack trace is printed and the debugger is entered.  A normal
;;; exit from the debugger results in the Scheme computation continuing.

(define (ON-INTERRUPT sig)
    (if *reading-stdin* (reset))
    (let ((ftok (enable-system-file-tasks #f))
	  (start "SCRT4_CALLSIGNALHANDLER"))
	 (format debug-output-port "~%***** INTERRUPT *****~%")
	 (dobacktrace start "READ-EVAL-PRINT" 20 debug-output-port)
	 (read-eval-print 'header #f 'prompt ">> "
	     'env (dobacktrace start "READ-EVAL-PRINT" 20 #f))
	 (enable-system-file-tasks ftok)))

;;; Errors are handled by the following procedure.  

(define (ERROR symbol format-string . args)
    (cond ((procedure? *error-handler*)
	   (let ((proc *error-handler*))
		(set! *error-handler* #t)
		(apply proc (cons symbol (cons format-string args)))))
	  ((eq? (scheme-mode) 'embedded)
	   (if *error-handler*
	       (begin (set! *error-handler* #f)
		      (write "***** ERROR error handler failed!" stderr-port)
		      (newline stderr-port)
		      (jump-to-scheme2c *scheme2c-result* 2))
	       (abort)))
	  (*error-handler*
	      (set! *error-handler* #f)
	      (error-display '*****\ \i\n\s\i\d\e\ ERROR)
	      (do ((arg (cons symbol (cons format-string args))
			(cdr arg)))
		  ((null? arg)
		   (error-display #\newline)
		   (osexit 1))
		  (error-display #\space)
		  (error-display (car arg))))
	  (else
	       (error-display "***** ERROR error handler failed!")
	       (error-display #\newline)
	       (osexit 1))))

;;; The EMBEDDED-ERROR-HANDLER writes the message on stderr-port.  If no error
;;; message is latched, it saves the environments in *ERROR-ENV* and writes
;;; the stack trace on stderr-port as well.

(define (EMBEDDED-ERROR-HANDLER id format-string . args)
    (display (format "***** ~a " id) stderr-port)
    (display (apply format (cons format-string args)) stderr-port)
    (newline stderr-port)
    (if (eq? *error-env* #f)
	(set! *error-env*
	      (dobacktrace "ERROR" "SCHEME2C" 20 stderr-port)))
    (set! *error-handler* embedded-error-handler)
    (jump-to-scheme2c *scheme2c-result* 1))

(define (RESET-ERROR)
    (set! *error-env* #f))

(define *ERROR-ENV* #f)

;;; The STAND-ALONE-ERROR-HANDLER outputs the message, dumps a stack trace,
;;; and then terminates the program.

(define (STAND-ALONE-ERROR-HANDLER id format-string . args)
    (display (format "***** ~a " id) stderr-port)
    (display (apply format (cons format-string args)) stderr-port)
    (newline stderr-port)
    (dobacktrace "ERROR" "main" 20 stderr-port)
    (osexit 1))

;;; Initialize *ERROR-HANDLER* to the right one.

(define *ERROR-HANDLER*
    (case (scheme-mode)
	  ((embedded) embedded-error-handler)
	  (else stand-alone-error-handler)))

;;; The default error handler is replaced by the following function when
;;; backtracing on error is desired.  It prints the backtrace, and then
;;; enters a read-eval-print loop when *DEBUG-ON-ERROR* is set.

(define *DEBUG-ON-ERROR* #f)

(define (BACKTRACE-ERROR-HANDLER id format-string . args)
    (display (format "***** ~a " id) debug-output-port)
    (display (apply format (cons format-string args)) debug-output-port)
    (newline debug-output-port)
    (set! *error-handler* backtrace-error-handler)
    (when *debug-on-error*
	  (let ((env (dobacktrace "ERROR" "READ-EVAL-PRINT" 20
			 debug-output-port))
		(ftok (enable-system-file-tasks #f)))
	       (set! *debug-on-error* #f)
	       (let loop () (when (char-ready? stdin-port)
				  (if (not (eof-object?
					       (read-char stdin-port)))
				      (loop))))
	       (read-eval-print 'prompt ">> " 'header #f 'env env)
	       (enable-system-file-tasks ftok)
	       (set! *debug-on-error* #t)))
    (reset))

;;; When the current computation exceeds the timeslice, the following procedure
;;; is called to package up the computation and return to the user.

(define (TIMEOUT)
    (set! timeout-debug #f)
    (call-with-current-continuation
	(lambda (return)
		(set! proceed (lambda () (return #t)))
		(jump-to-scheme2c *scheme2c-result* 3)))
    (if timeout-debug
	(let ((envs (dobacktrace "SCDEBUG_TIMEOUT" "SCHEME2C" 20 stderr-port)))
	     (set! *args* '())
	     (set! *bpt-env* envs)
	     (call-with-current-continuation
		 (lambda (continue)
			 (set! proceed (lambda () (continue #t)))
			 (jump-to-scheme2c *scheme2c-result* 4)))
	     (set! *bpt-env* #f))))

;;; When computation is resumed, the current state of the computation may be
;;; inspected by calling the following procedure.

(define (PROCEED?)
    (set! timeout-debug #t)
    (proceed))

(define TIMEOUT-DEBUG #t)
