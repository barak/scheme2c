.SUFFIXES:
.SUFFIXES: .sc .c

SCSRC = cdecl.sc const.sc extern.sc typedef.sc
CSRC = cdecl.c const.c extern.c typedef.c
MISC = sizeof.c sch.sc README document load.sc

SRCDIR = ../../cdecl

SCC = ../scsc/scc

.sc.c:
	${SCC} -C $*.sc

all:	
	$(MAKE) "SCC=${SCC}" "SRCDIR=${SRCDIR}" cdecl sizeof sch

cdecl: ${CSRC}
	${SCC} -o $@ $^

sizeof:	sizeof.c
	${CC} -o $@ $^

sch: sch.sc
	${SCC} -o $@ $^

clean:
	rm -f *.o *.CKP *.BAK *.S2C core

clean-sc-to-c:
	rm -f ${CSRC}

noprogs:
	rm -f cdecl sizeof sch

srclinks:
	for x in ${SCSRC} ${MISC}; \
	   do ln -s ${SRCDIR}/$$x $$x; \
	done

.PHONY: all noprogs clean-sc-to-c scrlinks
