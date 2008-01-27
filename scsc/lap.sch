;;; External functions from lap.sc

(define-external (EMIT-GLOBAL-LAP code) lap)

(define-external (EMIT-LAP code) lap)

(define-external (SAVE-CURRENT-LAP lap) lap)

(define-external (USE-LAP-TEMP) lap)

(define-external (DROP-LAP-TEMP temp) lap)

(define-external (SAVE-LAP-TEMPS) lap)

(define-external (RESTORE-LAP-TEMPS state) lap)

(define-external (DONE-LAP lap) lap)
