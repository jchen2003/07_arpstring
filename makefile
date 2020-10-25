all: arpstring.o
	gcc -o arpstring arpstring.o

arpstring.o :
	gcc -c arpstring.c

run:
	./arpstring

clean:
	rm *.o