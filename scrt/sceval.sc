;;; This module implements a Scheme evaluator.
;;;
;;; Initialization of this module will assure that all modules in the
;;; "standard" library are initialized.

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

(module sceval
    (top-level EVAL OPTIMIZE-EVAL)
    (with scexpand scexpnd1 scexpnd2
	  scrt1 scrt2 scrt3 scrt4 scrt5 scrt6 scrt7 scrtuser))

(include "repdef.sc")

;;; Optimization of eval is controlled by the following procedure.  Any of
;;; the following options may be specified:
;;;
;;;	CALL:  optimize calls to currently defined top-level procedures that
;;;	are not interpreted.
;;;
;;;	REWRITE:  rewrite calls to top-level procedures that take variable
;;;	numbers of arguments.  This option will cause some breakpoints to be
;;;	missed.

(define OPTIMIZE-OPTIONS '())

(define (OPTIMIZE-EVAL . options)
    (if (or (equal? options '())
	    (equal? options '(call))
	    (equal? options '(rewrite))
	    (equal? options '(call rewrite))
	    (equal? options '(rewrite call)))
	(set! optimize-options options)
	(error 'OPTIMIZE-EVAL "Illegal OPTIMIZATION OPTION(S): ~s" options)))

;;; The following a-list is used to turn a procedure call with a given number
;;; of arguments into the actual procedure to be used.

(define TOP-LEVEL-REWRITE
    `(((list 1) sceval_list1)
      ((list 2) sceval_list2)
      ((list 3) sceval_list3)
      ((append 2) scrt1_append-two)
      ((= 2) scrt2_=-two)
      ((< 2) scrt2_<-two)
      ((> 2) scrt2_>-two)
      ((<= 2) scrt2_<=-two)
      ((>= 2) scrt2_>=-two)
      ((max 2) scrt2_max-two)
      ((min 2) scrt2_min-two)
      ((+ 2) scrt2_+-two)
      ((* 2) scrt2_*-two)
      ((- 1) sceval_negate)
      ((- 2) scrt2_--two)
      ((/ 1) sceval_/1)
      ((/ 2) scrt2_/-two)))

(define (LIST1 x) (list x))
(define (LIST2 x y) (list x y))
(define (LIST3 x y z) (list x y z))
(define (NEGATE x) (- x))
(define (/1 x) (/ 1 x))

;;; Structure offsets for Scheme data structures.

(define SIZEOF-TSCP ((lap () (C_FIXED (SIZEOF TSCP)))))
(define CODEX sizeof-tscp)
(define CLOSUREX (* 2 sizeof-tscp))
(define VAR0X (* 2 sizeof-tscp))
(define VAR1X (* 3 sizeof-tscp))
(define VAR2X (* 4 sizeof-tscp))

;;; A Scheme expression is compiled into a form for efficient interpretation
;;; by the following procedure.

(define (COMPILE exp env)
    (cond ((symbol? exp) exp)
	  ((pair? exp)
	   (case (car exp)
		 ((quote) exp)
		 ((if) `(if ,(compile (cadr exp) env)
			    ,(compile (caddr exp) env)
			    ,(compile (cadddr exp) env)))
		 ((set!)
		  (let ((var (cadr exp)))
		       (if (assq var env)
			   `(set! ,(cadr exp) ,(compile (caddr exp) env))
			   (compile `(set-top-level-value! (quote ,(cadr exp))
					 ,(caddr exp)) env))))
		 ((begin)
		  (if (eq? (length exp) 2)
		      (compile (cadr exp) env)
		      `(begin ,@(compile-list (cdr exp) env))))
		 ((lambda)
		  (let ((env (let loop ((env env) (vars (cadr exp)))
				  (cond ((null? vars) env)
					((symbol? vars) (cons (list vars) env))
					(else (loop (cons (list (car vars))
							  env)
						    (cdr vars)))))))
		       `(lambda ,(cadr exp) ,@(compile-list (cddr exp) env))))
		 (else (let* ((proc (car exp))
			      (global (and (symbol? proc)
					   (not (assq proc env))))
			      (global-value (and global
						 (top-level-value proc)))
			      (rewrite (and global
					    (assoc (list proc
							 (- (length exp) 1))
						   top-level-rewrite))))
			     (cond ((and rewrite
					 (memq 'rewrite optimize-options))
				    `(,@(if (memq 'call optimize-options)
					    (list (- (length exp) 1))
					    '())
				      ,(cadr rewrite)
				      ,@(compile-list (cdr exp) env)))
				   ((and global (memq 'call optimize-options)
					 (procedure? global-value)
					 (not (eq? (scheme-tscp-ref
						       global-value codex)
						   (scheme-tscp-ref
						       interpreted-proc
						       codex)))
					 (<= 2 (length exp) 4))
				    `(,(- (length exp) 1) ,proc
				      ,@(compile-list (cdr exp) env)))
				   (else (compile-list exp env)))))))
	  ((or (number? exp) (string? exp) (char? exp) (boolean? exp))
	   exp)
	  ((%record? exp)
	   (compile `((%record-lookup-method ',exp '%to-eval) ',exp) env))
	  (else (set! compile-error exp)
		#t)))

(define COMPILE-ERROR #f)

(define (COMPILE-LIST exp env) (map (lambda (x) (compile x env)) exp))

;;; The following definitions are inlined and unchecked for use within the
;;; evaluator for interpreted code.

(define-in-line (SCHEME-TSCP-REF struct x)
    ((lap (struct x) (MTSCP (T_U struct) (FIXED_C x)))
     struct x))

(define-in-line (TOP-LEVEL-VALUE symbol)
    ((lap (symbol) (SYMBOL_VALUE symbol)) symbol))

(define-in-line (CAR x) ((lap (x) (PAIR_CAR x)) x))
(define-in-line (CDR x) ((lap (x) (PAIR_CDR x)) x))
(define-in-line (CADR x) ((lap (x) (PAIR_CAR (PAIR_CDR x))) x))
(define-in-line (CADDR x) ((lap (x) (PAIR_CAR (PAIR_CDR (PAIR_CDR x)))) x))
(define-in-line (CADDDR x)
    ((lap (x) (PAIR_CAR (PAIR_CDR (PAIR_CDR (PAIR_CDR x))))) x))
(define-in-line (CADDDDR x)
    ((lap (x) (PAIR_CAR (PAIR_CDR (PAIR_CDR (PAIR_CDR (PAIR_CDR x)))))) x))

(define-in-line (ASSQ x y)
    (let loop ((x x) (y y))
	 (if y
	     (let ((cary (car y)))
		  (if (eq? x (car cary)) cary (loop x (cdr y))))
	     #f)))

;;; Once the Scheme expression has been compiled, it is interpreted by the
;;; following procedure.

(define-in-line (EXEC-ANY exp env)
    (cond ((pair? exp) (exec exp env))
	  ((symbol? exp)
	   (let loop ((y env))
		(if (null? y)
		    (let ((value (top-level-value exp)))
			 (if (eq? value $_undefined)
			     (error exp "Top-level symbol is undefined")
			     value))
		    (if (eq? exp (car (car y)))
			(cdr (car y))
			(loop (cdr y))))))
	  (else exp)))

;;; The Scheme interpreter is invoked by calling the following procedure.

(define (EVAL form . env-list)
    (set! compile-error #f)
    (let* ((env (if (pair? env-list)
		    (let loop ((x (car env-list)))
			 (cond ((and (pair? x) (pair? (car x))) (loop (cdr x)))
			       ((null? x) (car env-list))
			       (else (error 'EVAL
					    "Environment is not an A-LIST: ~s"
					    (car env-list)))))
		    '()))
	   (comp-form (compile (expand form) env)))
	  (if (not (eq? compile-error #f))
	      (error 'EVAL 
		    "Argument contains an item that is not self-evaluating: ~s"
		     compile-error)
	      (exec-any comp-form env))))

;;; Return a list of evaluated objects.

(define-in-line (EXEC-LIST exps env)
    (let loop ((exps exps) (env env))
	 (if (pair? exps)
	     (cons (exec-any (car exps) env) (loop (cdr exps) env))
	     '())))

;;; Bind a list of values and return the new environment.

(define-in-line (NEW-ENV idl vals env)
    (let loop ((idl idl) (vals vals) (env env))
	 (cond ((null? idl)
		(if vals (error 'NEW-ENV "Too many arguments to function"))
		env)
	       ((symbol? idl)
		(cons (cons idl vals) env))
	       ((null? vals)
		(error 'NEW-ENV "Too few arguments to function"))
	       (else
		    (cons (cons (car idl) (car vals))
			  (loop (cdr idl) (cdr vals) env))))))

;;; Evaluate a list of items, bind the values and return the new environment.

(define-in-line (NEW-ENV-EXEC idl exps old-env env)
    (let loop ((idl idl) (exps exps) (env env))
	 (cond ((null? idl)
		(if exps (error 'NEW-ENV "Too many arguments to function"))
		env)
	       ((symbol? idl)
		(cons (cons idl (exec-list exps old-env)) env))
	       ((null? exps)
		(error 'NEW-ENV "Too few arguments to function"))
	       (else (loop (cdr idl) (cdr exps)
			   (cons (cons (car idl) (exec-any (car exps) old-env))
				 env))))))


;;; Interpret items represented by pairs.

(define (EXEC exp env)
    ((lap (x y) (LOOPSTACKTRACE x y)) exp env)
    (case (car exp)
	  ((if) (if (exec-any (cadr exp) env)
		    (exec-any (caddr exp) env)
		    (exec-any (cadddr exp) env)))
	  ((set!) (set-cdr! (assq (cadr exp) env) (exec-any (caddr exp) env)))
	  ((quote) (cadr exp))
	  ((lambda) (exec-lambda exp env))
	  ((begin)
	   (do ((exps (cdr exp) (cdr exps)))
	       ((null? (cdr exps)) (exec-any (car exps) env))
	       (exec-any (car exps) env)))
	  (else (let ((function (exec-any (car exp) env)))
		     (cond ((not (procedure? function))
			    (error 'exec
				   "Argument value is not a function: ~s"
				   (car exp)))
			   ((eq? (scheme-tscp-ref function codex)
				 (scheme-tscp-ref interpreted-proc codex))
			    (let ((closure (scheme-tscp-ref function
					       closurex)))
				 (exec-any (scheme-tscp-ref closure var0x)
				       (new-env-exec
					   (scheme-tscp-ref closure var2x)
					   (cdr exp)
					   env
					   (scheme-tscp-ref closure var1x)))))
			   (else (apply function
					(exec-list (cdr exp) env))))))))

(define INTERPRETED-PROC (eval '(lambda (x) x)))

(define (EXEC-LAMBDA exp env)
    (let ((vars (cadr exp))
          (body (cons 'begin (cddr exp))))
         (lambda vals (exec-any body (new-env vars vals env)))))
