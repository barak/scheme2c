prefix=/usr/local
LIBDIR=${prefix}/lib
BINDIR=${prefix}/bin
LIBSUBDIR=scheme2c
DOCDIR=$(prefix)/doc/scheme2c
MANDIR=$(prefix)/man

INSTALL = install
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}

.SUFFIXES:
.SUFFIXES: .sc .c

SCSRC = cdecl.sc const.sc extern.sc typedef.sc
CSRC = cdecl.c const.c extern.c typedef.c
MISC = sizeof.c sch.sc README document load.sc

SRCDIR = ../../cdecl

SCC = ../scsc/Xs2cc

.sc.c:
	${SCC} ${CFLAGS} ${LDFLAGS} -C $*.sc

all:	
	$(MAKE) "SCC=${SCC}" "SRCDIR=${SRCDIR}" s2cdecl s2csizeof s2ch

s2cdecl: ${CSRC}
	${SCC} ${CFLAGS} ${LDFLAGS} -o $@ $^

s2csizeof:	sizeof.c
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

s2ch: sch.sc
	${SCC} ${CFLAGS} ${LDFLAGS} -o $@ $^

install: s2ch s2cdecl
	${INSTALL} -d ${DESTDIR}${BINDIR}
	${INSTALL_PROGRAM} s2ch s2cdecl ${DESTDIR}${BINDIR}/
	ln -sf s2ch ${DESTDIR}${BINDIR}/sch

clean:
	rm -f *.o *.CKP *.BAK *.S2C core

clean-sc-to-c:
	rm -f ${CSRC}

noprogs:
	rm -f s2cdecl s2csizeof s2ch

srclinks:
	for x in ${SCSRC} ${MISC}; \
	   do ln -s ${SRCDIR}/$$x $$x; \
	done

.PHONY: all noprogs clean-sc-to-c scrlinks
