tar=main
obj=use_stui.o studenti.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
use_stui.o:use_stui.cpp studenti.hpp
	g++ -c -g use_stui.cpp
studenti.o:studenti.cpp studenti.hpp
	g++ -c -g studenti.cpp
.PHONY:cleanall
cleanall:
	-rm $(tar) $(obj)