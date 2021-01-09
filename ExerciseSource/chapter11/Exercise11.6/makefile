tar=main
obj=main.o stonewt.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:stonewt.hpp
stonewt.o:stonewt.hpp
.PHONY:cleanall cleanobj cleantar
cleanall:cleanobj cleantar
cleantar:
	-rm $(tar)
cleanall:
	-rm $(obj)