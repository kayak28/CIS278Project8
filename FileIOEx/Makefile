run : Main.o Ractangle.o
	g++ -o run Main.o Ractangle.
	
exe : Apps.o Ractangle.o
	g++ -o exe Apps.o Ractangle.o

Ractangle.o : Ractangle.cpp
	g++ -c Ractangle.cpp

Main.o : Main.cpp
	g++ -c Main.cpp

clean : Main.o Ractangle.o run exe Apps.o
	rm Main.o Ractangle.o run exe Apps.o
