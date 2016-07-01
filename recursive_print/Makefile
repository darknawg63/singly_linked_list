CFLAGS = -Wall -g -std=c99

output: main.o mutator.o
	cc $(CFLAGS) main.o mutator.o -o linkedlist

main.o: main.c
	cc -c $(CFLAGS) main.c

mutator.o: mutator.c mutator.h
	cc -c $(CFLAGS) mutator.c

clean:
	rm -f linkedlist *.o *~


