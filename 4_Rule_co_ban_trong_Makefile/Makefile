main.o: main.c
	gcc -c main.c -o main.o

lib.o: lib.c
	gcc -c lib.c -o lib.o

all: main.o lib.o
	gcc main.o lib.o -o main.exe

clean:
	rm -f *.exe *.o