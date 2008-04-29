;;;
;;; Scheme->C test program
;;;
;;;
;;; Test functions for basic Scheme functions.
;;;

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

(module test06)

(define-external (chk testnum result expected) testchk)

(define (test06)

    (chk 181 (odd? -1) #t)
    (chk 182 (odd? 0) #f)
    (chk 183 (odd? 1) #t)
    (chk 184 (odd? -2) #f)
    (chk 185 (odd? 2) #f)

    (chk 191 (even? -1) #f)
    (chk 192 (even? 0) #t)
    (chk 193 (even? 1) #f)
    (chk 194 (even? -2) #t)
    (chk 195 (even? 2) #t)

    (chk 201 (exact? -1) #t)
    (chk 202 (exact? 0) #t)
    (chk 203 (exact? 1) #t)
    (chk 204 (exact? -2.5) #f)
    (chk 205 (exact? 0.0) #f)
    (chk 206 (exact? 1.5) #f)

    (chk 211 (inexact? -1) #f)
    (chk 212 (inexact? 0) #f)
    (chk 213 (inexact? 1) #f)
    (chk 214 (inexact? -2.5) #t)
    (chk 215 (inexact? 0.0) #t)
    (chk 216 (inexact? 1.5) #t)

    (chk 220 (= 1 2) #F)
    (chk 221 (= 2 1) #F)
    (chk 222 (= 2 3) #F)
    (chk 223 (= 3 2) #F)
    (chk 224 (= -1 2) #F)
    (chk 225 (= -2 1) #F)
    (chk 226 (= -2 3) #F)
    (chk 227 (= -3 2) #F)
    (chk 228 (= 1 -2) #F)
    (chk 229 (= 2 -1) #F)
    (chk 230 (= 2 -3) #F)
    (chk 231 (= 3 -2) #F)
    (chk 232 (= -1 -2) #F)
    (chk 233 (= -2 -1) #F)
    (chk 234 (= -2 -3) #F)
    (chk 235 (= -3 -2) #F)
    (chk 236 (= 2 2) #T)
    (chk 237 (= -2 -2) #T)

    (chk 240 (< 1 2) #T)
    (chk 241 (< 2 1) #F)
    (chk 242 (< 2 3) #T)
    (chk 243 (< 3 2) #F)
    (chk 244 (< -1 2) #T)
    (chk 245 (< -2 1) #T)
    (chk 246 (< -2 3) #T)
    (chk 247 (< -3 2) #T)
    (chk 248 (< 1 -2) #F)
    (chk 249 (< 2 -1) #F)
    (chk 250 (< 2 -3) #F)
    (chk 251 (< 3 -2) #F)
    (chk 252 (< -1 -2) #F)
    (chk 253 (< -2 -1) #T)
    (chk 254 (< -2 -3) #F)
    (chk 255 (< -3 -2) #T)
    (chk 256 (< 2 2) #F)
    (chk 257 (< -2 -2) #F)

    (chk 260 (> 1 2) #F)
    (chk 261 (> 2 1) #T)
    (chk 262 (> 2 3) #F)
    (chk 263 (> 3 2) #T)
    (chk 264 (> -1 2) #F)
    (chk 265 (> -2 1) #F)
    (chk 266 (> -2 3) #F)
    (chk 267 (> -3 2) #F)
    (chk 268 (> 1 -2) #T)
    (chk 269 (> 2 -1) #T)
    (chk 270 (> 2 -3) #T)
    (chk 271 (> 3 -2) #T)
    (chk 272 (> -1 -2) #T)
    (chk 273 (> -2 -1) #F)
    (chk 274 (> -2 -3) #T)
    (chk 275 (> -3 -2) #F)
    (chk 276 (> 2 2) #F)
    (chk 277 (> -2 -2) #F)

    (chk 280 (<= 1 2) #T)
    (chk 281 (<= 2 1) #F)
    (chk 282 (<= 2 3) #T)
    (chk 283 (<= 3 2) #F)
    (chk 284 (<= -1 2) #T)
    (chk 285 (<= -2 1) #T)
    (chk 286 (<= -2 3) #T)
    (chk 287 (<= -3 2) #T)
    (chk 288 (<= 1 -2) #F)
    (chk 289 (<= 2 -1) #F)
    (chk 290 (<= 2 -3) #F)
    (chk 291 (<= 3 -2) #F)
    (chk 292 (<= -1 -2) #F)
    (chk 293 (<= -2 -1) #T)
    (chk 294 (<= -2 -3) #F)
    (chk 295 (<= -3 -2) #T)
    (chk 296 (<= 2 2) #T)
    (chk 297 (<= -2 -2) #T)

    (chk 300 (= 1 1 1 1) #T)
    (chk 301 (= 2 1 1 1) #F)
    (chk 302 (= 1 1 1 2) #F)

    (chk 310 (< 1 2 3 4) #T)
    (chk 311 (< 2 2 3 4) #F)
    (chk 312 (< 2 3 3 4) #F)
    (chk 313 (< 2 3 4 4) #F)

    (chk 320 (> 4 3 2 1) #T)
    (chk 321 (> 4 3 2 2) #F)
    (chk 322 (> 4 3 3 2) #F)
    (chk 323 (> 4 4 3 2) #F)

    (chk 330 (<= 1 2 3 4) #T)
    (chk 331 (<= 2 2 3 4) #T)
    (chk 332 (<= 2 3 3 4) #T)
    (chk 333 (<= 2 3 4 4) #T)
    (chk 334 (<= 1 2 3 3 2 1) #F)
    (chk 335 (<= 1 2 3 3 2) #F))
