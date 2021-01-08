tar=main
obj=main.o vector.o
$(tar):$(obj)
	g++ -o $(tar) $(obj)
main.o:vector.hpp
vector.o:vector.hpp
.PHONY:cleanall cleantar cleanobj file
file:
	touch file.txt
cleanall:cleantar cleanobj
	rm file.txt
cleantar:
	-rm $(tar)
cleanobj:
	-rm $(obj)