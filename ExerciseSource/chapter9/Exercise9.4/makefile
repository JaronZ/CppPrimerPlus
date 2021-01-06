objects=Main.o Sale.o
Sale:$(objects)
	g++ -o Sale.exe $(objects)
Main.o:Sale.hpp
Sale.o:Sale.hpp
.PHONY:clean
clean:
	-rm $(objects)