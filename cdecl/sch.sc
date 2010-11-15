;;; LaHaShem HaAretz U'Mloah
;;; Copyright 1993, 1994, and 1995 University of Toronto. All rights reserved.
;;; Copyright 1996 Technion. All rights reserved.
;;; Copyright 1996 and 1997 University of Vermont. All rights reserved.
;;; Copyright 1997, 1998, 1999, 2000, and 2001 NEC Research Institute, Inc. All
;;; rights reserved.
;;; Copyright 2002, 2003, 2004, 2005, and 2006 Purdue University. All rights
;;; reserved.

(module sch (main main))

(define-external (fopen name access) sc)

(define-external (fclose file) sc)

(define *panic?* #t)

(define *program* #f)

(define (panic format-string . &rest)
 (cond (*panic?*
	(format stderr-port "~a: ~a~%"
		*program* (apply format #f format-string &rest))
	(exit -1))
       (else (apply error 'panic format-string &rest))))


(define (replace-extension pathname extension)
 (when (string=? pathname "-") (panic "Invalid pathname"))
 (string-append (strip-extension pathname) "." extension))

(define (can-open-file-for-input? pathname)
 (or (string=? pathname "-")
     (let ((file (fopen pathname "r")))
      (unless (string? file) (fclose file))
      (not (string? file)))))

(eval-when (compile load eval)
 (define (first x) (car x))
 (define (second x) (cadr x))
 (define (third x) (caddr x))
 (define (fourth x) (cadddr x))
 (define (fifth x) (car (cddddr x)))
 (define (sixth x) (cadr (cddddr x)))
 (define (seventh x) (caddr (cddddr x)))
 (define (eighth x) (cadddr (cddddr x)))
 (define (ninth x) (car (cddddr (cddddr x))))
 (define (tenth x) (cadr (cddddr (cddddr x))))
 (define (eleventh x) (caddr (cddddr (cddddr x))))
 (define (twelfth x) (cadddr (cddddr (cddddr x))))
 (define (rest x) (cdr x)))

(define (last x) (if (null? (rest x)) (first x) (last (rest x))))


(eval-when (compile load eval)
 (define (every p l . &rest)
  (let loop ((l l) (&rest &rest))
   (or (null? l)
       (and (apply p (first l) (map first &rest))
	    (loop (rest l) (map rest &rest)))))))


(eval-when (compile load eval)
 (define (map-reduce g i f l . ls)
  (if (null? l)
      i
      (apply map-reduce
	     g
	     (g i (apply f (car l) (map car ls)))
	     f
	     (cdr l)
	     (map cdr ls)))))


(eval-when (compile load eval)
 (define (reduce f l i)
  (cond ((null? l) i)
	((null? (rest l)) (first l))
	(else (let loop ((l (rest l)) (c (first l)))
	       (if (null? l) c (loop (rest l) (f c (first l)))))))))


(define (some p l . &rest)
 (let loop ((l l) (&rest &rest))
  (and (not (null? l))
       (or (apply p (first l) (map first &rest))
	   (loop (rest l) (map rest &rest))))))


(define (read-line . port)
 (if (null? port) (set! port (current-input-port)) (set! port (first port)))
 (let loop ((chars '()))
  (let ((char (read-char port)))
   (if (eof-object? char)
       (if (null? chars) char (list->string (reverse chars)))
       (if (char=? char #\newline)
	   (list->string (reverse chars))
	   (loop (cons char chars)))))))


(define (default-extension pathname extension)
 (when (string=? pathname "-") (panic "Invalid pathname"))
 (if (has-extension? pathname)
     pathname
     (string-append pathname "." extension)))


(define (strip-directory pathname)
 (when (string=? pathname "-") (panic "Invalid pathname"))
 (if (has-directory? pathname)
     (let ((l (string->list pathname)))
      (substring pathname
		 (- (length l) (positionv #\/ (reverse l)))
		 (length l)))
     pathname))


(define (string-upcase string)
 (list->string (map char-upcase (string->list string))))


(define (positionv x l)
 (let loop ((l l) (i 0))
  (cond ((null? l) #f)
	((eqv? x (first l)) i)
	(else (loop (rest l) (+ i 1))))))


(define (has-directory? pathname)
 (when (string=? pathname "-") (panic "Invalid pathname"))
 (let loop ((l (reverse (string->list pathname))))
  (and (not (null? l)) (or (char=? (first l) #\/) (loop (rest l))))))


(define (strip-extension pathname)
 (when (string=? pathname "-") (panic "Invalid pathname"))
 (let loop ((l (reverse (string->list pathname))))
  (cond ((or (null? l) (char=? (first l) #\/)) pathname)
	((char=? (first l) #\.) (list->string (reverse (rest l))))
	(else (loop (rest l))))))


(define (has-extension? pathname)
 (when (string=? pathname "-") (panic "Invalid pathname"))
 (let loop ((l (reverse (string->list pathname))))
  (and (not (null? l))
       (not (char=? (first l) #\/))
       (or (char=? (first l) #\.) (loop (rest l))))))


(define-macro define-command
 (lambda (form expander)
  (unless (and (list? form)
	       (>= (length form) 2)
	       (valid-command-arguments? (second form)))
   (error 'define-command "Improper DEFINE-COMMAND: ~s" form))
  (define (valid-command-arguments? l)
   (define (valid-optional-parameter? l)
    (and (list? l)
	 (= (length l) 4)
	 (symbol? (first l))
	 (string? (second l))))
   (define (valid-required-parameter? l)
    (and (list? l)
	 (= (length l) 3)
	 (symbol? (first l))
	 (string? (second l))))
   (define (order-ok-optional? l)
    (or (null? l)
	(and (eq? (first (first l)) 'optional)
	     (order-ok-optional? (rest l)))
	(and (eq? (first (first l)) 'rest)
	     (null? (rest l)))))
   (define (order-ok-required? l)
    (or (null? l)
	(and (eq? (first (first l)) 'required)
	     (order-ok-required? (rest l)))
	(and (eq? (first (first l)) 'optional)
	     (order-ok-optional? (rest l)))
	(and (eq? (first (first l)) 'rest)
	     (null? (rest l)))))
   (define (order-ok? l)
    (or (null? l)
	(and (or (eq? (first (first l)) 'any-number)
		 (eq? (first (first l)) 'at-least-one)
		 (eq? (first (first l)) 'at-most-one)
		 (eq? (first (first l)) 'exactly-one))
	     (order-ok? (rest l)))
	(and (eq? (first (first l)) 'required)
	     (order-ok-required? (rest l)))
	(and (eq? (first (first l)) 'optional)
	     (order-ok-optional? (rest l)))
	(and (eq? (first (first l)) 'rest)
	     (null? (rest l)))))
   (and
    (list? l)
    (>= (length l) 1)
    (symbol? (first l))
    (every
     (lambda (l)
      (and
       (list? l)
       (>= (length l) 1)
       (or (and (or (eq? (first l) 'exactly-one) (eq? (first l) 'at-most-one))
		(>= (length l) 2)
		(every
		 (lambda (l)
		  (and (list? l)
		       (>= (length l) 2)
		       (string? (first l))
		       (symbol? (second l))
		       (every valid-optional-parameter? (rest (rest l)))))
		 (rest l)))
	   (and (or (eq? (first l) 'at-least-one) (eq? (first l) 'any-number))
		(>= (length l) 2)
		(every
		 (lambda (l)
		  (and (list? l)
		       (>= (length l) 2)
		       (string? (first l))
		       (symbol? (second l))
		       (every valid-required-parameter? (rest (rest l)))))
		 (rest l)))
	   (and (or (eq? (first l) 'required) (eq? (first l) 'rest))
		(= (length l) 2)
		(valid-required-parameter? (second l)))
	   (and (eq? (first l) 'optional)
		(= (length l) 2)
		(valid-optional-parameter? (second l))))))
     (rest l))
    (order-ok? (rest l))))
  (define (command-usage l)
   (define (command-usage1 l)
    (let ((s (let loop ((l l))
	      (define (command-usage l)
	       (string-append
		"-"
		(first l)
		(let loop ((l (rest (rest l))))
		 (cond
		  ((null? l) "")
		  ((null? (rest l)) (string-append " " (second (first l))))
		  (else
		   (string-append " " (second (first l)) (loop (rest l))))))))
	      (if (null? (rest l))
		  (command-usage (first l))
		  (string-append
		   (command-usage (first l)) "|" (loop (rest l)))))))
     (if (= (length l) 1) s (string-append "[" s "]"))))
   (if (null? l)
       ""
       (case (first (first l))
	((any-number)
	 (string-append " ["
			(command-usage1 (rest (first l)))
			"]*"
			(command-usage (rest l))))
	((at-least-one)
	 (string-append " ["
			(command-usage1 (rest (first l)))
			"]+"
			(command-usage (rest l))))
	((at-most-one)
	 (string-append
	  " [" (command-usage1 (rest (first l))) "]" (command-usage (rest l))))
	((exactly-one)
	 (string-append
	  " " (command-usage1 (rest (first l))) (command-usage (rest l))))
	((required)
	 (string-append " "
			(second (second (first l)))
			(command-usage (rest l))))
	((optional)
	 (string-append " ["
			(second (second (first l)))
			(command-usage (rest l)) "]"))
	((rest) (string-append " [" (second (second (first l))) "]*"))
	(else (fuck-up)))))
  (define (command-bindings l)
   (if (null? l)
       '()
       (case (first (first l))
	((any-number at-least-one)
	 (append (map-reduce append
			     '()
			     (lambda (l)
			      (cons (list (second l) #f)
				    (map (lambda (l) (list (first l) ''()))
					 (rest (rest l)))))
			     (rest (first l)))
		 (command-bindings (rest l))))
	((at-most-one exactly-one)
	 (append (map-reduce
		  append
		  '()
		  (lambda (l)
		   (cons (list (second l) #f)
			 (map (lambda (l) (list (first l) (fourth l)))
			      (rest (rest l)))))
		  (rest (first l)))
		 (command-bindings (rest l))))
	((required) (cons (list (first (second (first l))) #f)
			  (command-bindings (rest l))))
	((optional) (cons (list (first (second (first l)))
				(fourth (second (first l))))
			  (command-bindings (rest l))))
	((rest) (cons (list (first (second (first l))) ''())
		      (command-bindings (rest l))))
	(else (fuck-up)))))
  (define (command-keyword-argument-parser l)
   (cons
    `(let loop ()
      (unless (null? arguments)
       (cond
	,@(let loop ((l l))
	   (if (null? l)
	       '(((string=? (first arguments) "-usage") (usage)))
	       (case (first (first l))
		((any-number at-least-one)
		 (append
		  (map (lambda (l)
			`((string=? (first arguments)
				    ,(string-append "-" (first l)))
			  (set! arguments (rest arguments))
			  (set! ,(second l) #t)
			  ,@(map-reduce
			     append
			     '()
			     (lambda (l)
			      `((when (null? arguments) (usage))
				(set! ,(first l)
				      (cons (,(third l) (first arguments) usage)
					    ,(first l)))
				(set! arguments (rest arguments))))
			     (rest (rest l)))
			  (loop)))
		       (rest (first l)))
		  (loop (rest l))))
		((at-most-one exactly-one)
		 (append
		  (map (lambda (l1)
			`((string=? (first arguments)
				    ,(string-append "-" (first l1)))
			  (set! arguments (rest arguments))
			  (when (or ,@(map second (rest (first l)))) (usage))
			  (set! ,(second l1) #t)
			  ,@(map-reduce
			     append
			     '()
			     (lambda (l)
			      `((when (null? arguments) (usage))
				(set! ,(first l)
				      (,(third l) (first arguments) usage))
				(set! arguments (rest arguments))))
			     (rest (rest l1)))
			  (loop)))
		       (rest (first l)))
		  (loop (rest l))))
		((required optional rest) (loop (rest l)))
		(else (fuck-up))))))))
    (let loop ((l l))
     (if (null? l)
	 '()
	 (case (first (first l))
	  ((at-least-one exactly-one)
	   (cons `(unless (or ,@(map second (rest (first l)))) (usage))
		 (loop (rest l))))
	  ((at-most-one any-number required optional rest) (loop (rest l)))
	  (else (fuck-up)))))))
  (define (command-positional-argument-parser l)
   (let loop ((l l))
    (if (null? l)
	'((unless (null? arguments) (usage)))
	(case (first (first l))
	 ((any-number at-least-one at-most-one exactly-one) (loop (rest l)))
	 ((required)
	  (append
	   `((when (null? arguments) (usage))
	     (set! ,(first (second (first l)))
		   (,(third (second (first l))) (first arguments) usage))
	     (set! arguments (rest arguments)))
	   (loop (rest l))))
	 ((optional)
	  (cons `(unless (null? arguments)
		  (set! ,(first (second (first l)))
			(,(third (second (first l))) (first arguments) usage))
		  (set! arguments (rest arguments)))
		(loop (rest l))))
	 ((rest)
	  `((let loop ()
	     (unless (null? arguments)
	      (set! ,(first (second (first l)))
		    (cons (,(third (second (first l))) (first arguments) usage)
			  ,(first (second (first l)))))
	      (set! arguments (rest arguments))
	      (loop)))))
	 (else (fuck-up))))))
  (expander
   `(define (,(first (second form)) arguments)
     (define (string-argument string usage) string)
     (define (integer-argument string usage)
      (let ((integer (string->number string)))
       (unless (integer? integer) (usage))
       integer))
     (define (real-argument string usage)
      (let ((real (string->number string)))
       (unless (real? real) (usage))
       real))
     (let ((program (first arguments)))
      (define (usage)
       (format
	stderr-port
	,(string-append "usage: ~a" (command-usage (rest (second form))) "~%")
	program)
       (exit -1))
      (set! arguments (rest arguments))
      (let ,(command-bindings (rest (second form)))
       ,@(command-keyword-argument-parser (rest (second form)))
       ,@(command-positional-argument-parser (rest (second form)))
       ,@(rest (rest form)))))
   expander)))


(set! *program* "sch")
(set! *panic?* #t)

;;; Procedures

(define (proper-module-declaration main? pathname pathnames)
 (if main?
     `(module ,(string->symbol
		(string-upcase (strip-directory (strip-extension pathname))))
	      (with ,@(append '(QobiScheme xlib)
			      (map (lambda (pathname)
				    (string->symbol
				     (string-upcase
				      (strip-directory
				       (strip-extension pathname)))))
				   pathnames)))
	      (main main))
     `(module ,(string->symbol
		(string-upcase
		 (strip-directory (strip-extension pathname)))))))

(define (module-declaration pathname)
 (call-with-input-file (default-extension pathname "sc")
  (lambda (input-port)
   (let ((expression (read input-port)))
    (and (not (eof-object? expression))
	 (list? expression)
	 (>= (length expression) 1)
	 (eq? (first expression) 'module)
	 expression)))))

(define (enforce-proper-module-declaration main? pathname pathnames)
 (let ((module-declaration (module-declaration pathname)))
  (unless (and module-declaration
	       (equal? module-declaration
		       (proper-module-declaration main? pathname pathnames)))
   (let ((lines (call-with-input-file (default-extension pathname "sc")
		 (lambda (input-port)
		  (when module-declaration
		   (read input-port)
		   ;; To get rid of the newline at the end of the module
		   ;; declaration.
		   (read-line input-port))
		  (let loop ((lines '()) (line (read-line input-port)))
		   (if (eof-object? line)
		       (reverse lines)
		       (loop (cons line lines) (read-line input-port))))))))
    (call-with-output-file (default-extension pathname "sc")
     (lambda (output-port)
      (pp (proper-module-declaration main? pathname pathnames) output-port)
      (newline output-port)
      (for-each (lambda (line)
		 (display line output-port)
		 (newline output-port))
		lines)))))))

(define (symbols-in-file pathname)
 (let ((symbols '()))
  (define (walk expression)
   (cond
    ((symbol? expression)
     (unless (memq expression symbols)
      (set! symbols (cons expression symbols))))
    ((pair? expression) (walk (first expression)) (walk (rest expression)))))
  (call-with-input-file (default-extension pathname "sc")
   (lambda (input-port)
    (let loop ()
     (let ((expression (read input-port)))
      (unless (eof-object? expression) (walk expression) (loop))))))
  symbols))

(define (needed-definitions-in-file pathname symbols)
 (unless (equal? (module-declaration pathname)
		 (proper-module-declaration #f pathname '()))
  (panic "~a contains a missing or improper MODULE declaration" pathname))
 (call-with-input-file (default-extension pathname "sc")
  (lambda (input-port)
   (let ((module (second (read input-port))))
    (let loop ()
     (let ((definition (read input-port)))
      (if (eof-object? definition)
	  '()
	  (cond
	   ((and (pair? definition)
		 (eq? (first definition) 'define)
		 (pair? (rest definition))
		 (memq (if (pair? (second definition))
			   (first (second definition))
			   (second definition))
		       symbols))
	    (cons `(define-external ,(second definition) ,module) (loop)))
	   ((and (pair? definition)
		 (eq? (first definition) 'define-structure)
		 (or (memq (string->symbol
			    (string-append
			     "MAKE-"
			     (symbol->string (second definition))))
			   symbols)
		     (memq (string->symbol
			    (string-append
			     (symbol->string (second definition))
			     "?"))
			   symbols)
		     (some (lambda (slot)
			    (or (memq (string->symbol
				       (string-append
					(symbol->string (second definition))
					"-"
					(symbol->string slot)))
				      symbols)
				(memq (string->symbol
				       (string-append
					"SET-"
					(symbol->string (second definition))
					"-"
					(symbol->string slot)
					"!"))
				      symbols)
				(memq (string->symbol
				       (string-append
					"LOCAL-SET-"
					(symbol->string (second definition))
					"-"
					(symbol->string slot)
					"!"))
				      symbols)))
			   (rest (rest definition)))))
	    (cons `(define-structure-external ,module ,@(rest definition))
		  (loop)))
	   (else (loop))))))))))

(define (needed-definitions-in-files pathnames symbols)
 (reduce append
	 (map (lambda (pathname) (needed-definitions-in-file pathname symbols))
	      pathnames)
	 '()))

(define (read-target pathname)
 (call-with-input-file pathname
  (lambda (input-port)
   (let loop ()
    (let ((definition (read input-port)))
     (if (eof-object? definition) '() (cons definition (loop))))))))

;;; Top Level

(define-command (main (at-most-one ("main" main?))
		      (required (pathname "pathname" string-argument))
		      (rest (pathnames "pathname" string-argument)))
 ;; needs work: This is needed because of a bug in QobiScheme.
 (let ((pathnames (reverse pathnames)))
  (enforce-proper-module-declaration main? pathname pathnames)
  (for-each
   (lambda (pathname) (enforce-proper-module-declaration #f pathname '()))
   pathnames)
  (let* ((symbols (symbols-in-file pathname))
	 (target-pathname (replace-extension pathname "sch"))
	 (new-definitions (needed-definitions-in-files pathnames symbols)))
   (when (or (not (can-open-file-for-input? target-pathname))
	     (not (equal? new-definitions (read-target target-pathname))))
    (call-with-output-file target-pathname
     (lambda (output-port)
      (for-each (lambda (definition)
		 (write definition output-port)
		 (newline output-port))
		new-definitions)))))))

;;; Tam V'Nishlam Shevah L'El Borei Olam
