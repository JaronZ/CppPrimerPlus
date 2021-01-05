Main.exe:Main.o Sale.o
	g++ -o Sale.exe Main.o Sale.o
Main.o:Main.cpp Sale.hpp
	g++ -c Main.cpp
Sale.o:Sale.cpp Sale.hpp
	g++ -c Sale.cpp
clean:
	rm Sale.exe *.o *.cpp *.hpp