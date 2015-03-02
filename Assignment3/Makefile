CC = gcc
CFLAGS = -g -std=c99 -fno-stack-protector -Wall
PROGAMS = exercise1

all: $(PROGRAMS)
exercise1: exercise1.c magic_function.o
	$(CC) $(CFLAGS) -o exercise1 exercise1.c magic_function.o

magic_function.o: magic_function.c
	$(CC) $(CFLAGS) -c -o magic_function.o magic_function.c

clean:
	rm -f exercise1 exercise1.c~ exercise1.h~ magic_function.c~ magic_function.o
