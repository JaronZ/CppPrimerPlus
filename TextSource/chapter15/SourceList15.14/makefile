tar = main
obj = sales.o use_sales.o
$(tar) : $(obj)
	g++ -o $(tar) $(obj)
sales.o:sales.cpp sales.h
	g++ -c -g sales.cpp
use_sales.o:use_sales.cpp sales.h
	g++ -c -g use_sales.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)