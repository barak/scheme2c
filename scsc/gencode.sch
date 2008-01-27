;;; External definitions for gencode.sc

(define-external CURRENT-CODE-LAMBDA gencode)

(define-external INIT-MODULES gencode)

(define-external FREE-DISPLAY gencode)

(define-external MAX-DISPLAY gencode)

(define-external EMPTY-CONDITION-INFO gencode)

(define-external GLOBAL-CONDITION-INFO gencode)

(define-external ERROR-ID gencode)

(define-external $_CAR-ERROR-ID gencode)

(define-external $_CDR-ERROR-ID gencode)

(define-external (EXP-GENC loc exp bindings) gencode)	

(define-external (MAKE-LABEL) gencode)

(define-external (CODE-LABEL id) gencode)

(define-external (MAKE-C-GLOBAL) gencode)

(define-external (OPTIONAL-ARGS id) gencode)
 
(define-external (LOOKUP var bindings) gencode)

(define-external (VAR-IN-STACK var) gencode)

(define-external (VAR-IS-GLOBAL var) gencode)
 
(define-external (EMIT-EXTERN var) gencode)

(define-external (VAR-IS-CONSTANT var) gencode)

(define-external (VAR-IS-TOP-LEVEL var) gencode)
