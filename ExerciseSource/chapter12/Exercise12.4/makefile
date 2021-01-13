tar=main
obj=main.o stack.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:main.cpp stack.hpp
	g++ -c -g main.cpp
stack.o:stack.cpp stack.hpp
	g++ -c -g stack.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)