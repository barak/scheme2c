#
# SCHEME->C
#
# HP9000s300 assembly code.
#

# Copyright (c) 1989-1993 Hewlett-Packard Development Company, L.P.
#		All Rights Reserved

# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
# 
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
# 
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
#

#
# sc_a2to5d2to7
#
#   sc_a2to5d2to7( a )
# will return the contents of A2, ..., A5, D2, ..., D7 starting at address 'a'.
#
#
	text
	global	_sc_a2to5d2to7
	even
_sc_a2to5d2to7:
	link.l	%a6,&-4
	mov.l   %a0,(%sp)
	mov.l	(%a0),%a2
	mov.l	4(%a0),%a3
	mov.l	8(%a0),%a4
	mov.l	12(%a0),%a5
	mov.l	16(%a0),%d2
	mov.l	20(%a0),%d3
	mov.l	24(%a0),%d4
	mov.l	28(%a0),%d5
	mov.l	32(%a0),%d6
	mov.l	36(%a0),%d7
	unlk	%a6
	rts
