target=main
obj=pe9-1.o golf.o
$(target):$(obj)
	g++ -o $(target) $(obj)
pe9-1.o:golf.hpp
golf.o:golf.hpp
.PHONY:cleanall cleanobj cleantarget
cleanall:cleanobj cleantarget
cleanobj:
	rm $(obj)
cleantarget:
	rm $(target)
