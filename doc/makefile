# Makes the documentation files.

pdfs = embedded.pdf index.pdf intro.pdf smithnotes.pdf
# building r4rs.pdf requires latex209 which is not typically available,
# so by default do not build/install it.
#pdfs += r4rs.pdf
all: $(pdfs)

prefix=/usr/local
DOCDIR=$(prefix)/doc/scheme2c
MANDIR=$(prefix)/man

INSTALL = install
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}

.SUFFIXES:

.SUFFIXES: .tex .dvi .ps .pdf
TEX=latex
%.ps:  %.dvi; dvips -K -Ppdf -G0 -R0 -q -tletter -o $@ $<
%.pdf: %.ps; ps2pdf $< $@

export TEXINPUTS
r4rs.dvi: TEXINPUTS=r4rs:
r4rs.dvi: TEX=latex209
r4rs.dvi: r4rs/r4rs.tex
	$(TEX) -output-directory=. $<

install: install-pdf install-man

install-pdf: $(pdfs)
	$(INSTALL) -d $(DESTDIR)$(DOCDIR)
	$(INSTALL_DATA) $(pdfs) $(DESTDIR)$(DOCDIR)/

install-man:
	$(INSTALL) -d $(DESTDIR)$(MANDIR)/man1
	$(INSTALL_DATA) s2cc.l $(DESTDIR)$(MANDIR)/man1/s2cc.1
	$(INSTALL_DATA) s2ci.l $(DESTDIR)$(MANDIR)/man1/s2ci.1
	ln -sf s2ci.1 $(DESTDIR)$(MANDIR)/man1/sci.1
	ln -sf s2cc.1 $(DESTDIR)$(MANDIR)/man1/scc.1

clean:
	-rm -rf *.pdf *.dvi *.aux *.log *.BAK *.CKP *.toc *.idx
