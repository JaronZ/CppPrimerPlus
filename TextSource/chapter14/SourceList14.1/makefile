tar=main
obj=studentc.o use_stuc.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
studentc.o:studentc.cpp studentc.hpp
	g++ -c -g studentc.cpp
use_stuc.o:use_stuc.cpp studentc.hpp
	g++ -c -g use_stuc.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)