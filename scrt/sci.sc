;;; This file is the "main" program for the SCHEME->C interpreter.

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

(module scint (main start-rep) (top-level))

;;; The following function can be invoked by a "main" program to start a
;;; Scheme interpreter.
;;;
;;; The command line flags recognized are:
;;;
;;;	-e	echo input on the output file
;;;	-nh	don't print the header
;;;	-np	don't print the prompt
;;;	-q	don't print the result
;;;
;;; All other command-line arguments are ignored.

(define (START-REP command-line)    
    (apply read-eval-print command-line))
