;;; External and in-line definitions for lambdaexp.sc

(define-in-line ($LAMBDA? x) (and (pair? x) (eq? (car x) '$lambda)))

(define-in-line ($LAMBDA-ID x) (and ($lambda? x) (cadr x)))

(define-in-line ($LAMBDA-BODY x) (and ($lambda? x) (cddr x)))

(define-in-line (SET-$LAMBDA-BODY! x body) (set-cdr! (cdr x) body))

(define-in-line (LAMBDA-REQVARS id) (get id 'reqvars))

(define-in-line (SET-LAMBDA-REQVARS! id vars) (put id 'reqvars vars))

(define-in-line (LAMBDA-OPTVARS id) (get id 'optvars))

(define-in-line (SET-LAMBDA-OPTVARS! id vars) (put id 'optvars vars))

(define-in-line (LAMBDA-LEXICAL id) (get id 'lexical))

(define-in-line (SET-LAMBDA-LEXICAL! id lexvars) (put id 'lexical lexvars))

(define-in-line (LAMBDA-CALLS id) (get id 'calls))

(define-in-line (SET-LAMBDA-CALLS! id x) (put id 'calls x))

(define-in-line (LAMBDA-GENERATE id) (get id 'generate))

(define-in-line (SET-LAMBDA-GENERATE! id x) (put id 'generate x))

(define-in-line (LAMBDA-CLOSED id) (get id 'closed))

(define-in-line (SET-LAMBDA-CLOSED! id x) (put id 'closed x))

(define-in-line (LAMBDA-DISPLAY-CLOSEP id) (get id 'display-closep))

(define-in-line (SET-LAMBDA-DISPLAY-CLOSEP! id x) (put id 'display-closep x))
    
(define-in-line (LAMBDA-NESTIN id) (get id 'nestin))

(define-in-line (SET-LAMBDA-NESTIN! id nestin) (put id 'nestin nestin))

(define-in-line (LAMBDA-EXITS id) (get id 'exits))

(define-in-line (SET-LAMBDA-EXITS! id exits) (put id 'exits exits))

(define-in-line (LAMBDA-INLINE-TAILS id) (get id 'inline-tails))

(define-in-line (SET-LAMBDA-INLINE-TAILS! id tails)
	(put id 'inline-tails tails))
    
(define-in-line (LAMBDA-STR-CALLS id) (get id 'str-calls))

(define-in-line (SET-LAMBDA-STR-CALLS! id x) (put id 'str-calls x))
    
(define-in-line (LAMBDA-TAIL-CALLS id) (get id 'tail-calls))

(define-in-line (SET-LAMBDA-TAIL-CALLS! id x) (put id 'tail-calls x))
    
(define-in-line (LAMBDA-REAL-CALLS id) (get id 'real-calls))

(define-in-line (SET-LAMBDA-REAL-CALLS! id x) (put id 'real-calls x))

(define-in-line (LAMBDA-CODE-LABEL id) (get id 'code-label))

(define-in-line (SET-LAMBDA-CODE-LABEL! id x) (put id 'code-label x))
    
(define-in-line (LAMBDA-$LAMBDA id) (get id '$lambda))

(define-in-line (SET-LAMBDA-$LAMBDA! id exp) (put id '$lambda exp))

(define-in-line (LAMBDA-NAME id) (get id 'name))

(define-in-line (SET-LAMBDA-NAME! id x) (put id 'name x))
