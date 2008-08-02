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


.SUFFIXES:
.SUFFIXES:	.o .c .sc .s

SCC = ../scsc/scc
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

Xlibsc.a:	${Sruntimec} ${Sruntime} ${Cruntime} ${Aruntime}
	rm -f Xlibsc.a
	ar q Xlibsc.a ${Cruntime} ${Sruntime} ${Aruntime}
	${RANLIB} Xlibsc.a

libscsrv.a:	Xlibsc.a
	mv Xlibsc.a libscsrv.a

embedded:	${Sruntimec} ${Sruntime} ${Cruntime} ${Aruntime} \
		 embedded.o
	${CC} -o embedded ${CFLAGS} ${Sruntime} ${Cruntime} ${Aruntime} \
	      embedded.o -lm ${LDFLAGS}

Xsci:		${Sruntimec} ${Sruntime} ${Cruntime} ${Aruntime} \
		 sci.c sci.o
	${CC} -o Xsci ${CFLAGS} ${Sruntime} ${Cruntime} ${Aruntime} sci.o \
	      -lm ${LDFLAGS}

Xmv:		Xsci Xlibsc.a
	mv Xsci sci
	mv Xlibsc.a libsc.a

port:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = echo" \
	     Xlibsc.a Xsci Xmv ${Plib}

libsc_p.a:	libsc.a
	mkdir -p saveobj
	mv ${Sruntime} ${Cruntime} ${Aruntime} saveobj/
	rm -f libsc_p.a
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS} -pg" ${Sruntime} ${Cruntime} \
	     ${Aruntime}
	ar q libsc_p.a ${Cruntime} ${Sruntime} ${Aruntime}
	${RANLIB} libsc_p.a
	mv saveobj/* ./
	rmdir saveobj

install-private:
	$(MAKE) "DESTDIR=${DESTDIR}" "LIBDIR=/." "BINDIR=/. LIBSUBDIR=." \
	     "OWNER = -o `whoami`" install

install:
	mkdir --parent ${DESTDIR}${LIBDIR}/${LIBSUBDIR}
	cp libsc.a ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	${RANLIB} ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/libsc.a
	-cp libsc_p.a ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	-${RANLIB} ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/libsc_p.a
	cp objects.h ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	cp options.h ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	cp predef.sc ${DESTDIR}${LIBDIR}/${LIBSUBDIR}/
	mkdir --parent ${DESTDIR}${BINDIR}/
	cp sci ${DESTDIR}${BINDIR}/

clean:
	rm -f ${Sruntime} ${Cruntime} ${Aruntime} sci.o embedded.o \
	      *.CKP *.BAK *.S2C core Xsci Xlibsc.a

clean-sc-to-c:
	rm -f ${Sruntimec} sci.c

noprogs:
	rm -f Xsci Xlibsc.a sci libsc.a libsc_p.a embedded libscsrv.a

srcdist:
	rdist -c README *.c *.h *.s *.sc makefile ${destdir}

bindist:
	rdist -c README makefile makefile-tail predef.sc objects.h \
	      libsc.a ${Plib} sci ${destdir}

all:
	$(MAKE) "CC = ${CC}" "CFLAGS = ${CFLAGS}" "SCC = ${SCC}" \
	     "SCCFLAGS = ${SCCFLAGS}" Xlibsc.a Xsci Xmv ${Plib}

srclinks:
	for x in ${Cruntimec} ${Chfiles} ${Sruntimec} ${Sruntimesc} ${Smisc}; \
	    do ln -s ${SRCDIR}/$$x $$x;\
	done
	rm options.h
