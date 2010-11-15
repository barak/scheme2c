.SUFFIXES:
.SUFFIXES: .sc .cdecl .o .c

CDECL = ../cdecl/cdecl
SIZEOF = ../cdecl/sizeof
SRCDIR = ../../xlib
SCC = ../scsc/scc
SCXLIB = scxl.a

## Local build succeeds on Debian with scheme2c package installed:
# make XLIB=-lX11 SCC=scc CDECL=s2cdecl RANLIB=echo
# make XLIB=-lX11 SCC=scc SCXLIB=/usr/lib/scheme2c/scxl.a hello puzzle

XD = X.cdecl Xatom.cdecl Xlib.cdecl Xresource.cdecl Xutil.cdecl \
     Xkeysym.cdecl Xcursorfont.cdecl Xr4.cdecl

XDP = xws2.cdecl xws3.cdecl xws4.cdecl xws5.cdecl xws6.cdecl xws7.cdecl \
      xws8.cdecl xws9.cdecl xws10.cdecl xwsr4.cdecl

XMISC = doc.txt xwss.sc xlib.sc clear.sc hello.sc hello2.sc puzzle.sc \
	npuzzle.sc

xdsc =	depth.sc screen.sc visual.sc xarc.sc xchar2b.sc xcharstruct.sc \
	xclasshint.sc xcomposestatus.sc xcolor.sc xlibCONSTANTS.sc xevent.sc \
	xfontprop.sc xfontstruct.sc xgcvalues.sc xhostaddress.sc xiconsize.sc \
	ximage.sc xkeyboardcontrol.sc xkeyboardstate.sc xmodifierkeymap.sc \
	xpoint.sc xrectangle.sc xrmoptiondescrec.sc xrmvalue.sc xsegment.sc \
	xsetwindowattributes.sc xsizehints.sc xstandardcolormap.sc \
	xlibSTUBS.sc xtextitem.sc xtextitem16.sc xtimecoord.sc xlibTYPES.sc \
	xvisualinfo.sc xwindowattributes.sc xwindowchanges.sc xwmhints.sc \
	xpixmapformatvalues.sc xtextproperty.sc

xdsch =	depth.sch screen.sch visual.sch xarc.sch xchar2b.sch xcharstruct.sch \
	xclasshint.sch xcomposestatus.sch xcolor.sch xlibCONSTANTS.sch \
	xevent.sch xfontprop.sch xfontstruct.sch xgcvalues.sch \
	xhostaddress.sch xiconsize.sch ximage.sch xkeyboardcontrol.sch \
	xkeyboardstate.sch xmodifierkeymap.sch xpoint.sch xrectangle.sch \
	xrmoptiondescrec.sch xrmvalue.sch xsegment.sch \
	xsetwindowattributes.sch xsizehints.sch xstandardcolormap.sch \
	xlibSTUBS.sch xtextitem.sch xtextitem16.sch xtimecoord.sch \
	xlibTYPES.sch xvisualinfo.sch xwindowattributes.sch \
	xwindowchanges.sch xwmhints.sch	xpixmapformatvalues.sch \
	xtextproperty.sch


xdc =	depth.c screen.c visual.c xarc.c xchar2b.c xcharstruct.c \
	xclasshint.c xcomposestatus.c xcolor.c xlibCONSTANTS.c xevent.c \
	xfontprop.c xfontstruct.c xgcvalues.c xhostaddress.c xiconsize.c \
	ximage.c xkeyboardcontrol.c xkeyboardstate.c xmodifierkeymap.c \
	xpoint.c xrectangle.c xrmoptiondescrec.c xrmvalue.c xsegment.c \
	xsetwindowattributes.c xsizehints.c xstandardcolormap.c \
	xlibSTUBS.c xtextitem.c xtextitem16.c xtimecoord.c xlibTYPES.c \
	xvisualinfo.c xwindowattributes.c xwindowchanges.c xwmhints.c \
	xpixmapformatvalues.c xtextproperty.c

