pe9-1:pe9-1.o golf.o
	g++ -o test.exe pe9-1.o golf.o
pe9-1.o:pe9-1.cpp golf.hpp
	g++ -c pe9-1.cpp
golf.o:golf.cpp golf.hpp
	g++ -c golf.cpp
clean:
	rm pe9-1.o golf.o