target=main
obj=Stack.o Main.o
$(target):$(obj)
	g++ -o $(target) $(obj)
Main.o:Stack.hpp
Stack.o:Stack.hpp
.PHONY:cleanall cleanobj cleantarget
cleanall:cleantarget cleanobj
cleantarget:
	-rm $(target)
cleanobj:
	-rm $(obj) 