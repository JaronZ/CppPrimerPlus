//main.cpp -- using the Stock class
#include<iostream>
#include"stock.hpp"

const int STKS=4;
int main()
{
//create an array of initialized objects
	Stock stock[STKS]=
	{
		Stock("NanoSmart",12,20.0),
		Stock("Boffo objects",200,2.0),
		Stock("Monolithic Oblisks",130,3.25),
		Stock("Fleep Enterprises",60,6.5)
	};
	std::cout<<"Stock holdings:\n";
	int st;
	for(st=0;st<STKS;st++)
		std::cout<<stock[st];
	const Stock* top=&stock[0];
	for(st=1;st<STKS;st++)
		top=&top->topval(stock[st]);
	std::cout<<"\nMost valuable holding:\n";
	std::cout<<*top;
	return 0;
}