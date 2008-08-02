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


.SUFFIXES:
.SUFFIXES:	.o .c .sc .s

SCC = scc
SCCFLAGS = 

SRCDIR = ../../scsc
RTDIR = ../scrt
RT = ${RTDIR}/libsc.a

# Defaults for configuring scc and Xscc commands.

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

Xsccomp:	${scc} ${sco} ${RT}
	${CC} -o Xsccomp ${CFLAGS} ${sco} ${RT} -lm ${LDFLAGS}

Xmv:
	mv Xsccomp sccomp

port:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = echo"  Xsccomp Xmv

install:
	mkdir -p ${DESTDIR}${BINDIR}/
	echo '#! /bin/sh' > ${DESTDIR}${BINDIR}/scc
	echo '${BINDIR}/sccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ${LIBDIR}/${LIBSUBDIR} $$*' \
	 >> ${DESTDIR}${BINDIR}/scc
	chmod +x ${DESTDIR}${BINDIR}/scc
	cp sccomp ${DESTDIR}${BINDIR}/

clean:
	rm -f ${sco} *.BAK *.CKP scltext.* *.S2C

clean-sc-to-c:
	rm -f ${scc}

noprogs:
	rm -f sccomp Xsccomp

all:
	$(MAKE) "SCC = ${SCC}" "RTDIR = ${RTDIR}" "CFLAGS = ${CFLAGS}" \
		Xsccomp Xmv

srclinks:
	for x in ${scsc} ${scc} ${scsch}; \
	    do ln -s ${SRCDIR}/$$x $$x;\
	done
	echo '#! /bin/sh' > scc
	echo `pwd`'/sccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ' `pwd`'/${RTDIR} $$*' >> scc
	chmod +x scc
	echo '#! /bin/sh' > Xscc
	echo `pwd`'/Xsccomp -scl ${SCL} -scmh ${SCMH} \
	     -cc ${CC} -LIBDIR ' `pwd`'/${RTDIR} $$*' >> Xscc
	chmod +x Xscc
