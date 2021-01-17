tar=main
obj=main.o port.o vintageport.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:main.cpp vintageport.hpp
	g++ -c -g main.cpp
vintageport.o:vintageport.cpp vintageport.hpp port.hpp
	g++ -c -g vintageport.cpp
port.o:port.cpp port.hpp
	g++ -c -g port.cpp
.PHONY:cleanall 
cleanall:
	-rm $(tar) $(obj)
