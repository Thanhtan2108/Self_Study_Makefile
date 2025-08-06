CC = gcc

main.o: main.c
	$(CC) -c main.c -o main.o

lib.o: lib.c
	${CC} -c lib.c -o lib.o

all: main.o lib.o
	gcc main.o lib.o -o main.exe

clean:
	rm -f *.exe *.o