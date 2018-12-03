all: vector.o randomWalk.o
	cc -o build/randomWalk  build/randomWalk.o  build/vector.o -lm

vector.o : include/vector.c
	cc -c include/vector.c -o  build/vector.o

randomWalk.o : randomWalk.c
	cc -c randomWalk.c -o  build/randomWalk.o

.PHONY : clean

clean : 
	- rm build/*.o