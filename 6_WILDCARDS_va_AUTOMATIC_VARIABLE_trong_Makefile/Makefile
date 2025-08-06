CC = gcc
DEPS = lib.h
CFLAGS = -I.

# main.o: main.c
# 	${CC} -c main.c -o main.o

# lib.o: lib.c
# 	${CC} -c lib.c -o lib.o

# Thay thế cho 2 Rule ở trên để tạo file.o từ file.c
%.o: %.c $(DEPS)
	${CC} -c $< -o $@ $(CFLAGS)
	
all: main.o lib.o
	${CC} main.o lib.o -o main.exe

clean:
	rm -f *.exe *.o