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

(module test07)

(define-external (chk testnum result expected) testchk)

(define (test07)

    (chk 300 (>= 1 2) #F)
    (chk 301 (>= 2 1) #T)
    (chk 302 (>= 2 3) #F)
    (chk 303 (>= 3 2) #T)
    (chk 304 (>= -1 2) #F)
    (chk 305 (>= -2 1) #F)
    (chk 306 (>= -2 3) #F)
    (chk 307 (>= -3 2) #F)
    (chk 308 (>= 1 -2) #T)
    (chk 309 (>= 2 -1) #T)
    (chk 310 (>= 2 -3) #T)
    (chk 311 (>= 3 -2) #T)
    (chk 312 (>= -1 -2) #T)
    (chk 313 (>= -2 -1) #F)
    (chk 314 (>= -2 -3) #T)
    (chk 315 (>= -3 -2) #F)
    (chk 316 (>= 2 2) #T)
    (chk 317 (>= -2 -2) #T)

    (chk 320 (max 1 2) 2)
    (chk 321 (max 2 1) 2)
    (chk 322 (max 2 3) 3)
    (chk 323 (max 3 2) 3)
    (chk 324 (max -1 2) 2)
    (chk 325 (max -2 1) 1)
    (chk 326 (max -2 3) 3)
    (chk 327 (max -3 2) 2)
    (chk 328 (max 1 -2) 1)
    (chk 329 (max 2 -1) 2)
    (chk 330 (max 2 -3) 2)
    (chk 331 (max 3 -2) 3)
    (chk 332 (max -1 -2) -1)
    (chk 333 (max -2 -1) -1)
    (chk 334 (max -2 -3) -2)
    (chk 335 (max -3 -2) -2)
    (chk 336 (max 2 2) 2)
    (chk 337 (max -2 -2) -2)

    (chk 340 (abs 1) 1)
    (chk 341 (abs 0) 0)
    (chk 342 (abs -1) 1)
    (chk 343 (abs -.5) .5)
    (chk 343 (abs 0.0) 0.0)
    (chk 344 (abs .5) .5)

    (chk 360 (min 1 2) 1)
    (chk 361 (min 2 1) 1)
    (chk 362 (min 2 3) 2)
    (chk 363 (min 3 2) 2)
    (chk 364 (min -1 2) -1)
    (chk 365 (min -2 1) -2)
    (chk 366 (min -2 3) -2)
    (chk 367 (min -3 2) -3)
    (chk 368 (min 1 -2) -2)
    (chk 369 (min 2 -1) -1)
    (chk 370 (min 2 -3) -3)
    (chk 371 (min 3 -2) -2)
    (chk 372 (min -1 -2) -2)
    (chk 373 (min -2 -1) -2)
    (chk 374 (min -2 -3) -3)
    (chk 375 (min -3 -2) -3)
    (chk 376 (min 2 2) 2)
    (chk 377 (min -2 -2) -2)

    (chk 380 (+ 1 2) 3)
    (chk 381 (+ 2 1) 3)
    (chk 382 (+ 2 3) 5)
    (chk 383 (+ 3 2) 5)
    (chk 384 (+ -1 2) 1)
    (chk 385 (+ -2 1) -1)
    (chk 386 (+ -2 3) 1)
    (chk 387 (+ -3 2) -1)
    (chk 388 (+ 1 -2) -1)
    (chk 389 (+ 2 -1) 1)
    (chk 390 (+ 2 -3) -1)
    (chk 391 (+ 3 -2) 1)
    (chk 392 (+ -1 -2) -3)
    (chk 393 (+ -2 -1) -3)
    (chk 394 (+ -2 -3) -5)
    (chk 395 (+ -3 -2) -5)
    (chk 396 (+ 2 2) 4)
    (chk 397 (+ -2 -2) -4)

    (chk 400 (* 1 2) 2)
    (chk 401 (* 2 1) 2)
    (chk 402 (* 2 3) 6)
    (chk 403 (* 3 2) 6)
    (chk 404 (* -1 2) -2)
    (chk 405 (* -2 1) -2)
    (chk 406 (* -2 3) -6)
    (chk 407 (* -3 2) -6)
    (chk 408 (* 1 -2) -2)
    (chk 409 (* 2 -1) -2)
    (chk 410 (* 2 -3) -6)
    (chk 411 (* 3 -2) -6)
    (chk 412 (* -1 -2) 2)
    (chk 413 (* -2 -1) 2)
    (chk 414 (* -2 -3) 6)
    (chk 415 (* -3 -2) 6)
    (chk 416 (* 2 2) 4)
    (chk 417 (* -2 -2) 4)

    (chk 420 (>= 4 3 2 1) #T)
    (chk 421 (>= 4 3 2 2) #T)
    (chk 422 (>= 4 3 3 2) #T)
    (chk 423 (>= 4 4 3 2) #T)
    (chk 424 (>= 1 2 3 3 2 1) #F)
    (chk 425 (>= 2 3 3 2 1) #F)

    (chk 430 (max 1) 1)
    (chk 431 (max 1 2 3) 3)
    (chk 432 (max 3 2 1) 3)
    (chk 433 (max 2 3 1) 3)
    (chk 434 (max 1 3 5 7 9 7 5 3 1) 9)

    (chk 440 (min 1) 1)
    (chk 441 (min 1 2 3) 1)
    (chk 442 (min 3 2 1) 1)
    (chk 443 (min 2 3 1) 1)
    (chk 444 (min 1 3 5 7 0 7 5 3 1) 0)

    (chk 450 (+) 0)
    (chk 451 (+ 1 2 3) 6)
    (chk 452 (+ 1 2 3 4 5 6) 21)

    (chk 460 (*) 1)
    (chk 461 (* 1 2 3) 6)
    (chk 462 (* 5 4 3 2) 120))
    
