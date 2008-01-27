ORIGIN = PWB
ORIGIN_VER = 2.0
PROJ = EMBEDDED
PROJFILE = EMBEDDED.MAK
DEBUG = 1

BSCMAKE  = bscmake
SBRPACK  = sbrpack
NMAKEBSC1  = set
NMAKEBSC2  = nmake
CC  = cl
CFLAGS_G  = /AL /W2 /G2 /GA /GEf /Zp /BATCH
CFLAGS_D  = /f /Od /Zi /Gs
CFLAGS_R  = /f- /Os /Og /Oe /Gs
CXX  = cl
CXXFLAGS_G  = /G2 /W2 /GA /GEf /Zp /BATCH
CXXFLAGS_D  = /f /Zi /Od /Gs
CXXFLAGS_R  = /f- /Oe /Og /Os /Gs
CL_DEFS  = C:\C700\BIN\cl.def
MAPFILE_D  = NUL
MAPFILE_R  = NUL
LFLAGS_G  =  /BATCH /ONERROR:NOEXE
LFLAGS_D  = /CO /NOF
LFLAGS_R  = /NOF
LLIBS_G  = LIBW.LIB
LINKER	= link
ILINK  = ilink
LRF  = echo > NUL
ILFLAGS  = /a /e
RC  = rc
LLIBS_R  = /NOD:LLIBCE LLIBCEWQ
LLIBS_D  = /NOD:LLIBCE LLIBCEWQ
CVFLAGS  = /50

FILES  = EMBEDDED.DEF EMBEDDED.C
DEF_FILE  = EMBEDDED.DEF
OBJS  = EMBEDDED.obj
SBRS  = EMBEDDED.sbr

all: $(PROJ).exe

.SUFFIXES:
.SUFFIXES:
.SUFFIXES: .obj .sbr .c

EMBEDDED.obj : EMBEDDED.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_D) /FoEMBEDDED.obj EMBEDDED.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/c $(CFLAGS_G)
$(CFLAGS_R) /FoEMBEDDED.obj EMBEDDED.C
<<
!ENDIF

EMBEDDED.sbr : EMBEDDED.C
!IF $(DEBUG)
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_D) /FREMBEDDED.sbr EMBEDDED.C
<<
!ELSE
	@$(CC) @<<$(PROJ).rsp
/Zs $(CFLAGS_G)
$(CFLAGS_R) /FREMBEDDED.sbr EMBEDDED.C
<<
!ENDIF


$(PROJ).bsc : $(SBRS)
	$(BSCMAKE) @<<
$(BRFLAGS) $(SBRS)
<<

$(PROJ).exe : $(DEF_FILE) $(OBJS)
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
! IFDEF DEF_FILE
$(DEF_FILE) $(LFLAGS_G) $(LFLAGS_D);
! ELSE
$(CL_DEFS) $(LFLAGS_G) $(LFLAGS_D);
! ENDIF
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
! IFDEF DEF_FILE
$(DEF_FILE) $(LFLAGS_G) $(LFLAGS_R);
! ELSE
$(CL_DEFS) $(LFLAGS_G) $(LFLAGS_R);
! ENDIF
<<
!ENDIF
	$(LINKER) @$(PROJ).lrf


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


run: $(PROJ).exe
	WX $(WXFLAGS) $(PROJ).exe $(RUNFLAGS)

debug: $(PROJ).exe
	WX /p $(WXFLAGS) CVW $(CVFLAGS) $(PROJ).exe $(RUNFLAGS)
