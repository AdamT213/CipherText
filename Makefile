all: cipher.o
	g++ -std=c++11 interface.o -o ui
	./ui

cipher.o: interface.cpp cipher.h alphabet.h
	g++ -std=c++11 -c interface.cpp

clean:
	rm *.o *.out *ui