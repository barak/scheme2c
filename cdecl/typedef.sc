;;; C Declaration Language

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

;;; This module compiles type and sizeof declarations.
;;;
;;; Data types are defined by this type of expression.  Initially, we'll
;;; try to accept as few forms as possible by doing a little "hand casting".
;;; The legal forms are:
;;;
;;;	(typedef <type> <identifier>)
;;;
;;; where:
;;;
;;;	<type> ::= (<stype> *)
;;;		   (<stype> *proc)
;;;
;;;	<atype> ::= (<stype> integer)
;;;		    <struct-or-union-specifier>
;;;
;;;	<stype> ::= char
;;;		    shortint
;;;		    shortunsigned
;;;		    int
;;;		    unsigned
;;;		    longint
;;;		    longunsigned
;;;		    float
;;;		    double
;;;		    <type-def-name>
;;;
;;;	<type-def-name> ::= <identifier> denoting another type
;;;
;;;	<struct-or-union-specifier> ::=	( struct [<struct-decl> ...] )
;;;					( union  [<struct-decl> ...] )
;;;
;;;	<struct-decl> ::= ( <atype> <identifier> )
;;;
;;; Sizeof declarations define the basic C types.  They are automatically
;;; produced by the program "sizeof".  

(module typedef)

;;; Type definition expressions from the input file are parsed by the
;;; following expression.  It will return the type name on success, or
;;; call error on an error.

