;;; This module contains the interface routines which are not automatically
;;; generated.

(module xwss)

(include "xlibTYPES.sch")

(define SIZEOF-PTR c-sizeof-tscp)

(define SIZEOF-LONG c-sizeof-long)

(define (C-PTR-REF x y) (c-s2cuint-ref x y))

(define (C-PTR-SET! x y z) (c-s2cuint-set! x y z))

;;; Internal functions.

(define (POINTER-LIST->STRING lst typep)
    (do ((i 0 (+ i 1))
	 (array (make-string (* sizeof-ptr (length lst))))
	 (lst lst (cdr lst)))
	((null? lst)
	 array)
	(c-ptr-set! array (* i sizeof-ptr) (typep (car lst)))))

(define (ARRAY-POINTER->LIST arrayptr count type)
    (let loop ((x 0))
	 (if (eq? x count)
	     '()
	     (cons (if type
		       (cons type (c-ptr-ref arrayptr (* x sizeof-ptr)))
		       (c-ptr-ref arrayptr (* x sizeof-ptr)))
		   (loop (+ x 1))))))

(define-c-external (xfree pointer) void "XFree")

(define (CHK-STRING x)
    (if (string? x) x (error 'CHK-STRING "Argument is incorrect type: ~s" x)))

(define (STRING-LIST->STRING-ARRAY strings)
    
    (define (STRING-WORDS s)
	    (quotient (+ (string-length s) 4) 4))
    
    (define PTR-WORDS (/ sizeof-ptr 4))
    
    (let* ((array (make-string
		      (let loop ((strings strings) (words 0))
			   (if (null? strings)
			       (* words 4)
			       (loop (cdr strings)
				     (+ words ptr-words
					(string-words (car strings))))))
		      (integer->char 0)))
	   (base-word-addr (+ ((lap (x) (_TSCP (DIFFERENCE (INT x) 1))) array)
			      ptr-words)))
	  (let loop ((offset (* (length strings) ptr-words))
		     (ptr 0)
		     (strings strings))
	       (cond (strings
		      (c-ptr-set! array (* ptr sizeof-ptr)
			  (* 4 (+ offset base-word-addr)))
		      (do ((i (* 4 offset))
			   (string (car strings))
			   (j (- (string-length (car strings)) 1) (- j 1)))
			  ((= j -1)
			   (loop (+ offset (string-words string)) (+ ptr 1)
				 (cdr strings)))
			  (c-byte-set! array (+ i j) (c-byte-ref string j))))
		     (else array)))))

(define (STRING-ARRAY->STRING-LIST ptr cnt)
    (let loop ((ptr ptr) (x 0))
	 (if (eq? x cnt)
	     '()
	     (cons (c-string->string (c-ptr-ref ptr 0))
		   (loop (+ ptr sizeof-ptr) (+ x 1))))))

(define (COPY-PTR-TO-STRUCT ptr struct)
    (let* ((array (cdr struct))
	   (size (string-length array)))
	  (let loop ((x 0))
	       (unless (eq? x size)
		       (c-byte-set! array x (c-byte-ref ptr x))
		       (loop (+ x 1))))
	  struct))

(define (ARRAY-STRUCT->LIST ptr count make-struct)
    (let loop ((ptr ptr) (x count))
	 (if (eq? x 0)
	     '()
	     (let* ((struct (copy-ptr-to-struct ptr (make-struct)))
		    (size (string-length (cdr struct))))
		   (cons struct (loop (+ ptr size) (- x 1)))))))

(define (STRUCT-LIST->STRING lst typep)
    (apply string-append
	   (let loop ((lst lst))
		(if (null? lst)
		    '()
		    (cons (typep (car lst)) (loop (cdr lst)))))))

;;; Misc. Utility functions.

(define (NULL-POINTER? x) (or (eq? x 0) (and (pair? x) (eq? (cdr x) 0))))

(define (POINTER-TYPE x) (and (pair? x) (car x)))

(define (POINTER-VALUE x) (and (pair? x) (cdr x)))

(define (TYPE/VALUE->POINTER type value) (cons type value))

;;; Chapter 2.

(define-c-external (xfree* pointer) void "XFree")

(define (YFREE ptr)
    (if (pair? ptr)
	(xfree* (pointer-value ptr))
	(xfree* ptr))
    #f)

;;; Chapter 4.

(define-c-external
    (xquerytree* pointer pointer pointer pointer pointer pointer)
    int
    "XQueryTree")

(define (YQUERYTREE dpy window)
    (let ((dpy (chk-displayp dpy))
	  (root (make-string sizeof-long))
	  (parent (make-string sizeof-long))
	  (children (make-string sizeof-long))
	  (nchildren (make-string sizeof-long)))
	 (if (eq? 0 (xquerytree* dpy window root parent children nchildren))
	     #f
	     (let ((result (list (c-longunsigned-ref root 0)
				 (c-longunsigned-ref parent 0)
				 (array-pointer->list
				     (c-longunsigned-ref children 0)
				     (c-longunsigned-ref nchildren 0)
				     #f))))
		  (xfree (c-longunsigned-ref children 0))
		  result))))

(define-c-external (xgetatomname* pointer int) pointer "XGetAtomName")

(define (YGETATOMNAME dpy atom)
    (let* ((dpy (chk-displayp dpy))
	   (result (xgetatomname* dpy atom))
	   (name (c-string->string result)))
	  (xfree result)
	  name))

(define-c-external (xlistproperties* pointer unsigned pointer) pointer
    "XListProperties")

(define (YLISTPROPERTIES dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (n_props (make-string c-sizeof-int))
	   (atomap (xlistproperties* dpy window n_props))
	   (limit (c-int-ref n_props 0)))
	  (let loop ((i 0))
	       (if (eq? i limit)
		   (begin (xfree atomap)
			  '())
		   (cons (c-unsigned-ref atomap (* i c-sizeof-long))
			 (loop (+ i 1)))))))

;;; Chapter 6.

(define-external (make-xfontstruct) xfontstruct)

(define-c-external (xlistfonts* pointer pointer int pointer) pointer
    "XListFonts")

(define-c-external (xfreefontnames* pointer) void "XFreeFontNames")

(define (YLISTFONTS dpy pattern maxnames)
    (let* ((dpy (chk-displayp dpy))
	   (pattern (chk-string pattern))
	   (count (make-string c-sizeof-int))
	   (charap (xlistfonts* dpy pattern maxnames count))
	   (result (string-array->string-list charap (c-int-ref count 0))))
	  (xfreefontnames* charap)
	  result))

(define-c-external (xlistfontswithinfo* pointer pointer int pointer pointer)
    pointer "XListFontsWithInfo")

(define-c-external (xfreefontinfo* pointer pointer int) void "XFreeFontInfo")

(define (YLISTFONTSWITHINFO dpy pattern maxnames)
    (let* ((dpy (chk-displayp dpy))
	   (pattern (chk-string pattern))
	   (count_ret (make-string c-sizeof-int))
	   (info_ret (make-string sizeof-ptr))
	   (charap (xlistfontswithinfo* dpy pattern maxnames count_ret
		       info_ret))
	   (count (c-int-ref count_ret 0))
	   (info (c-ptr-ref info_ret 0))
	   (result (let loop ((name charap) (info info)
			      (x count))
			(if (eq? x 0)
			    '()
			    (let* ((s (make-xfontstruct))
				   (l (string-length (cdr s))))
				  (do ((i 0 (+ i 1)))
				      ((eq? i l)
				       (cons (list (c-string->string
						       (c-ptr-ref name 0))
						   s)
					     (loop (+ name sizeof-ptr)
						   (+ info i)
						   (- x 1))))
				      (c-byte-set! (cdr s) i
					  (c-byte-ref info i))))))))
	  (xfreefontinfo* charap info count)
	  result))

(define-c-external (xsetfontpath* pointer pointer int) void "XSetFontPath")

(define (YSETFONTPATH dpy directories)
    (let ((dpy (chk-displayp dpy))
	  (charap (string-list->string-array directories)))
	 (xsetfontpath* dpy charap (length directories))
	 directories))

(define-c-external (xgetfontpath* pointer pointer) pointer "XGetFontPath")

(define-c-external (xfreefontpath* pointer) void "XFreeFontPath")

(define (YGETFONTPATH dpy)
    (let* ((dpy (chk-displayp dpy))
	   (npaths (make-string c-sizeof-int))
	   (charap (xgetfontpath* dpy npaths))
	   (result (string-array->string-list charap (c-int-ref npaths 0))))
	  (xfreefontpath* charap)
	  result))

;;; Chapter 7.

(define-c-external (xlistinstalledcolormaps* pointer unsigned pointer)
    pointer "XListInstalledColormaps")

(define (YLISTINSTALLEDCOLORMAPS dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (n_ret (make-string c-sizeof-int))
	   (cmapaddr (xlistinstalledcolormaps* dpy window n_ret))
	   (result (let loop ((x (c-int-ref n_ret 0)) (cmapaddr cmapaddr))
			(if (eq? x 0)
			    '()
			    (cons (c-longunsigned-ref cmapaddr 0)
				  (loop (- x 1)
					(+ cmapaddr c-sizeof-long)))))))
	  (xfree cmapaddr)
	  result))

(define (FAMILY-ADDRESS->XHOSTADDRESS family address)
    (let ((array (string-append (make-string (+ (* 2 c-sizeof-int) sizeof-ptr))
		     address)))
	 (c-int-set! array 0 family)
	 (c-int-set! array c-sizeof-int (string-length address))
	 (c-ptr-set! array (* 2 c-sizeof-int)
	     (+ ((lap (x) (_TSCP (DIFFERENCE (INT x) 1))) array)
		(* 2 c-sizeof-int) (* 2 sizeof-ptr)))
	 array))

;;; Chapter 8.

(define-c-external (xnextevent* pointer pointer) void "XNextEvent")

(define (YNEXTEVENT dpy event)
    (xnextevent* (chk-displayp dpy) (chk-xeventp event))
    #f)

(define-external (fileno port) sc)

(define-c-external (select int pointer pointer pointer pointer) int "select")

(define (YSELECT dpy . ports-time)
    (let* ((timeval (make-string (* 2 c-sizeof-int)))
	   (ports (let loop ((x ports-time))
		       (if (> (length x) 2)
			   (cons (car x) (loop (cdr x)))
			   (begin (c-int-set! timeval 0 (car x))
				  (c-int-set! timeval c-sizeof-int (cadr x))
				  '()))))
	   (nfds 0)
	   (file->result (make-vector 32 #f))
	   (read-mask (let* ((mask (make-string c-sizeof-int))
			     (xfile (xconnectionnumber dpy)))
			    (vector-set! file->result xfile dpy)
			    (c-unsigned-set! mask 0
				(let loop ((ports ports)
					   (mask (bit-lsh 1 xfile))
					   (maxfile xfile))
				     (if ports
					 (let* ((port (car ports))
						(x (fileno (port->stdio-file
							       port))))
					       (vector-set! file->result x
						   port)
					       (loop (cdr ports)
						     (bit-or (bit-lsh 1 x)
							     mask)
						     (max x maxfile)))
					 (begin (set! nfds (+ maxfile 1))
						mask))))
			    mask)))
	  
	  (cond ((not (zero? (xpending dpy))) dpy)
		((let loop ((ports ports))
		      (if ports
			  (if (char-ready? (car ports))
			      (car ports)
			      (loop (cdr ports)))
			  #f)))
		(else (let* ((nfiles (select nfds read-mask 0 0 timeval))
			     (bits (c-unsigned-ref read-mask 0)))
			    (cond  ((positive? nfiles)
				    (let loop ((mask 1) (index 0))
					 (if (not (zero? (bit-and bits mask)))
					     (vector-ref file->result index)
					     (loop (+ mask mask)
						   (+ index 1)))))
				   ((= nfiles -1)
					(apply yselect dpy ports-time))
				   (else #f)))))))

(define-c-external (xgetmotionevents* pointer int int int pointer) pointer
    "XGetMotionEvents")

(define (YGETMOTIONEVENTS dpy window start stop)
    (let* ((dpy (chk-displayp dpy))
	   (nevents_ret (make-string c-sizeof-int))
	   (ptr (xgetmotionevents* dpy window start stop nevents_ret))
	   (result (let loop ((x (c-int-ref nevents_ret 0)) (ptr ptr))
			(if (eq? x 0)
			    '()
			    (cons (list (c-unsigned-ref ptr 0) ; Assumes 32 bit
					(c-shortint-ref ptr 4)
					(c-shortint-ref ptr 6))
				  (loop (- x 1) (+ ptr 6)))))))
	  (xfree ptr)
	  result))

;;; Chapter 9.

(define-c-external (xsetstandardproperties* pointer unsigned  pointer pointer
		       unsigned pointer int pointer) void
    "XSetStandardProperties")

(define (YSETSTANDARDPROPERTIES dpy window name icon_string icon_pixmap
	    commands hints)
    (let ((dpy (chk-displayp dpy))
	  (name (chk-string name))
	  (icon_string (chk-string icon_string))
	  (commands-array (string-list->string-array commands))
	  (hints (chk-xsizehintsp hints)))
	 (xsetstandardproperties* dpy window name icon_string icon_pixmap
	     commands-array (length commands) hints)
	 #f))

(define-c-external (xfetchname* pointer unsigned pointer) int "XFetchName")

(define (YFETCHNAME dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (name_ret (make-string c-sizeof-int))
	   (status (xfetchname* dpy window name_ret))
	   (name (c-unsigned-ref name_ret 0))
	   (string (if (or (eq? status 0) (eq? name 0))
		       #f
		       (c-string->string name))))
	  (if string (xfree name))
	  string))

(define-c-external (xgeticonname* pointer unsigned pointer) int "XGetIconName")

(define (YGETICONNAME dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (name_ret (make-string c-sizeof-int))
	   (status (xgeticonname* dpy window name_ret))
	   (name (c-unsigned-ref name_ret 0))
	   (string (if (or (eq? status 0) (eq? name 0))
		       #f
		       (c-string->string name))))
	  (if string (xfree name))
	  string))

(define-c-external
    (xsetcommand* pointer pointer pointer int) void "XSetCommand")

(define (YSETCOMMAND dpy window commands)
    (let ((dpy (chk-displayp dpy))
	  (commands-array (string-list->string-array commands)))
	 (xsetcommand* dpy window commands-array (length commands))
	 #f))

(define-c-external (xgetwmhints* pointer unsigned) pointer "XGetWMHints")

(define-external (make-xwmhints) xwmhints)

(define (YGETWMHINTS dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (ptr (xgetwmhints* dpy window))
	   (result (if (eq? ptr 0)
		       #f
		       (copy-ptr-to-struct ptr (make-xwmhints)))))
	  (if result (xfree ptr))
	  result))

(define-c-external (xseticonsizes* pointer unsigned pointer int) void
    "XSetIconSizes")

(define (YSETICONSIZES dpy window iconsizelist)
    (let* ((dpy (chk-displayp dpy))
	   (arrayp (struct-list->string iconsizelist chk-xiconsizep)))
	  (xseticonsizes* dpy window arrayp (length iconsizelist))
	  #f))

(define-c-external (xgeticonsizes* pointer unsigned pointer pointer) int
    "XGetIconSizes")

(define-external (make-xiconsize) xiconsize)

(define (YGETICONSIZES dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (array_ret (make-string sizeof-ptr))
	   (count_ret (make-string c-sizeof-int))
	   (status (xgeticonsizes* dpy window array_ret count_ret))
	   (array (c-ptr-ref array_ret 0))
	   (count (c-unsigned-ref count_ret 0))
	   (result (if status
		       (array-struct->list array count make-xiconsize)
		       #f)))
	  (if result (xfree array))
	  result))

(define-c-external (xsetclasshint* pointer unsigned pointer) void
    "XSetClassHint")

(define (YSETCLASSHINT dpy window name-class)
    (let* ((dpy (chk-displayp dpy))
	   (hint (string-list->string-array  name-class)))
	  (xsetclasshint* dpy window hint)
	  #f))

(define-c-external (xgetclasshint* pointer unsigned pointer) int
    "XGetClassHint")

(define (YGETCLASSHINT dpy window)
    (let* ((dpy (chk-displayp dpy))
	   (hint (make-string (* 2 sizeof-ptr)))
	   (status (xgetclasshint* dpy window hint)))
	  (if (eq? status 0)
	      #f
	      (let ((result `(,(c-string->string
				   (c-ptr-ref hint 0))
			      ,(c-string->string
				   (c-ptr-ref hint sizeof-ptr)))))
		   (xfree (c-ptr-ref hint 0))
		   (xfree (c-ptr-ref hint sizeof-ptr))
		   result))))

;;; Chapter 10

(define-c-external (xlookupstring* pointer pointer int pointer pointer) int
    "XLookupString")

(define XLOOKUPSTRING-BUFFER (make-string 50))

(define (YLOOKUPSTRING event . opt)
    (let* ((event (chk-xeventp event))
	   (keysym (if (and opt (car opt)) (make-string sizeof-long) 0))
	   (status (if (= (length opt) 2) (chk-xcomposestatusp (cadr opt)) 0))
	   (result (xlookupstring* event xlookupstring-buffer 50 keysym
		       status)))
	  (if opt
	      (list (substring xlookupstring-buffer 0 result)
		    (if (car opt) (c-longunsigned-ref keysym 0) #f))
	      (substring xlookupstring-buffer 0 result))))
	  
(define (YRMGETRESOURCE db name_str class_str)
  (let ((returns (XrmGetResource db name_str class_str)))
    (if (zero? (car returns))
	#f
	(if (equal? (cadr returns) "String")
	    (c-string->string (chk-charap (xrmvalue-addr (caddr returns))))
	    (error "Unimplemented resource type in YrmGetResource"
		   (cadr returns))))))

(define (YRMMERGEDATABASES new into)
  (let ((into-p (make-string sizeof-ptr)))
    (c-ptr-set! into-p 0 (chk-xrmdatabase into))
    (XrmMergeDatabases new (type/value->pointer 'xrmdatabasep into-p))
    (type/value->pointer 'xrmdatabase (c-ptr-ref into-p 0))))
