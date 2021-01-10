tar=main
obj=main.o cow.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:cow.hpp
cow.p:cow.hpp
.PHONY:cleanall cleanobj cleantar
cleanall:cleanobj cleantar
cleanobj:
	-rm $(obj)
cleantar:
	-rm $(tar)
