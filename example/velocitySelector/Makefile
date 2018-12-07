all: vector.o velocitySelector.o plot.o field.o kinetics.o
	cc -o build/velocitySelector build/plot.o build/field.o build/kinetics.o build/velocitySelector.o  build/vector.o -lm

plot.o: libfields/plot.c
	cc -c libfields/plot.c -o build/plot.o

field.o: libfields/field.c
	cc -c libfields/field.c -o build/field.o

kinetics.o: libfields/kinetics.c
	cc -c libfields/kinetics.c -o build/kinetics.o

vector.o : libfields/vector.c
	cc -c libfields/vector.c -o  build/vector.o
	
velocitySelector.o : velocitySelector.c
	cc -c velocitySelector.c -o  build/velocitySelector.o

.PHONY : clean

clean : 
	- rm build/*.o