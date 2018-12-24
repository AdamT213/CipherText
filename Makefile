all: alphabet.o Cipher.o
	g++ -std=c++11 alphabet.o Cipher.o -o cipher
	./cipher

alphabet.o: alphabet.h
	g++ -std=c++11 -c alphabet.h

Cipher.o: Cipher.cpp 
	g++ -std=c++11 -c Cipher.cpp

clean:
	rm cipherText *.o