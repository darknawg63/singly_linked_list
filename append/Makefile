CFLAGS = -Wall -g -std=c99

output: main.o mutator.o
	cc main.o mutator.o -o linkedlist

main.o: main.c
	cc -c main.c

mutator.o: mutator.c mutator.h
	cc -c mutator.c

clean:
	rm -f *.o linkedlist


