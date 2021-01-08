tar=main
obj=main.o mytime.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:mytime.hpp
mytime.o:mytime.hpp
.PHONY:cleanall cleanobj cleantar
cleanall:cleanobj cleantar
cleantar:
	-rm $(tar)
cleanobj:
	-rm $(obj)