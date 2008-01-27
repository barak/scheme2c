;;; Code generator for $call and $lap expressions.
;;;

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

(module callcode)

;;; External and in-line declarations.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")
(include "miscexp.sch")
(include "gencode.sch")
(include "lap.sch")

;;; ($call tail func arg ...)  ==>  emit code for the call and return it's
;;;				    result.
;;;
;;; The first step in generating code for a call is figuring out the type of
;;; function being called and the type of call.  This is done by the following
;;; function which then calls the appropriate function to actually generate
;;; code for the call.

(define ($CALL-GENC loc exp bindings)
    (let* ((func ($call-func exp))
	   (tail ($call-tail exp))
	   (argl ($call-argl exp))
	   (id   (if (symbol? func) (id-lambda func) #f)))
	  (cond (($lambda? func)
		 (inline-call loc func argl bindings))
		(($lap? func)
		 ($lap-genc loc func argl bindings))
		((and id tail (or (eq? (lambda-generate id) 'inline-tail)
				  (la-exits-lb? tail id)))
		 (tail-call loc func argl id bindings))
		((and id (eq? (lambda-generate id) 'inline))
		 (inline-call loc (lambda-$lambda id) argl bindings))
		((and id (id-type func))
		 (known-c-call loc func argl id bindings))
		(id
		 (known-call loc func argl id bindings))
		(else
		 (unknown-call loc func argl bindings)))))

(define (LA-EXITS-LB? ida idb)
    (and ida (or (eq? ida idb) (la-exits-lb? (lambda-exits ida) idb))))
	   
;;; When the function is a lambda expression, or when there is only one actual
;;; call to an internally defined function, then it may be expanded in-line.
;;; The lambda expression is effectively treated as LET, with the arguments
;;; used as the initial values.

(define (INLINE-CALL loc exp argl bindings)
    (let* ((id   ($lambda-id exp))
	   (req  (lambda-reqvars id))
	   (opt  (optional-args id))
	   (temp-state (save-lap-temps))
	   (varl '())
	   (vals '())
	   (save-free-display free-display)

	   ;;; Assign a temp. to the lexically bound var if it does not
	   ;;; have a memory location.  Build the varl and vals lists.

	   (bind (lambda (var)
			 (set! varl (cons var varl))
			 (set! vals
			       (cons (cond ((id-display var)
					    (when (not (memq var bindings))
						  (reserve-display (list var)
						      bindings)
						  (set! bindings
							(cons var bindings)))
					    `("DISPLAY" ,(id-display var)))
					   ((not (memq var bindings))
					    (set! bindings (cons var bindings))
					    (set-id-vname! var (use-lap-temp))
					    var)
					   (else var))
				     vals))
			 (car vals))))

	  (cond ((or (and opt (< (length argl) (length req)))
		     (and (null? opt) (not (eq? (length argl) (length req)))))
		 (report-error "Incorrect number of arguments for lambda"))
		(else
		 (for-each
		     (lambda (var)
			     (if (and (id-lambda var)
				      (not (eq? (lambda-generate
						    (id-lambda var))
						'closed-procedure)))
				 (exp-genc 'no-value (car argl) bindings)
				 (exp-genc (bind var) (car argl) bindings))
			     (set! argl (cdr argl)))
		     req)
		 (if opt
		     (listify-optional-args (bind opt) argl bindings))
		 (lambda-body-genc loc exp varl vals bindings)))
	  (set! free-display save-free-display)
	  (restore-lap-temps temp-state)))

;;; Optional arguments are combined into a list by the caller.  This function
;;; emits the code to evaluate each argument and form them into a list.

(define (LISTIFY-OPTIONAL-ARGS var argl bindings)
    (cond ((null? argl)
	   (emit-lap `(SET ,(vname var) EMPTYLIST)))
	  ((null? (cdr argl))
	   (exp-genc 'tos (car argl) bindings)
	   (emit-lap `(SET ,(vname var) (CONS tos EMPTYLIST))))
	  (else (let ((ltemp (use-lap-temp)))
		     (let loop ((argl (reverse argl)) (reg "EMPTYLIST"))
			  (exp-genc 'tos (car argl) bindings)
			  (cond ((not (null? (cdr argl)))
				 (emit-lap `(SET ,(vname ltemp)
						 (CONS tos ,reg)))
				 (loop (cdr argl) (vname ltemp)))
				(else (emit-lap `(SET ,(vname var)
						      (CONS tos ,reg))))))
		     (drop-lap-temp ltemp)))))

;;; When a tail-recursive call can be generated, the following routine is
;;; called.  Tail-recursion elimination is an example of how computer
;;; scientists can gain insight by observing nature.  When a cat tires of
;;; chasing its tail, does it have to "unwind" itself?
 
(define (TAIL-CALL loc func argl id bindings)
    (let ((req  (lambda-reqvars id))
	  (opt  (optional-args id)))
	 (if (or (and opt (< (length argl) (length req)))
		 (and (null? opt) (not (eq? (length argl) (length req)))))
	     (report-error "Incorrect number of arguments for" func)
	     (let ((temp-state (save-lap-temps)))
		  (tail-call-bind req opt argl bindings)
		  (emit-lap `(GOTO ,(code-label id)))
		  (update-condition-info id)
		  (restore-lap-temps temp-state)))))

;;; The arguments to a tail-called function are evaluated and assigned taking
;;; care to avoid the use of a temporary for the evaluation of the last one.
;;; Note the special case where a temporary must be allocated when the value
;;; of the argument is one of the function's variables that is being rebound.
;;; Also note the special handling for binding a variable which is set!.

(define (TAIL-CALL-BIND req opt argl bindings)
    (cond ((and (null? req) (null? opt)))
	  ((null? req)
	   (listify-optional-args (lookup opt bindings) argl bindings))
	  ((and (null? (cdr req)) (null? opt))
	   (let ((var (car req)))
		(cond ((id-set! var)
		       (exp-genc 'tos (car argl) bindings)
		       (emit-lap `(SET ,(let ((x (id-display var)))
					     (if x
						 `("DISPLAY" ,x)
						 (vname var)))
				       tos)))
		      (else
			  (exp-genc (lookup (car req) bindings) (car argl)
			      bindings)))))
	  (else
	   (let ((var (car req))
		 (val (let ((arg (car argl)))
			   (if (or (eq? arg opt) (memq arg (cdr req)))
			       (let ((temp (use-lap-temp)))
				    (exp-genc temp arg bindings)
				    temp)
			       (car (load-argl (list arg) bindings))))))
		(tail-call-bind (cdr req) opt (cdr argl) bindings)
		(let ((displayx (id-display var)))
		     (if (id-set! var)
			 (emit-lap `(SET ,(if displayx
					      `("DISPLAY" ,displayx)
					      (vname var))
					 ,val))
			 (emit-lap `(SET ,(lookup var bindings) ,val))))))))

;;; When the function is a block of lap code, then it will be evaluated here.
;;; Arguments will be looked up and then the lap code will be emitted with
;;; appropriate substitutions.

(define ($LAP-GENC loc lap argl bindings)
    (let ((alist '())
	  (save-temp (save-lap-temps)))
	 (do ((vars ($lap-vars lap) 	      (cdr vars))
	      (vals (load-argl argl bindings) (cdr vals)))
	     ((or (null? vars) (null? vals))
	      (if (or vals vars)
		  (report-error
		      "Incorrect number of arguments for LAP construct")))
	     (set! alist (cons (list (car vars) (car vals)) alist)))
	 (let loop ((laps ($lap-body lap)))
	      (cond ((cdr laps)
		     (emit-lap (subsym (car laps) alist))
		     (loop (cdr laps)))
		    (else (emit-lap `(SET ,(vname loc)
					  ,(subsym (car laps) alist))))))
	 (restore-lap-temps save-temp)))

;;; Arguments are substituted into the lap code by the following function.

(define (SUBSYM exp alist)
    (cond ((null? exp) exp)
	  ((symbol? exp)
	   (let ((old-new (assq exp alist)))
		(if old-new (vname (cadr old-new)) exp)))
	  ((pair? exp)
	   (cons (subsym (car exp) alist)
		 (subsym (cdr exp) alist)))
	  (else exp)))

;;; When a known C function is called, the following procedure emits the code
;;; to call it with converted arguments and then convert the result.

(define (KNOWN-C-CALL loc func argl id bindings)
    (let* ((req       (lambda-reqvars id))
	   (opt       (lambda-optvars id))
	   (reqlen    (length req))
	   (save-lap  (save-lap-temps))
	   (argl      (load-argl argl bindings)))
	  (emit-extern func)
	  (cond ((or (and (null? opt) (not (= (length argl) reqlen)))
		     (and opt (< (length argl) reqlen)))
		 (report-error "Incorrect number of arguments for"
		     (id-printname func)))
		(else
		 (emit-lap
		     `(SET TOS
			   (,(cname id)
			    ,@(let loop ((args argl) (types (append req opt)))
				   (if args
				       (cons 	 	 
					   (case (car types)
					   	 ((char)
						  `(TSCP_CHAR ,(car args)))
						 ((int)
						  `(INT (TSCP_S2CINT
							    ,(car args))))
						 ((shortint)
						  `(SHORTINT
						       (TSCP_S2CINT
							   ,(car args))))
						 ((longint)
						  `(LONGINT
						       (TSCP_S2CINT
							   ,(car args))))
						 ((unsigned)
						  `(UNSIGNED
						       (TSCP_S2CUINT
							   ,(car args))))
						 ((shortunsigned)
						  `(SHORTUNSIGNED
						       (TSCP_S2CUINT
							   ,(car args))))
						 ((longunsigned)
						  `(LONGUNSIGNED
						       (TSCP_S2CUINT
							   ,(car args))))
						 ((pointer array)
						  `(TSCP_POINTER ,(car args)))
						 ((float)
						  `(CFLOAT (TSCP_DOUBLE
							       ,(car args))))
						 ((double)
						  `(TSCP_DOUBLE ,(car args)))
						 (else (car args)))
					   (loop (cdr args)
						 (or (cdr types) types)))
				       '())))))
		 (emit-lap
		     `(SET ,(vname loc)
			   ,(case (or (eq? loc 'no-value) (id-type func))
				  ((#t) 'TOS)
				  ((char) '(CHAR_TSCP TOS))
				  ((int shortint longint)
				   '(S2CINT_TSCP (_S2CINT TOS)))
				  ((unsigned shortunsigned longunsigned)
				   '(S2CUINT_TSCP (_S2CUINT TOS)))
				  ((pointer array) '(POINTER_TSCP TOS))
				  ((float) '(DOUBLE_TSCP (CDOUBLE TOS)))
				  ((double) '(DOUBLE_TSCP TOS))
				  ((void)
				   (report-warning
				       "C procedure does not return a value:"
				       (cname id))
				   (emit-lap '(SET NO-VALUE TOS))
				   'FALSEVALUE)
				  (else '(_TSCP TOS)))))))
	  (restore-lap-temps save-lap)))

;;; When a known function is called, the minimal calling sequence necessary
;;; is generated, and the argument count can be checked at compile time.  Note
;;; the special case for functions with a variable number of arguments which
;;; do not have a module name.  This is to allow calls to ULTRIX or C-library
;;; routines which take a variable number of arguments.

(define (KNOWN-CALL loc func argl id bindings)
    (let* ((req       (lambda-reqvars id))
	   (opt       (optional-args id))
	   (reqlen    (length req))
	   (save-lap  (save-lap-temps)))
	  (emit-extern func)
	  (cond ((or (and (null? opt) (not (= (length argl) reqlen)))
		     (and opt (< (length argl) reqlen)))
		 (report-error "Incorrect number of arguments for"
		     (id-printname func)))
		((and opt (equal? (id-module func) ""))
		 (set! argl (load-argl argl bindings))
		 (emit-lap `(SET ,(vname loc) (,(cname id) ,@argl))))
		(else
		 (set! req (load-argl (list-head argl reqlen) bindings))
		 (if opt
		     (listify-optional-args 'tos (list-tail argl reqlen)
			 bindings))    
		 (emit-lap
		     `(SET ,(vname loc)
			   (,(cname id)
			    ,@req
			    ,@(if opt '(tos) '())
			    ,@(if (eq? (lambda-generate id) 'closed-procedure)
				  `((PROCEDURE_CLOSURE
					,(lookup func bindings)))
				  '()))))))
	  (restore-lap-temps save-lap)))

;;; The most general calling sequence is when nothing is known about the
;;; procedure.  If the procedure takes a fixed number of arguments, then the
;;; call will be in-line, otherwise, a special form of APPLY will be used
;;; as the trampoline.

(define (UNKNOWN-CALL loc func argl bindings)
    (let* ((save-state (save-lap-temps))
	   (proc (use-lap-temp))
	   (argtemps (load-argl argl bindings)))
	  (exp-genc proc func bindings)
	  (emit-lap `(SET ,proc (UNKNOWNCALL ,(vname proc) ,(length argl))))
	  (emit-lap `(SET ,(vname loc)
			  ((VIA (PROCEDURE_CODE ,(vname proc)))
			   ,@argtemps
			   (PROCEDURE_CLOSURE ,(vname proc)))))
	  (restore-lap-temps save-state)))

;;; Argument lists are evaluated and loaded into temporary variables by the
;;; following function.  It returns a list of variables which hold the
;;; values.

(define (LOAD-ARGL argl bindings)
    (map (lambda (arg)
		 (if (and (symbol? arg)
			  (or (var-in-stack arg)
			      (and (var-is-global arg) (not (id-type arg)))
			      (var-is-constant arg)))
		     (begin 
			    (emit-extern arg)
			    (lookup arg bindings))
		     (let ((temp (use-lap-temp)))
			  (exp-genc temp arg bindings)
			  temp)))
	 argl))
