all: cipher.o
	g++ -std=c++11 cipher.o -o cipher
	./cipher

cipher.o: cipher.cpp alphabet.h
	g++ -std=c++11 -c cipher.cpp

clean:
	rm *.o