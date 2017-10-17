all: bstDemo

bstDemo: Main.o System.o

Main.o: BST.c
	cc -c BST.c

System.o:bst.h
	cc -c bst.h

clean:
	rm -f *o bstDemo

