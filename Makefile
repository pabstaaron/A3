CC = g++
CFLAGS = -Wall -std=c++11

TrieTest: TrieTest.cpp trie.o
	$(CC) $(CFLAGS) TrieTest.cpp

trie.o: trie.cpp
	$(CC) $(CFLAGS) trie.cpp
