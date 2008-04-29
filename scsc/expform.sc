;;; The "first pass" of this Scheme compiler reads the source files and
;;; performs the following operations:
;;;
;;;	- macro and special form expansion
;;;	- alpha-conversion
;;;     - lexical variable usage recording
;;;
;;; At the end of this pass, all bindings and control flows should be visible
;;; in the tree.
;;;

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

(module expform)

;;; Pick up external declarations.

(include "plist.sch")
(include "expform.sch")
(include "lambdaexp.sch")

;;; During compilation, variable binding information is kept in the following
;;; global variables.  Each is an a-list with entries of the form:
;;;
;;;	(external-name alpha-converted-name)
;;;
;;; LEXICAL-BOUND-VARS contains the variables which are bound at the current
;;; lexical level.  LEXICAL-FREE-VARS contains the variables which are
;;; lexically bound at higher lexical levels.  GLOBAL-FREE-VARS contains those
;;; variables which are bound at the "top-level".
 
(define GLOBAL-FREE-VARS '())

(define LEXICAL-FREE-VARS '())

(define LEXICAL-BOUND-VARS '())

;;; Information relating to the current lambda expression is kept in the
;;; following variables.  CURRENT-LAMBDA-ID is the identifier for the current
;;; lambda expression.

(define CURRENT-LAMBDA-ID 'top-level)

;;; Alpha-conversion requires the generation of unique names.  The sequence
;;; number which is used is kept in MAKE-ALPHA-SEQ.

(define MAKE-ALPHA-SEQ 0)

;;; Source processing starts with the following function which is entered with
;;; a generator function for the source.  It will return a list of forms which
;;; is the result of the first pass.

(define (EXPAND-FORMS)
    (let ((results '()))
	 (do ((exp (read-text) (read-text)))
	     ((eof-object? exp) (set! results (reverse results)))
	     (set! lexical-free-vars '())
	     (set! current-lambda-id 'top-level)
	     (set! exp (exp-form exp exp-form))
	     (if exp (set! results (cons exp results))))
	 (for-each
	     (lambda (var-alpha)
		     (let ((var   (car var-alpha))
			   (alpha (cadr var-alpha)))
			  (if (and (eq? (id-use alpha) 'global)
				   (not (id-module alpha)))
			      (begin (set! current-define-name
					   (id-undefref alpha))
				     (report-warning
					 "Variable assumed to be TOP-LEVEL:"
					 var)
				     (set-id-use! alpha 'top-level)
				     (set-id-module! alpha 'top-level)
				     (set-id-vname! alpha
					 (string-append
					     (hex28 "" (lchexname var))
					     "_v"))
				     (set! quote-constants
					   (cons (list var alpha)
						 quote-constants))))))
	     global-free-vars)
	 results))

;;; The expressions are recursively expanded by the following function which
;;; is called with the expression and the expansion function.  The expansion
;;; process is similar to macro expansion, but it does the alpha-conversion
;;; using the functions stored under the property EXPAND.

(define (EXP-FORM exp exp-func)
    (cond  ((symbol? exp)
	    (bound exp))
	   ((or (number? exp) (string? exp) (char? exp)
		(member exp '(#t #f)))
	    (exp-func (list 'quote exp) exp-func))
	   ((islist exp 1)
	    (let ((func (if (symbol? (car exp)) (get (car exp) 'expand) '())))
		 (apply (if func func call-exp)	(list exp exp-func))))
	   (else
	    (expand-error "" exp))))

;;; A similar function is used to expand a list of functions.

(define (EXP-FORM-LIST exp-list func)
    (if (islist exp-list 0)
	(map (lambda (exp) (func exp func)) exp-list)
	(expand-error 'expression-list exp-list)))

;;; During the alpha-conversion phase, all variables will be replaced with
;;; unique variables.  Information about each variable will be saved as
;;; properties of the alpha-converted variable.  The items saved are:
;;;
;;; PRINTNAME:	original program variable name.
;;; VNAME:	C name to access the item as a variable.
;;; CNAME:	C name to access the item as a procedure.
;;; MODULE:	module name containing the item.
;;; USE:	tag indicating what the variable signifies.  The possible
;;;		tags are:  LABEL, LAMBDA, LEXICAL, CONSTANT, GLOBAL, TOP-LEVEL,
;;;	        TEMPORARY, CLOSUREP, and MACRO.
;;; TYPE:	data type which is either false indicating a TSCP or the
;;;		appropriate C datatype.
;;; DISPLAY:	boolean that indicates that the variable is be allocated in a
;;;		display cell.
;;; BOUNDID:	id of the lambda expression where this variable is bound.
;;; LAMBDA:	id of the lambda expression which is this var's value.
;;; EXTERNAL:   indicates that variable is external to this compile and is
;;;		referenced.
;;; DEFINED:	indicates that variable is defined by a top-level define in
;;;		this module.
;;; VALUE:      value for identifiers which are constants.
;;; SET!:	boolean indicating that the variable has been SET!.
;;; REFS:	counter for # of times a lambda bound variable is referenced.
;;; CALLS:      counter for # of times a lambda bound variable is called as a
;;;		function.
;;; ALIAS:      label alias (see emit-lap).
;;; GOTOS:      counter for # of branches to a label.
;;; UNDEFREF    current-define-name for first use when undefined.

(define (ID-PRINTNAME id) (id-printname id))

(define (SET-ID-PRINTNAME! id name)  (set-id-printname! id name))

(define (ID-VNAME id)  (id-vname id))

(define (SET-ID-VNAME! id name) (set-id-vname! id name))

(define (ID-CNAME id) (id-cname id))

(define (SET-ID-CNAME! id name)  (set-id-cname! id name))

(define (ID-MODULE id)  (id-module id))

(define (SET-ID-MODULE! id name)  (set-id-module! id name))

(define (ID-USE id) (id-use id))

(define (SET-ID-USE! id tag) (set-id-use! id tag))

(define (ID-TYPE id) (id-type id))

(define (SET-ID-TYPE! id tag) (set-id-type! id tag))

(define (ID-DISPLAY id) (id-display id))

(define (SET-ID-DISPLAY! id flag) (set-id-display! id flag))

(define (ID-BOUNDID id) (id-boundid id))

(define (SET-ID-BOUNDID id value)(set-id-boundid id value))

(define (ID-LAMBDA id) (id-lambda id))

(define (SET-ID-LAMBDA! id lambda-id) (set-id-lambda! id lambda-id))

(define (ID-EXTERNAL id) (id-external id))

(define (SET-ID-EXTERNAL! id flag) (set-id-external! id flag))

(define (ID-DEFINED id) (id-defined id))

(define (SET-ID-DEFINED! id flag) (set-id-defined! id flag))

(define (ID-VALUE id) (id-value id))

(define (SET-ID-VALUE! id x) (set-id-value! id x))

(define (ID-SET! id) (id-set! id))

(define (SET-ID-SET!! id flag) (set-id-set!! id flag))

(define (ID-REFS id) (id-refs id))

(define (SET-ID-REFS! id cnt) (set-id-refs! id cnt))

(define (ID-CALLS id) (id-calls id))

(define (SET-ID-CALLS! id cnt) (set-id-calls! id cnt))

(define (ID-ALIAS id) (id-alias id))
    
(define (SET-ID-ALIAS! id label) (set-id-alias! id label))

(define (ID-GOTOS id) (id-gotos id))

(define (SET-ID-GOTOS! id cnt) (set-id-gotos! id cnt))

(define (ID-UNDEFREF id) (id-undefref id))

(define (SET-ID-UNDEFREF! id var) (set-id-undefref! id var))

;;; Variables which represent globally defined items will have their property
;;; GLOBAL set to their alphatized variable.  This allows rapid global lookup.

(define (ID-GLOBAL id) (id-global id))

(define (SET-ID-GLOBAL! id alpha) (set-id-global! id alpha))

;;; Names are generated for externally visible variables by the following
;;; function.

(define (ASSIGN-KNOWN-NAME var)
    (let* ((use    (id-use var))
	   (module (id-module var))
	   (name   (lchexname (id-printname var))))
	  (cond ((memq use '(lexical closurep))
		 (let ((lcvar (lchexname var)))
		      (cond ((id-lambda var)
			     (set-id-cname! var
				 (string-append module-name "_" lcvar))
			     (set-id-vname! var (string-append lcvar "_v")))
			    (else
			     (set-id-vname! var lcvar)))))
		((and (eq? use 'global) (id-type var)))
		(else
		 (set-id-vname! var (string-append (hex28 module name) "_v"))
		 (set-id-cname! var (string-append (hex28 module name)))))))

;;; This function is called to establish the linkage between a variable and a
;;; lambda expression.

(define (NAME-A-LAMBDA name exp)
    (set! exp ($lambda-id exp))
    (if exp
	(begin (set-id-lambda! name exp)
	       (set-lambda-name! exp name))))

;;; Often one wants the VNAME or CNAME of an arbitrary expression.  These
;;; functions  will produce it.

(define (VNAME exp)
    (if (symbol? exp)
	(begin (if (and (eq? (id-use exp) 'lambda) (lambda-name exp))
		   (set! exp (lambda-name exp)))
	       (id-vname exp))
	exp))

(define (CNAME exp)
    (if (symbol? exp)
        (begin (if (and (eq? (id-use exp) 'lambda) (lambda-name exp))
		   (set! exp (lambda-name exp)))
               (id-cname exp))
        exp))

;;; This function is called to convert a name into its "lower case hex" format.

(define (LCHEXNAME name)
    (if (symbol? name) (set! name (symbol->string name)))
    (do ((c '())
	 (i 0 (+ 1 i))
	 (new (list 1)))
	((= i (string-length name)) (list->string (cdr new)))
	(set! c (string-ref name i))
	(cond ((char=? c #\_)
	       (set-cdr! (last-pair new) (list #\_ #\_)))
	      ((and (char>=? c #\A) (char<=? c #\Z))
	       (set-cdr! (last-pair new)
		   (list (integer->char (+ (char->integer c) 32)))))
	      ((or (and (char>=? c #\a) (char<=? c #\z))
		   (and (char>=? c #\0) (char<=? c #\9) (> i 0)))
	       (set-cdr! (last-pair new) (list c)))
	      (else
		(set-cdr! (last-pair new) (cons #\_ (char->dl c 16 2)))))))

;;; This function is one of those that you hope you never have to write, but
;;; inevitably you must.  It exists because vcc will only recognize the first
;;; 31 characters of a variable name.  In order to force the first 31
;;; characters of a generated name to be unique, it is necessary that the
;;; lchexnames of the module and variable be less than or equal to 28
;;; characters.  If it doesn't fit, then a name is generated consisting of
;;; the last 9 characters of the module name, the last 10 characters of the
;;; name, and the hex crc-32 of the module and name.

(define (HEX28 module name)
    (if (<= (+ (string-length module) (string-length name)) 28)
	(if (equal? module "") name (string-append module "_" name))
	(let ((value (format '() "~a_~a_~a"
			     (substring module
				 (max 0 (- (string-length module) 9))
				 (string-length module))
			     (substring name
				 (max 0 (- (string-length name) 10))
				 (string-length name))
			     (crc-32x2 (string->list
					   (string-append module name)) 0 0))))
	     (if (char-numeric? (string-ref value 0))
		 (string-set! value 0 #\_))
	     value)))

;;; Compute a crc-32 for a list of characters using a per character table and
;;; return a string with the hex value.  The crc is computed in two 16-bit
;;; integers to avoid having to use floating point numbers.

(define (CRC-32x2 chars crc-left crc-right)
    (if (null? chars)
	(let loop ((cl '()) (left crc-left) (right crc-right))
	     (if (and (zero? left) (zero? right))
		 (if (null? cl) "0" (list->string cl))
		 (loop (cons (string-ref "0123456789abcdef"
				 (remainder right 16))
			     cl)
		       (quotient left 16)
		       (+ (bit-lsh (remainder left 16) 12)
			  (quotient right 16)))))
	(let ((char (char->integer (car chars))))
	     (crc-32x2 (cdr chars)
		 (bit-xor (bit-rsh crc-left 8)
		     (vector-ref t-left char)
		     (vector-ref t-left (remainder crc-right 256)))
		 (bit-xor (bit-or (bit-lsh (bit-and crc-left 255) 8)
				  (bit-rsh crc-right 8))
		     (vector-ref t-right char)
		     (vector-ref t-right (remainder crc-right 256)))))))

(define T-LEFT '#(
  #x0000  #x7707  #xEE0E  #x9909  #x076D  #x706A  #xE963  #x9E64
  #x0EDB  #x79DC  #xE0D5  #x97D2  #x09B6  #x7EB1  #xE7B8  #x90BF
  #x1DB7  #x6AB0  #xF3B9  #x84BE  #x1ADA  #x6DDD  #xF4D4  #x83D3
  #x136C  #x646B  #xFD62  #x8A65  #x1401  #x6306  #xFA0F  #x8D08
  #x3B6E  #x4C69  #xD560  #xA267  #x3C03  #x4B04  #xD20D  #xA50A
  #x35B5  #x42B2  #xDBBB  #xACBC  #x32D8  #x45DF  #xDCD6  #xABD1
  #x26D9  #x51DE  #xC8D7  #xBFD0  #x21B4  #x56B3  #xCFBA  #xB8BD
  #x2802  #x5F05  #xC60C  #xB10B  #x2F6F  #x5868  #xC161  #xB666
  #x76DC  #x01DB  #x98D2  #xEFD5  #x71B1  #x06B6  #x9FBF  #xE8B8
  #x7807  #x0F00  #x9609  #xE10E  #x7F6A  #x086D  #x9164  #xE663
  #x6B6B  #x1C6C  #x8565  #xF262  #x6C06  #x1B01  #x8208  #xF50F
  #x65B0  #x12B7  #x8BBE  #xFCB9  #x62DD  #x15DA  #x8CD3  #xFBD4
  #x4DB2  #x3AB5  #xA3BC  #xD4BB  #x4ADF  #x3DD8  #xA4D1  #xD3D6
  #x4369  #x346E  #xAD67  #xDA60  #x4404  #x3303  #xAA0A  #xDD0D
  #x5005  #x2702  #xBE0B  #xC90C  #x5768  #x206F  #xB966  #xCE61
  #x5EDE  #x29D9  #xB0D0  #xC7D7  #x59B3  #x2EB4  #xB7BD  #xC0BA
  #xEDB8  #x9ABF  #x03B6  #x74B1  #xEAD5  #x9DD2  #x04DB  #x73DC
  #xE363  #x9464  #x0D6D  #x7A6A  #xE40E  #x9309  #x0A00  #x7D07
  #xF00F  #x8708  #x1E01  #x6906  #xF762  #x8065  #x196C  #x6E6B
  #xFED4  #x89D3  #x10DA  #x67DD  #xF9B9  #x8EBE  #x17B7  #x60B0
  #xD6D6  #xA1D1  #x38D8  #x4FDF  #xD1BB  #xA6BC  #x3FB5  #x48B2
  #xD80D  #xAF0A  #x3603  #x4104  #xDF60  #xA867  #x316E  #x4669
  #xCB61  #xBC66  #x256F  #x5268  #xCC0C  #xBB0B  #x2202  #x5505
  #xC5BA  #xB2BD  #x2BB4  #x5CB3  #xC2D7  #xB5D0  #x2CD9  #x5BDE
  #x9B64  #xEC63  #x756A  #x026D  #x9C09  #xEB0E  #x7207  #x0500
  #x95BF  #xE2B8  #x7BB1  #x0CB6  #x92D2  #xE5D5  #x7CDC  #x0BDB
  #x86D3  #xF1D4  #x68DD  #x1FDA  #x81BE  #xF6B9  #x6FB0  #x18B7
  #x8808  #xFF0F  #x6606  #x1101  #x8F65  #xF862  #x616B  #x166C
  #xA00A  #xD70D  #x4E04  #x3903  #xA767  #xD060  #x4969  #x3E6E
  #xAED1  #xD9D6  #x40DF  #x37D8  #xA9BC  #xDEBB  #x47B2  #x30B5
  #xBDBD  #xCABA  #x53B3  #x24B4  #xBAD0  #xCDD7  #x54DE  #x23D9
  #xB366  #xC461  #x5D68  #x2A6F  #xB40B  #xC30C  #x5A05  #x2D02
))

(define T-RIGHT '#(
  #x0000  #x3096  #x612C  #x51BA  #xC419  #xF48F  #xA535  #x95A3
  #x8832  #xB8A4  #xE91E  #xD988  #x4C2B  #x7CBD  #x2D07  #x1D91
  #x1064  #x20F2  #x7148  #x41DE  #xD47D  #xE4EB  #xB551  #x85C7
  #x9856  #xA8C0  #xF97A  #xC9EC  #x5C4F  #x6CD9  #x3D63  #x0DF5
  #x20C8  #x105E  #x41E4  #x7172  #xE4D1  #xD447  #x85FD  #xB56B
  #xA8FA  #x986C  #xC9D6  #xF940  #x6CE3  #x5C75  #x0DCF  #x3D59
  #x30AC  #x003A  #x5180  #x6116  #xF4B5  #xC423  #x9599  #xA50F
  #xB89E  #x8808  #xD9B2  #xE924  #x7C87  #x4C11  #x1DAB  #x2D3D
  #x4190  #x7106  #x20BC  #x102A  #x8589  #xB51F  #xE4A5  #xD433
  #xC9A2  #xF934  #xA88E  #x9818  #x0DBB  #x3D2D  #x6C97  #x5C01
  #x51F4  #x6162  #x30D8  #x004E  #x95ED  #xA57B  #xF4C1  #xC457
  #xD9C6  #xE950  #xB8EA  #x887C  #x1DDF  #x2D49  #x7CF3  #x4C65
  #x6158  #x51CE  #x0074  #x30E2  #xA541  #x95D7  #xC46D  #xF4FB
  #xE96A  #xD9FC  #x8846  #xB8D0  #x2D73  #x1DE5  #x4C5F  #x7CC9
  #x713C  #x41AA  #x1010  #x2086  #xB525  #x85B3  #xD409  #xE49F
  #xF90E  #xC998  #x9822  #xA8B4  #x3D17  #x0D81  #x5C3B  #x6CAD
  #x8320  #xB3B6  #xE20C  #xD29A  #x4739  #x77AF  #x2615  #x1683
  #x0B12  #x3B84  #x6A3E  #x5AA8  #xCF0B  #xFF9D  #xAE27  #x9EB1
  #x9344  #xA3D2  #xF268  #xC2FE  #x575D  #x67CB  #x3671  #x06E7
  #x1B76  #x2BE0  #x7A5A  #x4ACC  #xDF6F  #xEFF9  #xBE43  #x8ED5
  #xA3E8  #x937E  #xC2C4  #xF252  #x67F1  #x5767  #x06DD  #x364B
  #x2BDA  #x1B4C  #x4AF6  #x7A60  #xEFC3  #xDF55  #x8EEF  #xBE79
  #xB38C  #x831A  #xD2A0  #xE236  #x7795  #x4703  #x16B9  #x262F
  #x3BBE  #x0B28  #x5A92  #x6A04  #xFFA7  #xCF31  #x9E8B  #xAE1D
  #xC2B0  #xF226  #xA39C  #x930A  #x06A9  #x363F  #x6785  #x5713
  #x4A82  #x7A14  #x2BAE  #x1B38  #x8E9B  #xBE0D  #xEFB7  #xDF21
  #xD2D4  #xE242  #xB3F8  #x836E  #x16CD  #x265B  #x77E1  #x4777
  #x5AE6  #x6A70  #x3BCA  #x0B5C  #x9EFF  #xAE69  #xFFD3  #xCF45
  #xE278  #xD2EE  #x8354  #xB3C2  #x2661  #x16F7  #x474D  #x77DB
  #x6A4A  #x5ADC  #x0B66  #x3BF0  #xAE53  #x9EC5  #xCF7F  #xFFE9
  #xF21C  #xC28A  #x9330  #xA3A6  #x3605  #x0693  #x5729  #x67BF
  #x7A2E  #x4AB8  #x1B02  #x2B94  #xBE37  #x8EA1  #xDF1B  #xEF8D
))

;;; This function converts the character "c" into numeric string of length
;;; "len" in base "base".

(define (CHAR->DL c base len)
    (set! c (char->integer c))
    (do ((dl '()))
	((zero? len) dl)
	(set! dl (cons (string-ref "0123456789abcdef" (remainder c base)) dl))
	(set! c (quotient c base))
	(set! len (- len 1))))

;;; Variables are initially bound and their alpha-converted value is returned
;;; by the following function.  It takes the variable name and an optional
;;; list of properties and values.  It returns the alphabetized name.

(define (NEWV var . pl)
    (let* ((oldalpha (id-global var))
	   (use      (cadr (memq 'use pl)))
	   (alpha    '()))
	  (if (and oldalpha (memq use '(global macro lexical)))
	      (begin (if (and (id-module oldalpha)
			      (or (eq? (id-use oldalpha) 'macro)
				  (eq? use 'global)))
			 (if (id-defined oldalpha)
			     (report-error
				 "Duplicately defined symbol:" var)
			     (if (not (or (eq? (id-module oldalpha) 'top-level)
					  (equal? (id-module oldalpha)
						  module-name)))
				 (report-warning
				     "Duplicately defined symbol:" var))))
		     (if (eq? use 'global)
			 (begin (set! alpha oldalpha)
				(set-id-lambda! alpha '())
				(set-id-module! alpha '())
				(set-id-vname! alpha '())
				(set-id-cname! alpha '()))
			 (set! alpha (make-alpha var))))
	      (set! alpha (make-alpha var)))
	  (set-id-printname! alpha var)
	  (do ((pl pl (cddr pl)))
	      ((null? pl)
	       (case (id-use alpha)
		     ((global macro top-level)
		      (set-id-global! var alpha)
		      (if (not (eq? alpha oldalpha))
			  (set! global-free-vars
				(cons (list var alpha) global-free-vars))))
		     ((lexical)
		      (set! lexical-bound-vars
			    (cons (list var alpha) lexical-bound-vars)))
		     ((label constant lambda temporary closurep)
		      (let ((dsa (downshift alpha)))
			   (set-id-printname! alpha alpha)
			   (if (eq? (id-use alpha) 'lambda)
			       (set-id-cname! alpha (hex28 module-name dsa))
			       (set-id-cname! alpha (hex28 "" dsa)))
			   (set-id-vname! alpha (hex28 "" dsa)))))
	       alpha)
	      (put alpha (car pl) (cadr pl)))))

;;; All variable names will be alpha-converted by taking the first character
;;; of their name and following it with an id number.

(define (MAKE-ALPHA var)
    (let* ((c (string-ref (symbol->string var) 0))
	   (alpha (string->symbol (format '() "~A~A" c make-alpha-seq))))
	  (set! make-alpha-seq (+ make-alpha-seq 1))
	  (if (id-printname alpha)
	      (make-alpha var)
	      alpha)))

;;; The following function looks up a variable in the current bindings.  If it
;;; is not found, then it will be added to GLOBAL-FREE-VARS.  TOP-LEVEL
;;; variables which are referenced will have a symbol pointer added to the
;;; constant list so that their value can be looked up.

(define (BOUND var)
    (let* ((varalist (assq var lexical-bound-vars))
	   (varlex   (or varalist (assq var lexical-free-vars)))
	   (varglob  (or varlex (id-global var))))
	  (cond (varalist
		 (cadr varalist))
		(varlex
		 (set! varlex (cadr varlex))
		 varlex)
		(varglob
		 (if (and (eq? (id-use varglob) 'top-level)
			  (not (find-quote-constant var 'top-level)))
		     (set! quote-constants
			   (cons (list var varglob) quote-constants)))
		 varglob)
		(else
		 (newv var 'use 'global 'undefref current-define-name)))))

;;; Syntax errors are reported by the following function which will return
;;; (begin #t) as its value.

(define (EXPAND-ERROR form exp)
    (report-error "Illegal" form "syntax:" exp)
    '(begin #t))
