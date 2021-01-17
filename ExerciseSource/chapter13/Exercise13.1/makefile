tar=main
obj=cd.o classic.o main.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:main.cpp classic.hpp
	g++ -c -g main.cpp
classic.o:classic.cpp classic.hpp cd.hpp
	g++ -c -g classic.cpp
cd.o:cd.cpp cd.hpp
	g++ -c -g cd.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)