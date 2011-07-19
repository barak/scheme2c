all: clear hello npuzzle puzzle

S2C_LIBES=/usr/lib/scheme2c/s2cxl.a -lX11
S2CC=s2cc

%: %.sc
	$(S2CC) -o $@ $< $(S2C_LIBES)
