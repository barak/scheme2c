.SUFFIXES:
.SUFFIXES: .sc .c

SCSRC = cdecl.sc const.sc extern.sc typedef.sc
CSRC = cdecl.c const.c extern.c typedef.c
MISC = sizeof.c sch.sc README document load.sc

SRCDIR = ../../cdecl

SCC = ../scsc/s2cc

.sc.c:
	${SCC} -C $*.sc

all:	
	$(MAKE) "SCC=${SCC}" "SRCDIR=${SRCDIR}" s2cdecl s2csizeof s2ch

s2cdecl: ${CSRC}
	${SCC} -o $@ $^

s2csizeof:	sizeof.c
	${CC} -o $@ $^

s2ch: sch.sc
	${SCC} -o $@ $^

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
