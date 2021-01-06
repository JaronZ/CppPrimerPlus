target=main
obj=main.o move.o
$(target):$(obj)
	g++ -o $(target) $(obj) 
main.o:move.hpp
move.o:move.hpp
.PHONY:cleanall cleantarget cleanobj
cleanall:cleanobj cleantarget
cleanobj:
	-rm $(obj)
cleantarget:
	-rm $(target)