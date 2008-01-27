;;; SCHEME->C Runtime Library

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

(module scrt4
    (top-level
	VECTOR? VECTOR VECTOR-LENGTH VECTOR-REF VECTOR-SET!
	VECTOR->LIST LIST->VECTOR VECTOR-FILL!
	PROCEDURE? APPLY MAP FOR-EACH FORCE MAKE-PROMISE CATCH-ERROR
	%RECORD? %RECORD %RECORD-LENGTH %RECORD-REF %RECORD-SET! 
	%RECORD->LIST LIST->%RECORD %RECORD-METHODS %RECORD-METHODS-SET!
	%RECORD-PREFIX-CHAR %RECORD-READ %RECORD-LOOKUP-METHOD
	C-SIZEOF-SHORT C-SIZEOF-INT C-SIZEOF-LONG 
	C-SIZEOF-FLOAT C-SIZEOF-DOUBLE C-SIZEOF-TSCP C-SIZEOF-S2CUINT
	C-BYTE-REF C-SHORTINT-REF C-SHORTUNSIGNED-REF C-INT-REF
	C-UNSIGNED-REF C-LONGINT-REF C-LONGUNSIGNED-REF 
	C-S2CUINT-REF C-TSCP-REF C-FLOAT-REF C-DOUBLE-REF
	C-BYTE-SET! C-SHORTINT-SET! C-SHORTUNSIGNED-SET! C-INT-SET!
        C-UNSIGNED-SET! C-LONGINT-SET! C-LONGUNSIGNED-SET!
	C-S2CUINT-SET! C-TSCP-SET! C-FLOAT-SET! C-DOUBLE-SET!
	SCHEME-BYTE-REF SCHEME-INT-REF SCHEME-TSCP-REF SCHEME-S2CUINT-REF
	SCHEME-BYTE-SET! SCHEME-INT-SET! SCHEME-TSCP-SET! SCHEME-S2CUINT-SET!
	BIT-AND BIT-OR BIT-NOT BIT-XOR BIT-LSH BIT-RSH
	WHEN-UNREFERENCED SIGNAL SYSTEM))

(include "repdef.sc")

;;; 6.8  Vectors.

(define (VECTOR? x) (vector? x))

(define (VECTOR . x) (list->vector x))

(define (VECTOR-LENGTH x) (vector-length x))

(define (VECTOR-REF x y) (vector-ref x y))

(define (VECTOR-SET! x y z) (vector-set! x y z))

