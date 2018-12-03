all: vector.o magneticField.o plot.o field.o kinetics.o
	cc -o build/magneticField build/plot.o build/field.o build/kinetics.o build/magneticField.o  build/vector.o -lm

plot.o: libfields/plot.c
	cc -c libfields/plot.c -o build/plot.o

field.o: libfields/field.c
	cc -c libfields/field.c -o build/field.o

kinetics.o: libfields/kinetics.c
	cc -c libfields/kinetics.c -o build/kinetics.o

vector.o : libfields/vector.c
	cc -c libfields/vector.c -o  build/vector.o
	
magneticField.o : magneticField.c
	cc -c magneticField.c -o  build/magneticField.o

.PHONY : clean

clean : 
	- rm build/*.o