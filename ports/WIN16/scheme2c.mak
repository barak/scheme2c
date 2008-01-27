ORIGIN = PWB
ORIGIN_VER = 2.0
PROJ = SCHEME2C
PROJFILE = SCHEME2C.MAK
DEBUG = 1

BSCMAKE  = bscmake
SBRPACK  = sbrpack
NMAKEBSC1  = set
NMAKEBSC2  = nmake
CC  = cl
CFLAGS_G  = /Alfw /W2 /G2 /GD /DMSW /Ic:\scheme2c /Zp /BATCH
CFLAGS_D  = /f /Od /Zi /Gs
CFLAGS_R  = /f- /Ot /Zi /Gs
CXX  = cl
CXXFLAGS_G  = /G2 /W2 /ASw /GD /Zp /BATCH
CXXFLAGS_D  = /f /Zi /Od /Gs
CXXFLAGS_R  = /f- /Oe /Og /Os /Gs
MAPFILE_D  = NUL
MAPFILE_R  = NUL
LFLAGS_G  = /BATCH /ONERROR:NOEXE
LFLAGS_D  = /CO /NOF
LFLAGS_R  = /NOF
LLIBS_G  = LIBW.LIB
LINKER	= link
ILINK  = ilink
LRF  = echo > NUL
ILFLAGS  = /a /e
RC  = rc
IMPLIB	= implib
LLIBS_R  = /NOD:LLIBCE LDLLCEW
LLIBS_D  = /NOD:LLIBCE LDLLCEW

FILES  = APPLY.C CALLCC.C CIO.C HEAP.C OBJECTS.C SCDEBUG.C SCEVAL.C SCEXPAND.C\
	SCEXPND1.C SCEXPND2.C SCINIT.C SCQQUOTE.C SCRT1.C SCRT2.C SCRT3.C\
	SCRT4.C SCRT5.C SCRT6.C SCRT7.C SCHEME2C.DEF MTRAPS.C SCREP.C\
	SCRTUSER.C
DEF_FILE  = SCHEME2C.DEF
OBJS  = APPLY.obj CALLCC.obj CIO.obj HEAP.obj OBJECTS.obj SCDEBUG.obj\
	SCEVAL.obj SCEXPAND.obj SCEXPND1.obj SCEXPND2.obj SCINIT.obj\
	SCQQUOTE.obj SCRT1.obj SCRT2.obj SCRT3.obj SCRT4.obj SCRT5.obj\
	SCRT6.obj SCRT7.obj MTRAPS.obj SCREP.obj SCRTUSER.obj
SBRS  = APPLY.sbr CALLCC.sbr CIO.sbr HEAP.sbr OBJECTS.sbr SCDEBUG.sbr\
	SCEVAL.sbr SCEXPAND.sbr SCEXPND1.sbr SCEXPND2.sbr SCINIT.sbr\
	SCQQUOTE.sbr SCRT1.sbr SCRT2.sbr SCRT3.sbr SCRT4.sbr SCRT5.sbr\
	SCRT6.sbr SCRT7.sbr MTRAPS.sbr SCREP.sbr SCRTUSER.sbr

all: $(PROJ).dll

.SUFFIXES:
.SUFFIXES:
.SUFFIXES: .obj .sbr .c

APPLY.obj : APPLY.C objects.h scinit.h heap.h apply.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoAPPLY.obj APPLY.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoAPPLY.obj APPLY.C
<<
!ENDIF

APPLY.sbr : APPLY.C objects.h scinit.h heap.h apply.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRAPPLY.sbr APPLY.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRAPPLY.sbr APPLY.C
<<
!ENDIF

CALLCC.obj : CALLCC.C objects.h scinit.h heap.h callcc.h apply.h cio.h\
	options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoCALLCC.obj CALLCC.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoCALLCC.obj CALLCC.C
<<
!ENDIF

CALLCC.sbr : CALLCC.C objects.h scinit.h heap.h callcc.h apply.h cio.h\
	options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRCALLCC.sbr CALLCC.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRCALLCC.sbr CALLCC.C
