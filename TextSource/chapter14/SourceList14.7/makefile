tar=main
obj=worker0.o worktest.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
worktest.o:worktest.cpp worker0.hpp
	g++ -c -g worktest.cpp
worker0.o:worker0.cpp worker0.hpp
	g++ -c -g worker0.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)