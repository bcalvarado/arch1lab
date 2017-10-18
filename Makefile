bstDemo: bst.o bstDemo.o
	cc -o bstDemo bst.o bstDemo.o

bst.o: bst.c bst.h
	cc -c bst.c bst.h

bstDemo.o: bstDemo.c bst.h
	cc -c bstDemo.c bst.h

Exe: bstDemo
	./bstDemo
