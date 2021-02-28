tar = main
obj = error5.o
$(tar) : $(obj)
	g++ -o $(tar) $(obj)
error4.o:error5.cpp exc_mean.h
	g++ -c -g error5.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)