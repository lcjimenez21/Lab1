all: bstDemo

bstDemo: Main.o System.o

Main.o: BST.c
	cc -c BST.c

System.o:System.c
	cc -c System.c

clean:
	rm -f *o bstDemo

