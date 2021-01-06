tar=main
obj=main.o list.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:list.hpp
plog.o:list.hpp
.PHONY:cleanall cleantar cleanobj
cleanall:cleantar cleanobj
cleanobj:
	-rm $(obj)
cleantar:
	-rm $(tar)