(define (INPUT-TYPEDEF exp)
    (if (and (= (length exp) 3) (eq? (car exp) 'typedef) (symbol? (caddr exp)))
	(let ((id (caddr exp))
	      (parse (parse-type (cadr exp))))
	     (putprop id 'base-type #f)
	     (putprop id 'type parse)
	     (if (and (pair? parse) (symbol? (car parse))
		      (eq? (cadr parse) '*))
		 (putprop (car parse) 'pointed-to-by id))
	     id)
	(error 'input-typedef "Illegal syntax: ~s" exp)))

;;; Type declarations are parsed by the following function.  It will return
;;; the type definition, or call error on an error.  Some of these type
;;; transformations may be MACHINE DEPENDENT.

(define (PARSE-TYPE type)
    (if (pair? type)
	(cond ((memq (car type) '(struct union))
	       (struct-or-union type))
	      ((equal? (cdr type) '(*))
	       (list (parse-stype (car type)) '*))
	      ((equal? (cdr type) '(*proc))
	       (list (parse-stype (car type)) '*proc))
	      (else (parse-atype type)))
	(parse-stype type)))

(define (PARSE-ATYPE type)
    (if (pair? type)
	(cond ((memq (car type) '(struct union))
	       (struct-or-union type))
	      ((and (= (length type) 2)
		   (integer? (cadr type)) (>= (cadr type) 0))
	       (list (parse-stype (car type)) (cadr type)))
	      (else (error 'parse-atype "Argument is not a legal type: ~s"
			   type)))
	(parse-stype type)))

(define (PARSE-STYPE type)
    (if (symbol? type)
	type
	(error 'parse-stype "Argument is not a legal type: ~s" type)))

;;; Structs and unions are handled by the following functions.

(define (STRUCT-OR-UNION exp)
    (list (case (car exp)
		((struct) 'struct)
		((union) 'union)
		(else (error 'struct-or-union "Illegal syntax: ~s" exp)))
	  (map (lambda (slot)
		       (if (and (= (length slot) 2) (symbol? (cadr slot)))
			   (list (parse-slot-type (car slot)) (cadr slot))
		           (error 'struct-or-union
				  "Argument is not a legal slot: ~s" slot)))
	       (cdr exp))))

;;; When the type specifier for a slot is parsed, it may be contain an
;;; array or structure definition, or a symbol.  Arrays and structures
;;; defined here must have a dummy type assigned to them.

(define PARSE-SLOT-TYPE
    (let ((uid 1))
	 (lambda (type)
		 (let ((parse (parse-atype type)))
		      (if (symbol? parse)
			  parse
			  (let ((symbol
				 (string->symbol (format "*TYPE~s" uid))))
			       (set! uid (+ uid 1))
			       (putprop symbol 'base-type #f)
			       (putprop symbol 'type parse)
			       symbol))))))

;;; MACHINE DEPENDENT SIZEOF declarations are processed here.

(define (INPUT-SIZEOF exp)
    (let ((type (list-ref exp 1))
	  (size (list-ref exp 2))
	  (align (list-ref exp 3))
	  (to-get (list-ref exp 4))
	  (to-set! (list-ref exp 5)))
	 (putprop type 'type #t)
	 (putprop type 'base-type type)
	 (putprop type 'size size)
	 (putprop type 'align align)
	 (putprop type 'to-get to-get)
	 (putprop type 'to-set! to-set!)))

;;; Every type symbol can be resolved into a base type symbol by the following
;;; function.  Once a base type has been computed, it is saved on the
;;; property list.

(define (BASE-TYPE start-type)
    (or (getprop start-type 'base-type)
	(let loop ((type start-type) (count 20))
	     (let ((typeinfo (getprop type 'type)))
		  (if (or (not typeinfo) (eq? count 0))
		      (error 'base-type "BASE TYPE cannot be resolved: ~s"
			     start-type))
		  (if (symbol? typeinfo)
		      (loop typeinfo (- count 1))
		      (putprop start-type 'base-type type))))))

;;; Basic information about a type is returned by:

(define (ISA-UNION? type)
    (let ((typeinfo (getprop (base-type type) 'type)))
	 (and (pair? typeinfo) (eq? (car typeinfo) 'union))))

(define (ISA-STRUCT? type)
    (let ((typeinfo (getprop (base-type type) 'type)))
	 (and (pair? typeinfo) (eq? (car typeinfo) 'struct))))

(define (UORS-SLOTS type) (cadr (getprop (base-type type) 'type)))

(define (ISA-PROCP? type)
    (let ((typeinfo (getprop (base-type type) 'type)))
	 (and (pair? typeinfo) (eq? (cadr typeinfo) '*proc))))

(define (PROCP-RETURNS type)
    (base-type (car (getprop (base-type type) 'type))))

(define (ISA-POINTER? type)
    (let ((typeinfo (getprop (base-type type) 'type)))
	 (and (pair? typeinfo) (eq? (cadr typeinfo) '*))))

(define (POINTER-TO type)
    (base-type (car (getprop (base-type type) 'type))))

(define (ISA-ARRAY? type)
    (let ((typeinfo (getprop (base-type type) 'type)))
	 (and (pair? typeinfo) (number? (cadr typeinfo)))))

(define (ARRAY-SIZE type) (cadr (getprop (base-type type) 'type)))

(define (ARRAY-TYPE type) (base-type (car (getprop (base-type type) 'type))))

(define (POINTED-TO-BY type)
    (base-type (getprop (base-type type) 'pointed-to-by)))

;;; Given this information, we can now compute sizes of things.

(define (ALIGNED-SIZE-OF type)
    (let* ((size-align (size-alignment-of type))
	   (size (car size-align))
	   (align (cadr size-align)))
	  (* align (quotient (+ size align -1) align))))

(define (SIZE-OF type)
    (car (size-alignment-of type)))

(define (ALIGNMENT-OF type)
    (cadr (size-alignment-of type)))

(define (SIZE-ALIGNMENT-OF type)
    (let ((base (base-type type)))
	 (cond ((getprop base 'size)
		`(,(getprop base 'size) ,(getprop base 'align)))
	       ((isa-union? type)
		(let ((size 0)
		      (align 0))
		     (for-each
			 (lambda (slot)
				 (let ((size-align (size-alignment-of
						       (car slot))))
				      (set! size (max size
						      (car size-align)))
				      (set! align (max align
						       (cadr size-align)))))
			 (uors-slots type))
		     `(,size ,align)))
	       ((isa-struct? type)
		(let ((size 0)
		      (align 0))
		     (for-each
			 (lambda (slot)
				 (let* ((size-align (size-alignment-of
							(car slot)))
					(ssize (car size-align))
					(salign (cadr size-align)))
				       (if (not (zero? (remainder size
							   salign)))
					   (set! size
						 (+ size
						    (- salign (remainder size
								  salign)))))
				       (set! size (+ size ssize))
				       (set! align (max align salign))))
			 (uors-slots type))
		     `(,size ,align)))
	       ((isa-procp? type) (size-alignment-of 'procedure))
	       ((isa-pointer? type) (size-alignment-of 'pointer))
	       ((isa-array? type)
		(let ((size-align (size-alignment-of (array-type type))))
		     `(,(* (array-size type) (car size-align))
		       ,(cadr size-align))))
	       (else (error 'size-alignment-of "Mystery type: ~s" type)))))

;;; A method for loading a type which takes an object, an offset, and an
;;; index (only for arrays) as it's arguments is returned by the following
;;; function.

(define (TO-GET-TYPE type)
    (let ((base (base-type type)))
	 (cond ((getprop base 'to-get))
	       ((isa-array? base)
		`(lambda (x y i)
			 (,(to-get-type (array-type base)) x
			  (+ y (* ,(size-of (array-type base)) i)))))
	       ((isa-pointer? base)
		`(lambda (x y)
			 (cons ',base
			       (,(to-get-type 'pointer) x y))))
	       ((isa-procp? base)
		`(lambda (x y)
			 (cons ',base (,(to-get-type 'pointer) x y))))
	       (else #f))))

;;; A method for storing a type which takes an object, an offset, an index
;;; (only for arrays), and a new value as it's arguments is returned by the
;;; following function.

(define (TO-SET!-TYPE type)
    (let ((base (base-type type)))
	 (cond ((getprop base 'to-set!))
	       ((isa-array? base)
		`(lambda (x y i z)
			 (,(to-set!-type (array-type base)) x
			  (+ y (* ,(size-of (array-type base)) i))
			  z)))
	       ((isa-pointer? base)
		`(lambda (x y z)
			 (,(to-set!-type 'pointer) x y
			  (,(to-check-type  base) z))))
	       ((isa-procp? base)
		`(lambda (x y z)
			 (,(to-set!-type 'pointer) x y
			  (,(to-check-type base) z))))
	       (else #f))))

;;; A method for checking a type and returning the "raw" value which takes an
;;; object as it's argument is returned by the following function.

(define (TO-CHECK-TYPE type)
    (let ((base (base-type type)))
	 (if (or (isa-pointer? base) (isa-procp? base))
	     (uis "CHK-" base)
	     '(lambda (x) x))))

;;; The symbol that is used as the type tag for objects is returned by the
;;; following procedure.  It returns #f when there is no type tag.

(define (TYPE-TAG type)
    (let ((base (base-type type)))
	 (if (or (isa-pointer? base) (isa-procp? base))
	     base
	     #f)))

;;; Converts a list of strings or symbols into an upper-case uninterned symbol.

(define (UIS . syms)
    (string->uninterned-symbol
	(list->string
	    (let loop ((syms syms))
		 (if syms
		     (append (map char-upcase
				  (string->list
				      (if (symbol? (car syms))
					  (symbol->string (car syms))
					  (car syms))))
			     (loop (cdr syms)))
		     '())))))

;;; Scheme code for type definitions is emitted by the following procedure
;;; which is called with a list of all type names, a list of definition
;;; only types, and a list of read-only types, and the filename/modulename
;;; prefix.

(define (EMIT-TYPEDEFS types define-only read-only type-file-root)
    (let ((check (open-output-file (string-append type-file-root ".sc")))
	  (external (open-output-file (string-append type-file-root ".sch")))
	  (type-module (uis type-file-root)))
	 
	 (define (EMIT-TYPE type read-only)
		 (cond ((isa-pointer? type)
			(emit-chk-procs type def-print)
			(cond ((or (isa-union? (pointer-to type))
				   (isa-struct? (pointer-to type)))
			       (emit-struct-procs type read-only
				   type-file-root))
			      ((isa-array? (pointer-to type))
			       (emit-array-procs type read-only def-print))))
		       ((isa-procp? type)
			(emit-chk-procs type def-print))))
	 
	 (define (DEF-PRINT exp)
		 (pp exp check)
		 (newline check)
		 (pp `(define-external ,(cadr exp) ,type-module) external)
		 (newline external))
	 
	 (format check "(module ~a)~%~%" type-module)
	 (for-each
	     (lambda (type)
		     (unless (or (memq type define-only)
				 (not (eq? type (base-type type))))
			     (emit-type type (memq type read-only))))
	     types)
	 (close-port check)
	 (close-port external)))	    

;;; Checking functions for procedure pointer types are emitted by the
;;; following procedure.  The arguments are the object type and the procedure
;;; to print the definitions.

(define (EMIT-CHK-PROCS type def-print)
    (def-print `(define (,(uis "CHK-" (type-tag type)) x)
			(if (and (pair? x) (eq? (car x) ',(type-tag type)))
			    (cdr x)
			    (error ',(uis "CHK-" (type-tag type))
				   "Argument is incorrect type: ~s" x))))
    (def-print `(define (,(uis "ISA-" (type-tag type) "?") x)
			(and (pair? x) (eq? (car x) ',(type-tag type))))))

;;; Access functions for array types are generated by the following procedure.
;;; The arguments are the object type, a read-only flag, and the function to
;;; print the definitions.

(define (EMIT-ARRAY-PROCS pointer read-only def-print)
    (let* ((type (pointer-to pointer))
	   (size (array-size type))
	   (entry-type (array-type type))
	   (chk (to-check-type pointer)))
	  (def-print `(define (,(uis type "-LENGTH") x)
			      (quotient (string-length (,chk x))
				  ,(size-of entry-type))))
	  (cond ((or (isa-struct? entry-type) (isa-union? entry-type))
		 (def-print
		     `(define (,(uis type "->" entry-type "-LIST") x)
			      (let* ((array (,chk x))
				     (asize (string-length array))
				     (esize ,(size-of entry-type)))
				    (let loop ((x 0))
					 (if (eq? x asize)
					     '()
					     (cons (cons ',(pointed-to-by
							       entry-type)
							 (substring array
							     x (+ x esize)))
						   (loop (+ x esize))))))))
		 (def-print
		     `(define (,(uis entry-type "-LIST->" type) x)
			      (cons ',pointer
				    (apply string-append
					   (map ,(to-check-type
						     (pointed-to-by
							 entry-type))
						x))))))
		(else
		 (def-print `(define (,type x i)
				     (,(to-get-type type) (,chk x) 0 i)))
		 (def-print
		     `(define (,(uis type "->" entry-type "-LIST") x)
			      (let loop ((i 0)
					 (count (,(uis type "-LENGTH") x)))
				   (if (eq? i count)
				       '()
				       (cons (,type x i)
					     (loop (+ i 1) count))))))
		 (def-print
		     `(define (,(uis entry-type "-LIST->" type) l)
			      (let loop ((l l)
					 (i 0)
					 (a (,(uis "MAKE-" type)
					     ,@(if (eq? size 0)
						   '((length l))
						   '()))))
				   (if l
				       (begin (,(uis type "!") a i (car l))
					      (loop (cdr l) (+ i 1) a))
				       a))))
		 (def-print
		     `(define (,(uis type "!") x i z)
			      (,(to-set!-type type) (,chk x) 0 i z)))
		 (def-print
		     `(define (,(uis "MAKE-" type)
			       ,@(if (eq? size 0) '(x) '()))
			      (cons ',pointer
				    (make-string
					(* ,(size-of entry-type)
					   ,(if (eq? size 0) 'x	size))
					(integer->char 0)))))))))

;;; Write the source file containing the struct definition.  

(define (EMIT-STRUCT-PROCS pointer read-only type-file-root)
    (let* ((type (pointer-to pointer))
	   (slots (uors-slots type)))
	  (if slots
	      (let* ((type-module (list->string
				      (map char-downcase
					   (string->list
					       (symbol->string type)))))
		     (code-port (open-output-file
				    (string-append type-module ".sc")))
		     (extern-port (open-output-file
				      (string-append type-module ".sch"))))
		    
		    (define (DEF-PRINT exp)
			    (pp exp code-port)
			    (newline code-port)
			    (format extern-port "(define-external ~s ~a)~%"
				    (cadr exp) type-module))
		    
		    (format code-port "(module ~a)~%" type-module)
		    (format code-port "(include ~s)~%"
			    (string-append type-file-root ".sch"))
		    (def-print `(define (,(uis "MAKE-" type))
					(cons ',pointer
					      (make-string
						  ,(aligned-size-of type)
						  (integer->char 0)))))
		    (slot-getset type type 0 pointer read-only def-print)
		    (close-port code-port)
		    (close-port extern-port)))))

;;; Slot access functions for a structure are created by the following
;;; function.

(define (SLOT-GETSET type preamble offset base-type read-only def-print)
    
    (define (EMIT-PROCS type name offset)
	    (let ((index (if (isa-array? type) '(i) '())))
		 (def-print
		     `(define (,(uis preamble "-" name) x ,@index)
			      (,(to-get-type type)
			       (,(to-check-type base-type) x)
			       ,offset
			       ,@index)))
		 (unless read-only
			 (def-print
			     `(define (,(uis preamble "-" name "!") x
				       ,@index y)
				      (,(to-set!-type type)
				       (,(to-check-type base-type) x)
				       ,offset
				       ,@index
				       y))))))
    
    (let loop ((slots (uors-slots type)) (offset offset))
	 (if slots
	     (let* ((slot-type (caar slots))
		    (slot-name (cadar slots))
		    (size-align (size-alignment-of slot-type))
		    (size (car size-align))
		    (align (cadr size-align)))
		   (unless (zero? (remainder offset align))
			   (set! offset (+ offset (- align (remainder offset
							       align)))))
		  (cond ((or (isa-union? slot-type) (isa-struct? slot-type))
			 (slot-getset slot-type
			     (uis preamble "-" slot-name)
			     offset base-type read-only def-print))
			(else (emit-procs slot-type slot-name offset)))
		  (loop (cdr slots)
			(if (isa-union? type)
			    offset
			    (+ offset size)))))))
