tar=main
obj=queue.o bank.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
bank.o:bank.cpp queue.hpp
	g++ -c -g bank.cpp
queue.o:queue.cpp queue.hpp
	g++ -c -g queue.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)