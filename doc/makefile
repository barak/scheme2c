# Makes the documentation files.

ALL = embedded.pdf index.pdf intro.pdf smithnotes.pdf r4rs.pdf
all: $(ALL)

prefix=/usr/local
DOCDIR=$(prefix)/doc/scheme2c
MANDIR=$(prefix)/man

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

INSTALL = install

install: install-pdf install-man

install-pdf:
	$(INSTALL) -d $(DESTDIR)$(DOCDIR)/
	$(INSTALL) $(ALL) $(DESTDIR)$(DOCDIR)/

install-man:
	$(INSTALL) -d $(DESTDIR)$(MANDIR)/man1
	$(INSTALL) scc.l $(DESTDIR)$(MANDIR)/man1/scc.1
	$(INSTALL) sci.l $(DESTDIR)$(MANDIR)/man1/sci.1

clean:
	-rm -rf *.pdf *.dvi *.aux *.log *.BAK *.CKP *.toc *.idx
