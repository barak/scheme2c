;;; Scheme->C
;;;
;;; This file contains external definitions for use in compiling the
;;; the interpreter.

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


(define-external *DEBUG-ON-ERROR* scdebug)

(define-external *READING-STDIN* screp)

(define-external *RESULT* scdebug)

(define-external (ABORT) sc)

(define-external (BACKTRACE-ERROR-HANDLER id format-string . args) scdebug)

(define-external (CHARREADY file) sc)

(define-external (CLEANUP-UNREFERENCED) scrt4)

(define-external (COND-MACRO exp) scexpnd1)

(define-external CURRENT-INPUT-PORT-VALUE scrt5)

(define-external CURRENT-OUTPUT-PORT-VALUE scrt5)

(define-external (DOBACKTRACE start stop lines port) scdebug)

(define-external (EXPAND x) scexpand)

(define-external (FCLOSE file) sc)

(define-external (FFLUSH file) sc)

(define-external (FGETC file) sc)

(define-external (FILENO file) sc)

(define-external (FOPEN name access) sc)

(define-external (FORMATNUMBER number type length) sc)

(define-external (FPUTC character file) sc)

(define-external (INPUTREADY mask) sc)

(define-external (INSTALL-EXPANDER keyword function) scexpand)

(define-external (ISLIST l min . max) scexpand)

(define-external (JUMP-TO-SCHEME2C . x) screp)

(define-external (LET-MACRO exp) scexpnd2)

(define-external (ERROR-DISPLAY x) sc)

(define-external (ON-INTERRUPT sig) scdebug)

(define-external OPEN-FILE-PORTS scrt5)

(define-external (OSEXIT code) sc)

(define-external (OSSIGNAL signal handler) sc)

(define-external (OSSYSTEM command) sc)

(define-external PROCEED scdebug)

(define-external (QUASIQUOTATION d exp) scqquote)

(define-external (READ-DATUM port) scrt7)

(define-external (READNUMBER string type) sc)

(define-external (REMOVEFILE name) sc)

(define-external (RENAME old-name new-name) sc)

(define-external (SCHEME-MODE) sc)

(define-external (SET-SCHEME-MODE! mode) sc)

(define-external SYSTEM-FILE-MASK scrt6)

(define-constant SIG_IGN 1)

(define-constant SIGINT 2)

;;; Return the current value of sc_stacktrace.  It is not defined as a C
;;; external as the compiler emitted extern might conflict with the one
;;; in objects.h.

(define-in-line (STACKTRACE) ((lap () (S2CUINT_TSCP "sc_stacktrace"))))

(define-external STDIN sc)

(define-external STDOUT sc)

(define-external STDERR sc)

(define-external (TMPNAM) sc)

(define-external TRACE-LEVEL scdebug)

(define-external UNDEFINED "sc" "undefined")

(define-external (VALID-SCHEME-POINTER? x) "" "sc_schemepointer")

(define-external WHENFREED "sc" "whenfreed")

(define-external (WRITE/DISPLAY obj readable port) scrt7)
