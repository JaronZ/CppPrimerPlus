tar=main
obj=main.o plog.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:plog.hpp
plog.o:plog.hpp
.PHONY:cleanall cleantar cleanobj
cleanall:cleantar cleanobj
cleanobj:
	-rm $(obj)
cleantar:
	-rm $(tar)