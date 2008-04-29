(module test20)

(define (TEST20)
    (with-input-from-file "test20-input.sc"
          (lambda ()
                  (chk 1 (read) '#T)
                  (chk 2 (read) '#T)
                  (chk 3 (read) '#F)
                  (chk 4 (read) '#F)
                  (chk 5 (read) 'APPLE)
                  (chk 6 (read) 'APPLE)
                  (chk 7 (read) '\aPPLE)
                  (chk 8 (read) '\1+)
                  (chk 9 (read) '+)
                  (chk 10 (read) '-)
                  (chk 11 (read) 'A.B)
                  (chk 12 (read) '1)
                  (chk 13 (read) '-1)
                  (chk 14 (read) '1)
                  (chk 15 (read) '3)
                  (chk 16 (read) '9)
                  (chk 17 (read) '161)
                  (chk 18 (read) '3)
                  (chk 19 (read) '9)
                  (chk 20 (read) '161)
                  (chk 21 (read) '1.3)
                  (chk 22 (read) '-1.3)
                  (chk 23 (read) '130.)
                  (chk 24 (read) '-130.)
                  (chk 25 (read) '#\a)
                  (chk 26 (read) '#\A)
                  (chk 27 (read) '#\tab)
                  (chk 28 (read) '#\newline)
                  (chk 29 (read) '#\newline)
                  (chk 30 (read) '#\formfeed)
                  (chk 31 (read) '#\return)
                  (chk 32 (read) '#\space)
                  (chk 33 (read) '#\space)
                  (chk 34 (read) '#\\)
                  (chk 35 (read) '#\space)
                  (chk 36 (read) '#\tab)
                  (chk 37 (read) '"")
                  (chk 38 (read) '"This is a string")
                  (chk 39 (read) '"This is a string with \"embedded\" quote marks")
                  (chk 40 (read) '"This string covers
two lines")
                  (chk 41 (read) '())
                  (chk 42 (read) '(A))
                  (chk 43 (read) '(A . B))
                  (chk 44 (read) '(A B C D))
                  (chk 45 (read) '(A B C D))
                  (chk 46 (read) '((A B) (C D) (E F) (G H)))
                  (chk 47 (read) '(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L))
                  (chk 48 (read) '#())
                  (chk 49 (read) '#(1))
                  (chk 50 (read) '#(1 2 3 4))
                  (chk 51 (read) '#(#(1 2) #(2 3) #(3 4)))
                  (chk 52 (read) '#(A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L M N O P Q R S T U V W X Y Z A B C D E F G H I J K L))
                  (chk 53 (read) ''A)
                  (chk 54 (read) ''(1 2 3))
                  (chk 55 (read) ',B)
                  (chk 56 (read) ',@C)
                  (chk 57 (read) '`(A B C))
                  (chk 58 (read) '`(A ,B ,@C))
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
)))
