;;; External and in-line definitions for miscexp.sc

(define-in-line ($CALL? x) (and (pair? x) (eq? (car x) '$call)))

(define-in-line ($CALL-TAIL x) (and ($call? x) (cadr x)))

(define-in-line (SET-$CALL-TAIL! x v) (set-car! (cdr x) v))

(define-in-line ($CALL-FUNC x) (and ($call? x) (caddr x)))

(define-in-line (SET-$CALL-FUNC! x f) (set-car! (cddr x) f))

(define-in-line ($CALL-ARGL x) (and ($call? x) (cdddr x)))

(define-in-line (SET-$CALL-ARGL! x al) (set-cdr! (cddr x) al))

(define-in-line ($LAP? x) (and (pair? x) (eq? (car x) '$lap)))

(define-in-line ($LAP-TYPE x) (and ($lap? x) (cadr x)))

(define-in-line ($LAP-VARS x) (and ($lap? x) (caddr x)))

(define-in-line ($LAP-BODY x) (and ($lap? x) (cdddr x)))

(define-in-line (SET-$LAP-BODY! exp body) (set-cdr! (cddr exp) body))

(define-in-line ($SET? x) (and (pair? x) (eq? (car x) '$set)))

(define-in-line ($SET-ID x) (and ($set? x) (cadr x)))

(define-in-line ($SET-EXP x) (and ($set? x) (caddr x)))

(define-in-line (SET-$SET-EXP! x e) (set-car! (cddr x) e))

(define-in-line ($IF? x) (and (pair? x) (eq? (car x) '$if)))

(define-in-line ($IF-TEST x) (and ($if? x) (cadr x)))

(define-in-line (SET-$IF-TEST! x test) (set-car! (cdr x) test))

(define-in-line ($IF-TRUE x) (and ($if? x) (caddr x)))

(define-in-line (SET-$IF-TRUE! x v) (set-car! (cddr x) v))

(define-in-line ($IF-FALSE x) (and ($if? x) (cadddr x)))

(define-in-line (SET-$IF-FALSE! x v) (set-car! (cdddr x) v))

(define-in-line ($DEFINE? x) (and (pair? x) (eq? (car x) '$define)))

(define-in-line ($DEFINE-ID x) (and ($define? x) (cadr x)))

(define-in-line ($DEFINE-EXP x) (and ($define? x) (caddr x)))

(define-in-line (SET-$DEFINE-EXP! x e) (set-car! (cddr x) e))
