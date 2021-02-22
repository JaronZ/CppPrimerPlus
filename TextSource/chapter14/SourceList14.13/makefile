tar = main
obj = stacktem.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
stacktem.o:stacktem.cpp stacktp.hpp
	g++ -c -g stacktem.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)