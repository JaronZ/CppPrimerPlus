tar=main 
obj=main.o wine.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:main.cpp wine.hpp
	g++ -c -g main.cpp
wine.o:wine.cpp wine.hpp
	g++ -c -g wine.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)
