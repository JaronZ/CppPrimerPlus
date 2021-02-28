tar = main
obj = error4.o
$(tar) : $(obj)
	g++ -o $(tar) $(obj)
error4.o:error4.cpp exc_mean.h
	g++ -c -g error4.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)