<<
!ENDIF

CIO.obj : CIO.C objects.h heap.h cio.h scinit.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoCIO.obj CIO.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoCIO.obj CIO.C
<<
!ENDIF

CIO.sbr : CIO.C objects.h heap.h cio.h scinit.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRCIO.sbr CIO.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRCIO.sbr CIO.C
<<
!ENDIF

HEAP.obj : HEAP.C objects.h scinit.h heap.h callcc.h apply.h cio.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoHEAP.obj HEAP.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoHEAP.obj HEAP.C
<<
!ENDIF

HEAP.sbr : HEAP.C objects.h scinit.h heap.h callcc.h apply.h cio.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRHEAP.sbr HEAP.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRHEAP.sbr HEAP.C
<<
!ENDIF

OBJECTS.obj : OBJECTS.C objects.h scinit.h heap.h apply.h cio.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoOBJECTS.obj OBJECTS.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoOBJECTS.obj OBJECTS.C
<<
!ENDIF

OBJECTS.sbr : OBJECTS.C objects.h scinit.h heap.h apply.h cio.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FROBJECTS.sbr OBJECTS.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FROBJECTS.sbr OBJECTS.C
<<
!ENDIF

SCDEBUG.obj : SCDEBUG.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCDEBUG.obj SCDEBUG.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCDEBUG.obj SCDEBUG.C
<<
!ENDIF

SCDEBUG.sbr : SCDEBUG.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCDEBUG.sbr SCDEBUG.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCDEBUG.sbr SCDEBUG.C
<<
!ENDIF

SCEVAL.obj : SCEVAL.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCEVAL.obj SCEVAL.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCEVAL.obj SCEVAL.C
<<
!ENDIF

SCEVAL.sbr : SCEVAL.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCEVAL.sbr SCEVAL.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCEVAL.sbr SCEVAL.C
<<
!ENDIF

SCEXPAND.obj : SCEXPAND.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCEXPAND.obj SCEXPAND.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCEXPAND.obj SCEXPAND.C
<<
!ENDIF

SCEXPAND.sbr : SCEXPAND.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCEXPAND.sbr SCEXPAND.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCEXPAND.sbr SCEXPAND.C
<<
!ENDIF

SCEXPND1.obj : SCEXPND1.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCEXPND1.obj SCEXPND1.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCEXPND1.obj SCEXPND1.C
<<
!ENDIF

SCEXPND1.sbr : SCEXPND1.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCEXPND1.sbr SCEXPND1.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCEXPND1.sbr SCEXPND1.C
<<
!ENDIF

SCEXPND2.obj : SCEXPND2.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCEXPND2.obj SCEXPND2.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCEXPND2.obj SCEXPND2.C
<<
!ENDIF

SCEXPND2.sbr : SCEXPND2.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCEXPND2.sbr SCEXPND2.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCEXPND2.sbr SCEXPND2.C
<<
!ENDIF

SCINIT.obj : SCINIT.C objects.h scinit.h heap.h apply.h callcc.h cio.h\
	options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCINIT.obj SCINIT.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCINIT.obj SCINIT.C
<<
!ENDIF

SCINIT.sbr : SCINIT.C objects.h scinit.h heap.h apply.h callcc.h cio.h\
	options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCINIT.sbr SCINIT.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCINIT.sbr SCINIT.C
<<
!ENDIF

SCQQUOTE.obj : SCQQUOTE.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCQQUOTE.obj SCQQUOTE.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCQQUOTE.obj SCQQUOTE.C
<<
!ENDIF

SCQQUOTE.sbr : SCQQUOTE.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCQQUOTE.sbr SCQQUOTE.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCQQUOTE.sbr SCQQUOTE.C
<<
!ENDIF

SCRT1.obj : SCRT1.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT1.obj SCRT1.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT1.obj SCRT1.C
<<
!ENDIF

SCRT1.sbr : SCRT1.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT1.sbr SCRT1.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT1.sbr SCRT1.C
<<
!ENDIF

