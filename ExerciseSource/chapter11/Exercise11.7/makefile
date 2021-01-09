tar=main
obj=main.o complex0.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:complex0.hpp
complex0.o:complex0.hpp
.PHONY:cleanall cleanobj cleantar
cleanall:cleanobj cleantar
cleanobj:
	-rm $(obj)
cleantar:
	-rm $(tar)
	