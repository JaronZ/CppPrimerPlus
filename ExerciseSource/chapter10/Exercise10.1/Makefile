obj=Account.o Main.o
target=Account
$(target):$(obj)
	g++ -o $(target) $(obj)
#由make推导规则
Account.o:Account.hpp
Main.o:Account.hpp
#下面是清理部分
.PHONY:cleanall cleano cleantarget
cleanall:cleano cleantarget
	rm -f nosuchfile.txt
cleano:
	rm $(obj)
cleantarget:
	rm $(target)
