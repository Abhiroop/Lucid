prefix=/usr/local/bin
FILE=
megamake:
	    cd p1; make
	    cd p2; make
	    cd p3; make
	    cd p4; make
	    cd p5; make
	    cd evaluator; make

cp install:
	    cp shell_scripts/lucomp $(prefix)/lucomp
	    cp shell_scripts/lucid $(prefix)/lucid
	    cd p1; make install "DESTDIR=$(prefix)"
	    cd p2; make install "prefix=$(prefix)"
	    cd p3; make install "prefix=$(prefix)"
	    cd p4; make install "prefix=$(prefix)"
	    cd p5; make install "prefix=$(prefix)"
	    cd evaluator; make install "prefix=$(prefix)"

clean:
	    cd p1; make clean
	    cd p2; make clean
	    cd p3; make clean
	    cd p4; make clean
	    cd p5; make clean
	    cd evaluator; make clean

print:
	    cd p1; make print
	    cd p2; make print
	    cd p3; make print
	    cd p4; make print
	    cd p5; make print
	    cd evaluator; make print

tape:
	    cd p1; make tape
	    cd p2; make tape
	    cd p3; make tape
	    cd p4; make tape
	    cd p5; make tape
	    cd evaluator; make tape

lint:
	    cd p1; make lint
	    cd p2; make lint
	    cd p3; make lint
	    cd p4; make lint
	    cd p5; make lint
	    cd evaluator; make lint

all:
	    cd p1; make all "prefix=$(prefix)"
	    cd p2; make all "prefix=$(prefix)"
	    cd p3; make all "prefix=$(prefix)"
	    cd p4; make all "prefix=$(prefix)"
	    cd p5; make all "prefix=$(prefix)"
	    cd evaluator; make all "prefix=$(prefix)"
