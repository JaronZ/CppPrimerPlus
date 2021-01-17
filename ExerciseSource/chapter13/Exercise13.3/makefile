tar=main
obj=dma.o main.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:main.cpp dma.hpp
	g++ -c -g main.cpp
dma.o:dma.cpp dma.hpp
	g++ -c -g dma.cpp

.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)