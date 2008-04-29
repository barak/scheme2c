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

(module test08)

(define-external (chk testnum result expected) testchk)

(define (test08)

    (chk 420 (- 1 2) -1)
    (chk 421 (- 2 1) 1)
    (chk 422 (- 2 3) -1)
    (chk 423 (- 3 2) 1)
    (chk 424 (- -1 2) -3)
    (chk 425 (- -2 1) -3)
    (chk 426 (- -2 3) -5)
    (chk 427 (- -3 2) -5)
    (chk 428 (- 1 -2) 3)
    (chk 429 (- 2 -1) 3)
    (chk 430 (- 2 -3) 5)
    (chk 431 (- 3 -2) 5)
    (chk 432 (- -1 -2) 1)
    (chk 433 (- -2 -1) -1)
    (chk 434 (- -2 -3) 1)
    (chk 435 (- -3 -2) -1)
    (chk 436 (- 2 2) 0)
    (chk 437 (- -2 -2) 0)

    (chk 440 (/ 1 2) .5)
    (chk 441 (/ 2 1) 2)
    (chk 442 (/ 2 3) .6666666666666667)
    (chk 443 (/ 3 2) 1.5)
    (chk 444 (/ -1 2) -.5)
    (chk 445 (/ -2 1) -2)
    (chk 446 (/ -2 3) -.6666666666666667)
    (chk 447 (/ -3 2) -1.5)
    (chk 448 (/ 1 -2) -.5)
    (chk 449 (/ 2 -1) -2)
    (chk 450 (/ 2 -3) -.6666666666666667)
    (chk 451 (/ 3 -2) -1.5)
    (chk 452 (/ -1 -2) .5)
    (chk 453 (/ -2 -1) 2)
    (chk 454 (/ -2 -3) .6666666666666667)
    (chk 455 (/ -3 -2) 1.5)
    (chk 456 (/ 2 2) 1)
    (chk 457 (/ -2 -2) 1)

    (chk 460 (quotient 1 2) 0)
    (chk 461 (quotient 2 1) 2)
    (chk 462 (quotient 2 3) 0)
    (chk 463 (quotient 3 2) 1)
    (chk 464 (quotient -1 2) 0)
    (chk 465 (quotient -2 1) -2)
    (chk 466 (quotient -2 3) 0)
    (chk 467 (quotient -3 2) -1)
    (chk 468 (quotient 1 -2) 0)
    (chk 469 (quotient 2 -1) -2)
    (chk 470 (quotient 2 -3) 0)
    (chk 471 (quotient 3 -2) -1)
    (chk 472 (quotient -1 -2) 0)
    (chk 473 (quotient -2 -1) 2)
    (chk 474 (quotient -2 -3) 0)
    (chk 475 (quotient -3 -2) 1)
    (chk 476 (quotient 2 2) 1)
    (chk 477 (quotient -2 -2) 1)

    (chk 480 (remainder 1 2) 1)
    (chk 481 (remainder 2 1) 0)
    (chk 482 (remainder 2 3) 2)
    (chk 483 (remainder 3 2) 1)
    (chk 484 (remainder -1 2) -1)
    (chk 485 (remainder -2 1) 0)
    (chk 486 (remainder -2 3) -2)
    (chk 487 (remainder -3 2) -1)
    (chk 488 (remainder 1 -2) 1)
    (chk 489 (remainder 2 -1) 0)
    (chk 490 (remainder 2 -3) 2)
    (chk 491 (remainder 3 -2) 1)
    (chk 492 (remainder -1 -2) -1)
    (chk 493 (remainder -2 -1) 0)
    (chk 494 (remainder -2 -3) -2)
    (chk 495 (remainder -3 -2) -1)
    (chk 496 (remainder 2 2) 0)
    (chk 497 (remainder -2 -2) 0)

    (chk 500 (+ -2 -2) -4)
    (chk 501 (+ -2 -1.4) -3.4)
    (chk 502 (+ -2 2) 0)
    (chk 503 (+ -2 2.4) .4)
    (chk 504 (+ -1.4 -2) -3.4)
    (chk 505 (+ -1.4 -1.4) -2.8)
    (chk 506 (+ -1.4 2) .6)
    (chk 507 (+ -1.4 2.4) 1.)
    (chk 508 (+ 2 -2) 0)
    (chk 509 (+ 2 -1.4) .6)
    (chk 510 (+ 2 2) 4)
    (chk 511 (+ 2 2.4) 4.4)
    (chk 512 (+ 2.4 -2) .4)
    (chk 513 (+ 2.4 -1.4) 1.)
    (chk 514 (+ 2.4 2) 4.4)
    (chk 515 (+ 2.4 2.4) 4.8)

    (chk 520 (- -2 -2) 0)
    (chk 521 (- -2 -1.4) -.6)
    (chk 522 (- -2 2) -4)
    (chk 523 (- -2 2.4) -4.4)
    (chk 524 (- -1.4 -2) .6)
    (chk 525 (- -1.4 -1.4) 0.)
    (chk 526 (- -1.4 2) -3.4)
    (chk 527 (- -1.4 2.4) -3.8)
    (chk 528 (- 2 -2) 4)
    (chk 529 (- 2 -1.4) 3.4)
    (chk 530 (- 2 2) 0)
    (chk 531 (- 2 2.4) -.4)
    (chk 532 (- 2.4 -2) 4.4)
    (chk 533 (- 2.4 -1.4) 3.8)
    (chk 534 (- 2.4 2) .4)
    (chk 535 (- 2.4 2.4) 0.)

    (chk 540 (- 1) -1)
    (chk 541 (- 1.3) -1.3)
    (chk 542 (- 3 4 5) -6)
    (chk 543 (- 3 4 5 -6) 0)

    (chk 550 (/ 3) .3333333333)
    (chk 551 (/ 3 4 5) .15)
    (chk 552 (/ 3 4 5 10) .015)

    (chk 580 (modulo 1 2) 1)
    (chk 581 (modulo 2 1) 0)
    (chk 582 (modulo 2 3) 2)
    (chk 583 (modulo 3 2) 1)
    (chk 584 (modulo -1 2) 1)
    (chk 585 (modulo -2 1) 0)
    (chk 586 (modulo -2 3) 1)
    (chk 587 (modulo -3 2) 1)
    (chk 588 (modulo 1 -2) -1)
    (chk 589 (modulo 2 -1) 0)
    (chk 590 (modulo 2 -3) -1)
    (chk 591 (modulo 3 -2) -1)
    (chk 592 (modulo -1 -2) -1)
    (chk 593 (modulo -2 -1) 0)
    (chk 594 (modulo -2 -3) -2)
    (chk 595 (modulo -3 -2) -1)
    (chk 596 (modulo 2 2) 0)
    (chk 597 (modulo -2 -2) 0)

    (chk 600 (modulo 13 4) 1)
    (chk 601 (remainder 13 4) 1)
    (chk 602 (modulo -13 4) 3)
    (chk 603 (remainder -13 4) -1)
    (chk 604 (modulo 13 -4) -3)
    (chk 605 (remainder 13 -4) 1)
    (chk 606 (modulo -13 -4) -1)
    (chk 607 (remainder -13 -4) -1)

    (chk 610 (gcd) 0)
    (chk 611 (gcd 32 -36) 4)
    (chk 612 (gcd -32.0 -36) 4.0)
    (chk 613 (gcd 16 8 4 2 1) 1)
    (chk 614 (gcd 16 8 4 2 0) 2)

    (chk 620 (lcm) 1)
    (chk 621 (lcm 32 -36) 288)
    (chk 622 (lcm 32.0 -36) 288.0)
    (chk 623 (lcm 3 5 7 35) 105))
