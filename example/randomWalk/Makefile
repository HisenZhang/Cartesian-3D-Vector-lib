all: vector.o rw.o
	cc -o ../../build/rw  ../../build/rw.o  ../../build/vector.o -lm

vector.o : ../../include/vector.c
	cc -c ../../include/vector.c -o  ../../build/vector.o

rw.o : randomWalk.c
	cc -c randomWalk.c -o  ../../build/rw.o

.PHONY : clean

clean : 
	- rm ../../build/*.o