(define (VECTOR->LIST x)
    (do ((i (- (vector-length x) 1) (- i 1))
	 (l '()))
	((= i -1) l)
	(set! l (cons (vector-ref x i) l))))

(define (LIST->VECTOR x)
    (do ((v (make-vector (length x)))
	 (x x (cdr x))
	 (i 0 (+ i 1)))
	((null? x) v)
	(vector-set! v i (car x))))

(define (VECTOR-FILL! v x)
    (do ((i (- (vector-length v) 1) (- i 1)))
	((= i -1) v)
	(vector-set! v i x)))

;;; 6.9  Control features.

(define (PROCEDURE? x) (procedure? x))

(define (APPLY proc args . opt)
    (if opt
	(apply-two proc (cons args (let loop ((opt opt))
					(if (cdr opt)
					    (cons (car opt) (loop (cdr opt)))
					    (car opt)))))
	(apply-two proc args)))

(define (MAP proc args . opt)
    (let loop ((args (cons args opt)) (head '()) (tail '()))
	 (if (not (null? (car args)))
	     (let ((val (cons (apply proc (map car args)) '())))
		  (if (null? head)
		      (loop (map cdr args) val val)
		      (loop (map cdr args) head (set-cdr! tail val))))
	     head)))

(define (FOR-EACH proc args . opt)
    (do ((args (cons args opt) (map cdr args)))
	((null? (car args)))
	(apply proc (map car args))))

(define (FORCE object) (object))

(define (MAKE-PROMISE proc)
    (let ((already-run? #f)
	  (result #f))
	 (lambda ()
		 (unless already-run?
			 (set! result (proc))
			 (set! already-run? #t))
		 result)))

(define (CATCH-ERROR proc)
    (let* ((old-error-handler *error-handler*)
	   (result (call-with-current-continuation
		       (lambda (return)
			       (define (ERROR id format-string . args)
				       (let ((port (open-output-string)))
					    (set! *error-handler*
						  old-error-handler)
					    (format port "***** ~a " id)
					    (apply format port format-string
						   args)
					    (return (get-output-string port))))
			       (set! *error-handler* error)
			       (list (proc))))))
	  (set! *error-handler* old-error-handler)
	  result))

;;; *.*  Records.

(define (%RECORD? x) (%record? x))

(define (%RECORD . x) (list->%record x))

(define (%RECORD-LENGTH x) (%record-length x))

(define (%RECORD-REF x y) (%record-ref x y))

(define (%RECORD-SET! x y z) (%record-set! x y z))

(define (%RECORD->LIST x)
    (do ((i (- (%record-length x) 1) (- i 1))
	 (l '()))
	((= i -1) l)
	(set! l (cons (%record-ref x i) l))))

(define (LIST->%RECORD x)
    (do ((r (make-%record (length x)))
	 (x x (cdr x))
	 (i 0 (+ i 1)))
	((null? x) r)
	(%record-set! r i (car x))))

(define (%RECORD-METHODS x) (%record-methods x))

(define (%RECORD-METHODS-SET! x y) (%record-methods-set! x y))

(define %RECORD-PREFIX-CHAR #f)

(define %RECORD-READ #f)

(define (%RECORD-LOOKUP-METHOD record method-name)
    (let ((name-method (assq method-name (%record-methods record))))
	 (if name-method
	     (cdr name-method)
	     (case method-name
		   ((%to-write %to-display)
		    (lambda (record port . ignore)
			    (display (if %record-prefix-char
					 (string #\# %record-prefix-char)
					 "#~")
				port)
			    (list (%record->list record))))
		   ((%to-equal?)
		    eq?)
		   ((%to-eval)
		    (lambda (x) x))
		   (else #f)))))

;;; *.*  Functions to access C structures.  Use at your own risk!

(define C-SIZEOF-SHORT ((lap () (C_FIXED (sizeof "short")))))

(define C-SIZEOF-INT ((lap () (C_FIXED (sizeof "int")))))

(define C-SIZEOF-LONG ((lap () (C_FIXED (sizeof "long")))))

(define C-SIZEOF-FLOAT ((lap () (C_FIXED (sizeof "float")))))

(define C-SIZEOF-DOUBLE ((lap () (C_FIXED (sizeof "double")))))

(define C-SIZEOF-TSCP ((lap () (C_FIXED (sizeof "TSCP")))))

(define C-SIZEOF-S2CUINT ((lap () (C_FIXED (sizeof "S2CUINT")))))

(define (C-BYTE-REF struct x)
    ((lap (struct x)
	  (S2CINT_TSCP (_S2CUINT (MBYTE (TSCP_POINTER struct)
					  (TSCP_S2CINT x)))))
     struct x))

(define (C-SHORTINT-REF struct x)
    ((lap (struct x)
	  (S2CINT_TSCP (_S2CINT (MSINT (TSCP_POINTER struct)
				       (TSCP_S2CINT x)))))
     struct x))

(define (C-SHORTUNSIGNED-REF struct x)
    ((lap (struct x)
	  (S2CUINT_TSCP (_S2CUINT (MSUNSIGNED (TSCP_POINTER struct)
					    (TSCP_S2CINT x)))))
     struct x))

(define (C-INT-REF struct x)
    ((lap (struct x)
	  (S2CINT_TSCP (_S2CINT (MINT (TSCP_POINTER struct) (TSCP_S2CINT x)))))
     struct x))

(define (C-UNSIGNED-REF struct x)
    ((lap (struct x)
	  (S2CUINT_TSCP (_S2CUINT (MUNSIGNED (TSCP_POINTER struct)
					    (TSCP_S2CINT x)))))
     struct x))

(define (C-LONGINT-REF struct x)
    ((lap (struct x)
	  (S2CINT_TSCP (_S2CINT (MLINT (TSCP_POINTER struct)
				       (TSCP_S2CINT x)))))
     struct x))

(define (C-LONGUNSIGNED-REF struct x)
    ((lap (struct x)
	  (S2CUINT_TSCP (_S2CUINT (MLUNSIGNED (TSCP_POINTER struct)
				      (TSCP_S2CINT x)))))
     struct x))

(define (C-S2CUINT-REF struct x)
    ((lap (struct x)
	  (S2CUINT_TSCP (MS2CUINT (TSCP_POINTER struct) (TSCP_S2CINT x))))
     struct x))

(define (C-TSCP-REF struct x)
    ((lap (struct x)
	  (MTSCP (TSCP_POINTER struct) (TSCP_S2CINT x)))
     struct x))

(define (C-FLOAT-REF struct x)
    ((lap (struct x)
	  (DOUBLE_TSCP (CDOUBLE (MFLOAT (TSCP_POINTER struct)
					(TSCP_S2CINT x)))))
     struct x))

(define (C-DOUBLE-REF struct x)
    ((lap (struct x)
	  (DOUBLE_TSCP (MDOUBLE (TSCP_POINTER struct) (TSCP_S2CINT x))))
     struct x))

(define (C-BYTE-SET! struct x v)
    ((lap (struct x v)
	  (SET (MBYTE (TSCP_POINTER struct) (TSCP_S2CINT x)) (TSCP_S2CINT v)))
     struct x v)
    v)

(define (C-SHORTINT-SET! struct x v)
    ((lap (struct x v)
	  (SET (MSINT (TSCP_POINTER struct) (TSCP_S2CINT x)) (TSCP_S2CINT v)))
     struct x v)
    v)

(define (C-SHORTUNSIGNED-SET! struct x v)
    ((lap (struct x v)
	  (SET (MSUNSIGNED (TSCP_POINTER struct) (TSCP_S2CINT x))
	       (TSCP_S2CUINT v)))
     struct x v)
    v)

(define (C-INT-SET! struct x v)
    ((lap (struct x v)
	  (SET (MINT (TSCP_POINTER struct) (TSCP_S2CINT x)) (TSCP_S2CINT v)))
     struct x v)
    v)

(define (C-UNSIGNED-SET! struct x v)
    ((lap (struct x v)
	  (SET (MUNSIGNED (TSCP_POINTER struct) (TSCP_S2CINT x))
	       (TSCP_S2CUINT v)))
     struct x v)
    v)

(define (C-LONGINT-SET! struct x v)
    ((lap (struct x v)
	  (SET (MLINT (TSCP_POINTER struct) (TSCP_S2CINT x)) (TSCP_S2CINT v)))
     struct x v)
    v)

(define (C-LONGUNSIGNED-SET! struct x v)
    ((lap (struct x v)
	  (SET (MLUNSIGNED (TSCP_POINTER struct) (TSCP_S2CINT x))
	       (TSCP_S2CUINT v)))
     struct x v)
    v)

(define (C-S2CUINT-SET! struct x v)
    ((lap (struct x v)
	  (SET (MS2CUINT (TSCP_POINTER struct) (TSCP_S2CINT x))
	       (TSCP_S2CUINT v)))
     struct x v)
    v)

(define (C-TSCP-SET! struct x v)
    ((lap (struct x v)
	  (SET (MTSCP (TSCP_POINTER struct) (TSCP_S2CINT x))
	       v))
     struct x v)
    v)

(define (C-FLOAT-SET! struct x v)
    ((lap (struct x v)
	  (SET (MFLOAT (TSCP_POINTER struct) (TSCP_S2CINT x)) (TSCP_DOUBLE v)))
     struct x v)
    v)

(define (C-DOUBLE-SET! struct x v)
    ((lap (struct x v)
	  (SET (MDOUBLE (TSCP_POINTER struct) (TSCP_S2CINT x)) (TSCP_DOUBLE v)))
     struct x v)
    v)

;;; *.*  Functions to access Scheme structures.  Use at your own risk!	   

(define-in-line (SCHEME-PTR? x)
    ((lap (x) (BOOLEAN (BITAND (TSCPTAG x) 1))) x))

(define (SCHEME-BYTE-REF struct x)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-BYTE-REF "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x) (S2CUINT_TSCP (_S2CUINT (MBYTE (T_U struct)
							  (TSCP_S2CINT x)))))
     struct x))

(define (SCHEME-INT-REF struct x)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-INT-REF "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x)
	  (S2CINT_TSCP (_S2CINT (MINT (T_U struct) (TSCP_S2CINT x)))))
     struct x))

(define (SCHEME-TSCP-REF struct x)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-TSCP-REF "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x) (MTSCP (T_U struct) (TSCP_S2CINT x)))
     struct x))

(define (SCHEME-S2CUINT-REF struct x)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-S2CUINT-REF "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x)
	  (S2CUINT_TSCP (MS2CUINT (T_U struct) (TSCP_S2CINT x))))
     struct x))

(define (SCHEME-BYTE-SET! struct x v)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-BYTE-SET! "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x v) (SET (MBYTE (T_U struct) (TSCP_S2CINT x))
			    (TSCP_S2CINT v)))
     struct x v)
    v)

(define (SCHEME-INT-SET! struct x v)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-INT-SET! "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x v)
	  (SET (MINT (T_U struct) (TSCP_S2CINT x)) (TSCP_S2CINT v)))
     struct x v)
    v)

(define (SCHEME-TSCP-SET! struct x v)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-TSCP-SET! "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x v) (SETGENTL (MTSCP (T_U struct) (TSCP_S2CINT x)) v))
     struct x v)
    v)

(define (SCHEME-S2CUINT-SET! struct x v)
    (if (not (scheme-ptr? struct))
	(error 'SCHEME-S2CUINT-SET! "Structure is not a SCHEME pointer: ~s"
	       struct))
    ((lap (struct x v)
	  (SET (MS2CUINT (T_U struct) (TSCP_S2CINT x)) (TSCP_S2CUINT v)))
     struct x v)
    v)

;;; *.*  Bit operations on 32-bit bit masks

(define (BIT-AND x . y)
    (let loop ((result x) (y y))
	 (if (null? y)
	     result
	     (loop ((lap (x y) (S2CUINT_TSCP (BITAND32 (TSCP_S2CUINT x)
						 (TSCP_S2CUINT y))))
		    (car y) result)
		   (cdr y)))))

(define (BIT-OR x . y)
    (let loop ((result x) (y y))
	 (if (null? y)
	     result
	     (loop ((lap (x y) (S2CUINT_TSCP (BITOR32 (TSCP_S2CUINT x)
						 (TSCP_S2CUINT y))))
		    (car y) result)
		   (cdr y)))))

(define (BIT-NOT x) (bit-xor x -1))

(define (BIT-XOR x . y)
    (let loop ((result x) (y y))
	 (if (null? y)
	     result
	     (loop ((lap (x y) (S2CUINT_TSCP (BITXOR32 (TSCP_S2CUINT x)
						 (TSCP_S2CUINT y))))
		    (car y) result)
		   (cdr y)))))

(define (BIT-LSH x y)
    ((lap (x y)
	  (S2CUINT_TSCP (BITLSH32 (TSCP_S2CUINT x) (TSCP_S2CUINT y))))
     x y))

(define (BIT-RSH x y)
    ((lap (x y)
	  (S2CUINT_TSCP (BITRSH32 (TSCP_S2CUINT x) (TSCP_S2CUINT y))))
     x y))

;;; *.* Garbage collection finalization for unreferenced objects.

(define (WHEN-UNREFERENCED obj proc)
    (if (and proc (not (procedure? proc)))
	(error 'WHEN-UNREFERENCED "Argument is not a PROCEDURE: ~s" proc))
    (let* ((found (assq obj whenfreed))
	   (result (and found (cdr found))))
	  (if proc
	      (if found
		  (set-cdr! found proc)
		  (set! whenfreed (cons (cons obj proc) whenfreed)))
	      (if found (set! whenfreed (remq found whenfreed))))
	  result))

(define (SC_WHENFREED) whenfreed)

;;; Operating System Dependent Extensions.  N.B.  Not implemented the same
;;; way on all systems.

;;; *.* Define a signal handler.

(define SIGNALS (make-vector 32 #f))

(define (SIGNAL sig handler)
    (if (or (negative? sig) (>= sig (vector-length signals)))
	(error 'SIGNAL "Argument is not a valid SIGNAL: ~s" sig))
    (if (and (not (procedure? handler)) (not (number? handler)))
	(error 'SIGNAL "Argument is not a valid SIGNAL HANDLER: ~s" handler))
    (let ((prev-scheme (vector-ref signals sig)))
	 (vector-set! signals sig handler)
	 (let ((prev-os (ossignal sig (if (number? handler) handler #t))))
	      (if (procedure? prev-scheme) prev-scheme prev-os))))

(define (CALLSIGNALHANDLER sig)
    ((vector-ref signals sig) sig))

;;; *.* Issue a shell command.

(define (SYSTEM command)
    (if (not (string? command))
	(error 'SYSTEM "Argument is not a STRING: ~s" command))
    (ossystem command))
