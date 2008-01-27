;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;

;*           Copyright 1989-1993 Digital Equipment Corporation
;*                         All Rights Reserved
;*
;* Permission to use, copy, and modify this software and its documentation is
;* hereby granted only under the following terms and conditions.  Both the
;* above copyright notice and this permission notice must appear in all copies
;* of the software, derivative works or modified versions, and any portions
;* thereof, and both notices must appear in supporting documentation.
;*
;* Users of this software agree to the terms and conditions set forth herein,
;* and hereby grant back to Digital a non-exclusive, unrestricted, royalty-free
;* right and license under any changes, enhancements or extensions made to the
;* core functions of the software, including but not limited to those affording
;* compatibility with other hardware or software environments, but excluding
;* applications which incorporate this software.  Users further agree to use
;* their best efforts to return to Digital any such changes, enhancements or
;* extensions that they make and inform Digital of noteworthy uses of this
;* software.  Correspondence should be provided to Digital at:
;* 
;*                       Director of Licensing
;*                       Western Research Laboratory
;*                       Digital Equipment Corporation
;*                       250 University Avenue
;*                       Palo Alto, California  94301  
;* 
;* This software may be distributed (but not offered for sale or transferred
;* for compensation) to third parties, provided such third parties agree to
;* abide by the terms and conditions of this notice.  
;* 
;* THE SOFTWARE IS PROVIDED "AS IS" AND DIGITAL EQUIPMENT CORP. DISCLAIMS ALL
;* WARRANTIES WITH REGARD TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF
;* MERCHANTABILITY AND FITNESS.   IN NO EVENT SHALL DIGITAL EQUIPMENT
;* CORPORATION BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
;* DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
;* PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
;* ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
;* SOFTWARE.

(module test05)

(define-external (chk testnum result expected) testchk)

(define (test05)

;;; 6.5  Numbers
     
    (chk 051 (number? '()) #f)
    (chk 052 (number? '#()) #f)
    (chk 053 (number? '(1 2)) #f)
    (chk 054 (number? '#(1 2)) #f)
    (chk 055 (number? 'x) #f)
    (chk 056 (number? "x") #f)
    (chk 057 (number? '#\a) #f)
    (chk 058 (number? (lambda (x) x)) #f)
    (chk 059 (number? #f) #f)
    (chk 060 (number? #t) #f)
    (chk 061 (number? -1) #t)
    (chk 062 (number? 0) #t)
    (chk 063 (number? 1) #t)
    (chk 064 (number? -5) #t)
    (chk 065 (number? 0.0) #t)
    (chk 066 (number? 1.5) #t)
     
    (chk 071 (complex? '()) #f)
    (chk 072 (complex? '#()) #f)
    (chk 073 (complex? '(1 2)) #f)
    (chk 074 (complex? '#(1 2)) #f)
    (chk 075 (complex? 'x) #f)
    (chk 076 (complex? "x") #f)
    (chk 077 (complex? '#\a) #f)
    (chk 078 (complex? (lambda (x) x)) #f)
    (chk 079 (complex? #f) #f)
    (chk 080 (complex? #t) #f)
    (chk 081 (complex? -1) #t)
    (chk 082 (complex? 0) #t)
    (chk 083 (complex? 1) #t)
    (chk 084 (complex? -2.5) #t)
    (chk 085 (complex? 0.0) #t)
    (chk 086 (complex? 1.5) #t)
    
    (chk 091 (real? '()) #f)
    (chk 092 (real? '#()) #f)
    (chk 093 (real? '(1 2)) #f)
    (chk 094 (real? '#(1 2)) #f)
    (chk 095 (real? 'x) #f)
    (chk 096 (real? "x") #f)
    (chk 097 (real? '#\a) #f)
    (chk 098 (real? (lambda (x) x)) #f)
    (chk 099 (real? #f) #f)
    (chk 100 (real? #t) #f)
    (chk 101 (real? -1) #t)
    (chk 102 (real? 0) #t)
    (chk 103 (real? 1) #t)
    (chk 104 (real? -2.5) #t)
    (chk 105 (real? 0.0) #t)
    (chk 106 (real? 1.5) #t)

    (chk 111 (rational? '()) #f)
    (chk 112 (rational? '#()) #f)
    (chk 113 (rational? '(1 2)) #f)
    (chk 114 (rational? '#(1 2)) #f)
    (chk 115 (rational? 'x) #f)
    (chk 116 (rational? "x") #f)
    (chk 117 (rational? '#\a) #f)
    (chk 118 (rational? (lambda (x) x)) #f)
    (chk 119 (rational? #f) #f)
    (chk 120 (rational? #t) #f)
    (chk 121 (rational? -1) #t)
    (chk 122 (rational? 0) #t)
    (chk 123 (rational? 1) #t)
    (chk 124 (rational? -2.5) #t)
    (chk 125 (rational? 0.0) #t)
    (chk 126 (rational? 1.5) #t)

    (chk 131 (integer? '()) #f)
    (chk 132 (integer? '#()) #f)
    (chk 133 (integer? '(1 2)) #f)
    (chk 134 (integer? '#(1 2)) #f)
    (chk 135 (integer? 'x) #f)
    (chk 136 (integer? "x") #f)
    (chk 137 (integer? '#\a) #f)
    (chk 138 (integer? (lambda (x) x)) #f)
    (chk 139 (integer? #f) #f)
    (chk 140 (integer? #t) #f)
    (chk 141 (integer? -1) #t)
    (chk 142 (integer? 0) #t)
    (chk 143 (integer? 1) #t)
    (chk 144 (integer? -2.5) #f)
    (chk 145 (integer? 0.0) #t)
    (chk 146 (integer? 1.5) #f)

    (chk 151 (zero? -1) #f)
    (chk 152 (zero? 0) #t)
    (chk 153 (zero? 1) #f)
    (chk 154 (zero? -2.5) #f)
    (chk 155 (zero? 0.0) #t)
    (chk 156 (zero? 1.5) #f)

    (chk 161 (positive? -1) #f)
    (chk 162 (positive? 0) #f)
    (chk 163 (positive? 1) #t)
    (chk 164 (positive? -2.5) #f)
    (chk 165 (positive? 0.0) #f)
    (chk 166 (positive? 1.5) #t)

    (chk 171 (negative? -1) #t)
    (chk 172 (negative? 0) #f)
    (chk 173 (negative? 1) #f)
    (chk 174 (negative? -2.5) #t)
    (chk 175 (negative? 0.0) #f)
    (chk 176 (negative? 1.5) #f))
