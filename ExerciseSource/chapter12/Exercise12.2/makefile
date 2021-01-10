tar=main
obj=main.o string2.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:string2.hpp
string2.o:string2.hpp
.PHONY:cleanall cleanobj cleantar
cleanall:cleantar cleanobj
cleantar:
	-rm $(tar)
cleanobj:
	-rm $(obj)