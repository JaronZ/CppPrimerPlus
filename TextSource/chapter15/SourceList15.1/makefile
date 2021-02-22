tar = main
obj = tv.o use_tv.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
tv.o:tv.cpp tv.h
	g++ -c -g tv.cpp
use_tv.o:use_tv.cpp tv.h
	g++ -c -g use_tv.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)