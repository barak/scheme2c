#
# This file is used to compile the runtime library for SCHEME->C.
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

SCC = ../scsc/s2cc
SCCFLAGS = 

SRCDIR = ../../scrt

Cruntime = scinit.o apply.o callcc.o cio.o heap.o objects.o mtraps.o

Cruntimec = scinit.c apply.c callcc.c cio.c heap.c objects.c mtraps.c

Chfiles = scinit.h apply.h callcc.h cio.h heap.h objects.h options.h

Sruntime = scdebug.o sceval.o scexpand.o scexpnd1.o scexpnd2.o \
	   scqquote.o screp.o \
	   scrt1.o scrt2.o scrt3.o scrt4.o scrt5.o scrt6.o scrt7.o scrtuser.o

Sruntimec = scdebug.c sceval.c scexpand.c scexpnd1.c scexpnd2.c \
            scqquote.c screp.c \
            scrt1.c scrt2.c scrt3.c scrt4.c scrt5.c scrt6.c scrt7.c scrtuser.c

Sruntimesc = scdebug.sc sceval.sc scexpand.sc scexpnd1.sc scexpnd2.sc \
            scqquote.sc screp.sc \
            scrt1.sc scrt2.sc scrt3.sc scrt4.sc scrt5.sc scrt6.sc scrt7.sc \
	    scrtuser.sc

Smisc = embedded.c predef.sc repdef.sc sci.sc sci.c

${Sruntimec} sci.c:	predef.sc

${Sruntime} sci.o:	options.h objects.h

${Cruntime}:	${Chfiles}

.sc.c:
	${SCC} -C ${SCCFLAGS} $*.sc

.c.o:
	${CC} -c ${CFLAGS} -I. $*.c

.s.o:
	${CC} -c ${CFLAGS} $*.s

sc-to-c:	${Sruntimec} sci.c

c-to-o:		${Sruntimec} ${Sruntime} ${Cruntime}

s-to-o:		${Aruntime}

Xlibs2c.a:	${Sruntimec} ${Sruntime} ${Cruntime} ${Aruntime}
	rm -f Xlibs2c.a
	ar q Xlibs2c.a ${Cruntime} ${Sruntime} ${Aruntime}
	${RANLIB} Xlibs2c.a

libs2csrv.a:	Xlibs2c.a
	mv Xlibs2c.a libs2csrv.a

embedded:	${Sruntimec} ${Sruntime} ${Cruntime} ${Aruntime} \
		 embedded.o
	${CC} -o embedded ${CFLAGS} ${Sruntime} ${Cruntime} ${Aruntime} \
	      embedded.o -lm ${LDFLAGS}

Xs2ci:		${Sruntimec} ${Sruntime} ${Cruntime} ${Aruntime} \
		 sci.c sci.o
	${CC} -o Xs2ci ${CFLAGS} ${Sruntime} ${Cruntime} ${Aruntime} sci.o \
	      -lm ${LDFLAGS}

Xmv:		Xs2ci Xlibs2c.a
	mv Xs2ci s2ci
	mv Xlibs2c.a libs2c.a

port:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = echo" \
	     Xlibs2c.a Xs2ci Xmv ${Plib}

libs2c_p.a:	libs2c.a
	mkdir -p saveobj
	mv ${Sruntime} ${Cruntime} ${Aruntime} saveobj/
	rm -f libs2c_p.a
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS} -pg" ${Sruntime} ${Cruntime} \
	     ${Aruntime}
	ar q libs2c_p.a ${Cruntime} ${Sruntime} ${Aruntime}
	${RANLIB} libs2c_p.a
	mv saveobj/* ./
	rmdir saveobj

install-private:
	$(MAKE) "DESTDIR=${DESTDIR}" "LIBDIR=/." "BINDIR=/. LIBSUBDIR=." \
	     "OWNER = -o `whoami`" install

install:
	${INSTALL} -d ${DESTDIR}${LIBDIR}/${LIBSUBDIR}
	${INSTALL_DATA} libs2c.a ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	ln -sf  libs2c.a ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/libsc.a
	-${INSTALL_DATA} libs2c_p.a ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/ \
	 && ln -sf  libs2c_p.a ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/libsc_p.a
	${INSTALL_DATA} objects.h ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	${INSTALL_DATA} options.h ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	${INSTALL_DATA} predef.sc ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	${INSTALL} -d ${DESTDIR}${BINDIR}
	${INSTALL_PROGRAM} s2ci ${DESTDIR}${BINDIR}/
	ln -sf s2ci ${DESTDIR}${BINDIR}/sci

clean:
	rm -f ${Sruntime} ${Cruntime} ${Aruntime} sci.o embedded.o \
	      *.CKP *.BAK *.S2C core Xs2ci Xlibs2c.a

clean-sc-to-c:
	rm -f ${Sruntimec} sci.c

noprogs:
	rm -f Xs2ci Xlibs2c.a s2ci libs2c.a libs2c_p.a embedded libs2csrv.a

srcdist:
	rdist -c README *.c *.h *.s *.sc makefile ${destdir}

bindist:
	rdist -c README makefile makefile-tail predef.sc objects.h \
	      libs2c.a ${Plib} s2ci ${destdir}

all:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = ${SCC}" \
	     "SCCFLAGS = ${SCCFLAGS}" Xlibs2c.a Xs2ci Xmv ${Plib}

srclinks:
	for x in ${Cruntimec} ${Chfiles} ${Sruntimec} ${Sruntimesc} ${Smisc}; \
	    do ln -s ${SRCDIR}/$$x $$x;\
	done
	rm options.h
