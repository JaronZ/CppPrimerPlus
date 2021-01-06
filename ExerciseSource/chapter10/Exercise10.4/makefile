target=main
objects=Sale.o Main.o
$(target):$(objects)
	g++ -o $(target) $(objects)
Main.o:Sale.hpp
Sale.o:Sale.hpp
.PHONY:cleanall cleanobj cleantarget
cleanall:cleanobj cleantarget
cleanobj:
	-rm $(objects)
cleantarget:
	-rm $(target)