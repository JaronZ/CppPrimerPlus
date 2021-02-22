tar=main
obj=workermi.o main.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
workermi.o:workermi.cpp workermi.hpp
	g++ -c -g workermi.cpp
main.o:main.cpp workermi.hpp
	g++ -c -g main.cpp
.PHONY:cleanall
cleanall:
	-rm $(obj) $(tar)