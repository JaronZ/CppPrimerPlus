target=main
obj=Main.o Person.o
$(target):$(obj)
	g++ -o $(target) $(obj)
Main.o:Person.hpp
Person.o:Person.hpp
.PHONY:cleanall cleanobj cleantarget
cleanall:cleanobj cleantarget
	rm -f nosuchfile.txt
cleanobj:
	rm $(obj)
cleantarget:
	rm $(target)