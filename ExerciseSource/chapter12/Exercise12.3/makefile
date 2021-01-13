tar=main
obj=main.o stock.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:stock.hpp
stock.o:stock.hpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)