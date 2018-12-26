all: alphabet.o Cipher.o
	g++ -std=c++11 alphabet.o Cipher.o -o cipher
	./cipher

alphabet.o: alphabet.cpp
	g++ -std=c++11 alphabet.cpp -o alphabet.o
	./alphabet.o
Cipher.o: Cipher.cpp 
	g++ -std=c++11 -c Cipher.cpp

clean:
	rm *.o