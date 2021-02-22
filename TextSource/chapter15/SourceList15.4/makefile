tar = main
obj = tvfm.o use_tv.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
tvfm.o:tvfm.cpp tvfm.h
	g++ -c -g tvfm.cpp
use_tv.o:use_tv.cpp tvfm.h
	g++ -c -g use_tv.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)