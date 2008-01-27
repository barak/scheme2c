;;; External and in-line declarations from expform.sc

(define-in-line (ID-PRINTNAME id) (get id 'printname))

(define-in-line (SET-ID-PRINTNAME! id name) (put id 'printname name))

(define-in-line (ID-VNAME id) (get id 'vname))

(define-in-line (SET-ID-VNAME! id name) (put id 'vname name))

(define-in-line (ID-CNAME id) (get id 'cname))

(define-in-line (SET-ID-CNAME! id name) (put id 'cname name))

(define-in-line (ID-MODULE id) (get id 'module))

(define-in-line (SET-ID-MODULE! id name) (put id 'module name))

(define-in-line (ID-USE id) (get id 'use))

(define-in-line (SET-ID-USE! id tag) (put id 'use tag))

(define-in-line (ID-TYPE id) (get id 'type))

(define-in-line (SET-ID-TYPE! id tag) (put id 'type tag))

(define-in-line (ID-HEAP id) (get id 'heap))

(define-in-line (SET-ID-HEAP! id flag) (put id 'heap flag))

(define-in-line (ID-DISPLAY id) (get id 'display))

(define-in-line (SET-ID-DISPLAY! id flag) (put id 'display flag))

(define-in-line (ID-BOUNDID id) (get id 'boundid))

(define-in-line (SET-ID-BOUNDID id value) (put id 'boundid value))

(define-in-line (ID-LAMBDA id) (get id 'lambda))

(define-in-line (SET-ID-LAMBDA! id lambda-id) (put id 'lambda lambda-id))

(define-in-line (ID-EXTERNAL id) (get id 'external))

(define-in-line (SET-ID-EXTERNAL! id flag) (put id 'external flag))

(define-in-line (ID-DEFINED id) (get id 'defined))

(define-in-line (SET-ID-DEFINED! id flag) (put id 'defined flag))

(define-in-line (ID-VALUE id) (get id 'value))

(define-in-line (SET-ID-VALUE! id x) (put id 'value x))

(define-in-line (ID-SET! id) (get id 'set!))

(define-in-line (SET-ID-SET!! id flag) (put id 'set! flag))

(define-in-line (ID-REFS id) (get id 'refs))

(define-in-line (SET-ID-REFS! id cnt) (put id 'refs cnt))

(define-in-line (ID-CALLS id) (get id 'calls))

(define-in-line (SET-ID-CALLS! id cnt) (put id 'calls cnt))

(define-in-line (ID-ALIAS id) (get id 'alias))
    
(define-in-line (SET-ID-ALIAS! id label) (put id 'alias label))

(define-in-line (ID-GOTOS id) (get id 'gotos))

(define-in-line (SET-ID-GOTOS! id cnt) (put id 'gotos cnt))

(define-in-line (ID-UNDEFREF id) (get id 'undefref))

(define-in-line (SET-ID-UNDEFREF! id var) (put id 'undefref var))

(define-in-line (ID-GLOBAL id) (get id 'global))

(define-in-line (SET-ID-GLOBAL! id alpha) (put id 'global alpha))

(define-external (VNAME exp) expform)

(define-external (CNAME exp) expform)

(define-external (LCHEXNAME exp) expform)

(define-external (NEWV var . pl) expform)

(define-external (BOUND var) expform)
