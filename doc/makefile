# Makes the documentation files.

all: embedded.pdf index.pdf intro.pdf smithnotes.pdf r4rs.pdf

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

clean:
	-rm -rf *.pdf *.dvi *.aux *.log *.BAK *.CKP
