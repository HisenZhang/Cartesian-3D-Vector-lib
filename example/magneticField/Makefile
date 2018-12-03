all: vector.o magneticField.o
	cc -o build/magneticField  build/magneticField.o  build/vector.o -lm

vector.o : include/vector.c
	cc -c include/vector.c -o  build/vector.o

magneticField.o : magneticField.c
	cc -c magneticField.c -o  build/magneticField.o

.PHONY : clean

clean : 
	- rm build/*.o