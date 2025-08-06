CC = gcc
DEPS = lib.h

INC_DIR := ./inc ./core ./a ./b # những flder chứa file.h
SRC_DIR := ./src ./core # những folder chứa file.c

# khởi tạo 2 biến VPATH và CFLAGS bằng foreach
CFLAGS = $(foreach inc, $(INC_DIR), -I$(inc))
VPATH = $(foreach src, $(SRC_DIR), $(src))

# main.o: main.c
# 	${CC} -c main.c -o main.o

# lib.o: lib.c
# 	${CC} -c lib.c -o lib.o

# Thay thế cho 2 Rule ở trên để tạo file.o từ file.c
%.o: %.c $(DEPS)
	${CC} -c $< -o $@ $(CFLAGS)

.PHONY: all clean	
all: main.o lib.o
	${CC} main.o lib.o -o main.exe

clean:
	rm -f *.exe *.o