tar = main
obj = nested.o
$(tar) : $(obj)
	g++ -o $(tar) $(obj)
nested.o : nested.cpp queuetp.h
	g++ -c -g nested.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)