xdo =	depth.o screen.o visual.o xarc.o xchar2b.o xcharstruct.o \
	xclasshint.o xcomposestatus.o xcolor.o xlibCONSTANTS.o xevent.o \
	xfontprop.o xfontstruct.o xgcvalues.o xhostaddress.o xiconsize.o \
	ximage.o xkeyboardcontrol.o xkeyboardstate.o xmodifierkeymap.o \
	xpoint.o xrectangle.o xrmoptiondescrec.o xrmvalue.o xsegment.o \
	xsetwindowattributes.o xsizehints.o xstandardcolormap.o \
	xlibSTUBS.o xtextitem.o xtextitem16.o xtimecoord.o xlibTYPES.o \
	xvisualinfo.o xwindowattributes.o xwindowchanges.o xwmhints.o \
	xpixmapformatvalues.o xtextproperty.o

xdpsc = xws2.sc xws3.sc xws4.sc xws5.sc xws6.sc xws7.sc \
	xws8.sc xws9.sc xws10.sc xwsr4.sc

xdpsch = xws2.sch xws3.sch xws4.sch xws5.sch xws6.sch xws7.sch \
	xws8.sch xws9.sch xws10.sch xwsr4.sch

xdpc = xws2.c xws3.c xws4.c xws5.c xws6.c xws7.c xws8.c xws9.c xws10.c \
       xwsr4.c

xwssc = xwss.sc xws2.sc xws3.sc xws4.sc xws5.sc xws6.sc xws7.sc xws8.sc \
	xws9.sc xws10.sc xwsr4.sc

xwsc = xwss.c xws2.c xws3.c xws4.c xws5.c xws6.c xws7.c xws8.c xws9.c xws10.c \
       xlib.c xwsr4.c

xwso = xwss.o xws2.o xws3.o xws4.o xws5.o xws6.o xws7.o xws8.o xws9.o xws10.o \
       xlib.o xwsr4.o

all:
	$(MAKE) scixl scxl.a

sizeof.cdecl:
	${SIZEOF} > sizeof.cdecl

xlibTYPES.sc:	sizeof.cdecl ${XD}
	${CDECL} xlib -const sizeof.cdecl ${XD}
	${CDECL} xlib -typedef sizeof.cdecl ${XD}
	${CDECL} xlib -stubs sizeof.cdecl ${XD} ${XDP}

xlibTYPES.c:	xlibTYPES.sc
	${SCC} -C -Og -sch 16 ${xdsc}

xlibTYPES.o:	xlibTYPES.c
	${SCC} -c ${XLIBCFLAGS} ${xdc}

${xwssc}:	xlibTYPES.c

.cdecl.sc:
	${CDECL} xlib -extern sizeof.cdecl ${XD} $*.cdecl

.sc.c:
	${SCC} -C $*.sc

.c.o:
	${SCC}  -c ${XLIBCFLAGS} $*.c

scixl:	xlibTYPES.o ${xwssc} ${xwsc} ${xwso}
	${SCC} -o scixl -i -m xlib ${xwso} ${xdo} ${XLIB}

scxl.a:	xlibTYPES.o ${xwssc} ${xwsc} ${xwso}
	rm -f scxl.a
	ar q scxl.a ${xdo} ${xwso}
	${RANLIB} scxl.a
## Would like to replace with this, but messes up parallel make...
# scxl.a:	scxl.a(${xdo} ${xwso})

clear:
	${SCC} -o clear clear.sc scxl.a ${XLIB}

hello:
	${SCC} -o hello hello.sc ${SCXLIB} ${XLIB}

puzzle:
	${SCC} -o puzzle puzzle.sc ${SCXLIB} ${XLIB}

clean:
	rm -f *.BAK *.CKP core

noprogs:
	rm -f *.o scixl scxl.a hello puzzle clear

clean-cdecl:
	rm -f ${xdsc} ${xdsch} ${xdc} ${xdpsc} ${xdpsch} ${xdpc} sizeof.cdecl

clean-sc-to-c:
	rm -f ${xdc} ${xdpc} xlib.c xwss.c clear.c hello.c hello2.c \
		puzzle.c npuzzle.c

gensource:
	$(MAKE) ${xwssc} ${xwsc}

srclinks:
	for x in ${XD} ${XDP} ${XMISC}; \
	  do ln -s ${SRCDIR}/$$x $$x; \
	done
