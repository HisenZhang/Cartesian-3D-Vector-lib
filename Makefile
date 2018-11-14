all: vector.o test.o
	cc -o build/test  build/test.o  build/vector.o -lm

vector.o : include/vector.c
	cc -c include/vector.c -o  build/vector.o

test.o : test.c
	cc -c test.c -o  build/test.o

.PHONY : clean

clean : 
	- rm build/*.o