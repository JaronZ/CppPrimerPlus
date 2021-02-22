tar = main
obj = twod.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
twod.cpp:arraytp.hpp
	g++ -c -g twod.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)