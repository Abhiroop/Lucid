prefix=/usr/local/bin
CFLAGS=-O -DYYMAXDEPTH=900
inc = cmanifs.h cglobals.h

pass2: main.o y.tab.o yylex.o expr.o ;
	cc -s main.o expr.o y.tab.o yylex.o -o pass2

all:    main.o y.tab.o yylex.o expr.o ;
	cc -s main.o expr.o y.tab.o yylex.o -o pass2

cp install:
	cp pass2 $R$(prefix)/pass2

clean:
	rm -f *.o y.tab.h y.tab.c pass1

cglobals.h:
cmanifs.h: y.tab.h
y.tab.c y.tab.h: tree.y
	yacc -d tree.y
tree.y:
main.c:
yylex.c:
expr.c:
y.tab.o: $(inc) y.tab.h y.tab.c
main.o:  $(inc) main.c
yylex.o: $(inc) yylex.c
expr.o: $(inc) expr.c