SCRT2.obj : SCRT2.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT2.obj SCRT2.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT2.obj SCRT2.C
<<
!ENDIF

SCRT2.sbr : SCRT2.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT2.sbr SCRT2.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT2.sbr SCRT2.C
<<
!ENDIF

SCRT3.obj : SCRT3.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT3.obj SCRT3.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT3.obj SCRT3.C
<<
!ENDIF

SCRT3.sbr : SCRT3.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT3.sbr SCRT3.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT3.sbr SCRT3.C
<<
!ENDIF

SCRT4.obj : SCRT4.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT4.obj SCRT4.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT4.obj SCRT4.C
<<
!ENDIF

SCRT4.sbr : SCRT4.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT4.sbr SCRT4.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT4.sbr SCRT4.C
<<
!ENDIF

SCRT5.obj : SCRT5.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT5.obj SCRT5.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT5.obj SCRT5.C
<<
!ENDIF

SCRT5.sbr : SCRT5.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT5.sbr SCRT5.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT5.sbr SCRT5.C
<<
!ENDIF

SCRT6.obj : SCRT6.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT6.obj SCRT6.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT6.obj SCRT6.C
<<
!ENDIF

SCRT6.sbr : SCRT6.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT6.sbr SCRT6.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT6.sbr SCRT6.C
<<
!ENDIF

SCRT7.obj : SCRT7.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRT7.obj SCRT7.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRT7.obj SCRT7.C
<<
!ENDIF

SCRT7.sbr : SCRT7.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRT7.sbr SCRT7.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRT7.sbr SCRT7.C
<<
!ENDIF

MTRAPS.obj : MTRAPS.C objects.h heap.h apply.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoMTRAPS.obj MTRAPS.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoMTRAPS.obj MTRAPS.C
<<
!ENDIF

MTRAPS.sbr : MTRAPS.C objects.h heap.h apply.h options.h
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRMTRAPS.sbr MTRAPS.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRMTRAPS.sbr MTRAPS.C
<<
!ENDIF

SCREP.obj : SCREP.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCREP.obj SCREP.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCREP.obj SCREP.C
<<
!ENDIF

SCREP.sbr : SCREP.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCREP.sbr SCREP.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCREP.sbr SCREP.C
<<
!ENDIF

SCRTUSER.obj : SCRTUSER.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoSCRTUSER.obj SCRTUSER.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoSCRTUSER.obj SCRTUSER.C
<<
!ENDIF

SCRTUSER.sbr : SCRTUSER.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FRSCRTUSER.sbr SCRTUSER.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FRSCRTUSER.sbr SCRTUSER.C
<<
!ENDIF


$(PROJ).bsc : $(SBRS)
	$(BSCMAKE) @<<
$(BRFLAGS) $(SBRS)
<<

$(PROJ).dll : $(DEF_FILE) $(OBJS)
!IF $(DEBUG)
	$(LRF) @<<$(PROJ).lrf
$(RT_OBJS: = +^
) $(OBJS: = +^
)
$@
$(MAPFILE_D)
$(LIBS: = +^
) +
$(LLIBS_G: = +^
) +
$(LLIBS_D: = +^
)
$(DEF_FILE) $(LFLAGS_G) $(LFLAGS_D);
<<
!ELSE
	$(LRF) @<<$(PROJ).lrf
$(RT_OBJS: = +^
) $(OBJS: = +^
)
$@
$(MAPFILE_R)
$(LIBS: = +^
) +
$(LLIBS_G: = +^
) +
$(LLIBS_R: = +^
)
$(DEF_FILE) $(LFLAGS_G) $(LFLAGS_R);
<<
!ENDIF
	$(LINKER) @$(PROJ).lrf
	$(IMPLIB) $*.lib $@


.c.obj :
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /Fo$@ $<
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /Fo$@ $<
<<
!ENDIF

.c.sbr :
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FR$@ $<
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FR$@ $<
<<
!ENDIF


run: $(PROJ).dll
	

debug: $(PROJ).dll
	
