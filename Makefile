BINARIES=001-multiples 002-evenfibo 003-largestprime 004-palindrome 005-multiple 006-sumsquare 007-prime 008-product 009-pythagorean 010-sumofprimes 010-sumofprimes-gmp 011-grid 012-triangle 013-largesum 013-largesum-gmp 014-collatz 015-path 015-path-halfmatrix 015-path-matrix 016-powerdigit 016-powerdigit-opti 017-lettercount 017-lettercount-num
CC=/usr/bin/gcc
CFLAGS=-Wall
LDFLAGS=-lm -lgmp

all: $(BINARIES)

clean: 
	rm -f $(BINARIES)
