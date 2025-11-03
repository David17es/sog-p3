all: main

clean:
	rm *.o
	rm main

main: child.o father.o main.o
	gcc child.o father.o main.o -o main

child.o: child.c
	gcc child.c -c -o child.o

father.o: father.c
	gcc father.c -c -o father.o
