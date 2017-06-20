SRCDIR = ./src
LIBDIR = ./lib
OBJDIR = ./obj
BINDIR = ./bin
TESTDIR = ./tests


CuTestDemo: $(SRCDIR)/*.c $(TESTDIR)/*.c
	gcc $(SRCDIR)/*.c $(TESTDIR)/*.c -o $(BINDIR)/CuTestDemo


.PHONY: clean

clean:
	-rm -f $(BINDIR)/*

