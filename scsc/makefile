#
#  Build the SCHEME->C compiler.
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

all:

prefix=/usr/local
LIBDIR=${prefix}/lib
BINDIR=${prefix}/bin
## previously value was LIBSUBDIR = schemetoc
LIBSUBDIR = scheme2c

INSTALL = install
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}


.SUFFIXES:
.SUFFIXES:	.o .c .sc .s

SCC = s2cc
SCCFLAGS = 

SRCDIR = ../../scsc
RTDIR = ../scrt
RT = ${RTDIR}/libs2c.a

# Defaults for configuring s2cc and Xs2cc commands.

SCL = 80
SCMH = 40

scsc = main.sc closeana.sc lambdaexp.sc plist.sc transform.sc expform.sc \
       readtext.sc miscexp.sc macros.sc compile.sc lap.sc gencode.sc \
       callcode.sc lambdacode.sc misccode.sc

scc = main.c closeana.c lambdaexp.c plist.c transform.c expform.c \
      readtext.c miscexp.c macros.c compile.c lap.c gencode.c \
       callcode.c lambdacode.c misccode.c

sco = main.o closeana.o lambdaexp.o plist.o transform.o expform.o \
      readtext.o miscexp.o macros.o compile.o lap.o gencode.o \
      callcode.o lambdacode.o misccode.o

scsch = expform.sch gencode.sch lambdaexp.sch lap.sch miscexp.sch plist.sch

.SUFFIXES:
.SUFFIXES:	.o .sc .c

.sc.c:
	${SCC} -C $*.sc

.c.o:
	${CC} -c ${CFLAGS} -I${RTDIR} $*.c

sc-to-c:	${scc}

Xs2ccomp:	${scc} ${sco} ${RT}
	${CC} -o Xs2ccomp ${CFLAGS} ${sco} ${RT} -lm ${LDFLAGS}

Xmv:
	mv Xs2ccomp s2ccomp

port:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = echo"  Xs2ccomp
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = echo"  Xmv

s2cc:
	echo '#! /bin/sh' \
	 > $*
	echo '${LIBDIR}/${LIBSUBDIR}/s2ccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ${LIBDIR}/${LIBSUBDIR} $$*' \
	 >> $*
	chmod +x $*

install: s2cc # s2ccomp
	${INSTALL} -d ${DESTDIR}${BINDIR}
	${INSTALL_SCRIPT} s2cc ${DESTDIR}${BINDIR}
	ln -sf s2cc ${DESTDIR}${BINDIR}/scc
	${INSTALL} -d ${DESTDIR}${LIBDIR}/${LIBSUBDIR}
	${INSTALL_PROGRAM} s2ccomp ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/

clean:
	rm -f ${sco} *.BAK *.CKP scltext.* *.S2C

clean-sc-to-c:
	rm -f ${scc}

noprogs:
	rm -f s2ccomp Xs2ccomp

all: s2cc
	$(MAKE) "SCC = ${SCC}" "RTDIR = ${RTDIR}" "CFLAGS = ${CFLAGS}" \
		Xs2ccomp Xmv

srclinks:
	for x in ${scsc} ${scc} ${scsch}; \
	    do ln -s ${SRCDIR}/$$x $$x;\
	done
	echo '#! /bin/sh' > s2cc
	echo `pwd`'/s2ccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ' `pwd`'/${RTDIR} $$*' >> s2cc
	chmod +x s2cc
	echo '#! /bin/sh' > Xs2cc
	echo `pwd`'/Xs2ccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ' `pwd`'/${RTDIR} $$*' >> Xs2cc
	chmod +x Xs2cc
