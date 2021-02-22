tar = main
obj = stkoptr1.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
stkoptr1.o:stkoptr1.cpp stacktp1.hpp
	g++ -c -g stkoptr1.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)