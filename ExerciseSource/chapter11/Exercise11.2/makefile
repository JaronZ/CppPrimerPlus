tar=main
obj=main.o vector.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:vector.hpp
vector.o:vector.hpp
.PHONY:cleanall cleantar cleanobj
cleanall:cleantar cleanobj
cleantar:
	-rm $(tar)
cleanobj:
	-rm $(obj)