GCC = gcc
WGC = -Wall -g -c

# main
all: frequency

# frequency
frequency: trie.o frequency.o
	$(GCC) -Wall trie.o frequency.o -o frequency

frequency.o: frequency.c frequency.h
	$(GCC) $(WGC) frequency.c

trie.o: trie.c
	$(GCC) $(WGC) trie.c trie.h

# clean

.PHONY: clean all

clean:
	rm -f *.o *.out frequency