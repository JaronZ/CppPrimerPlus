// wine.cpp -- class Wine's method definition
#include "wine.hpp"
#include <iostream>
#include <string>
#include <utility>
#include <valarray>
using std::string;
using std::valarray;
using std::pair;
using std::cout;
using std::cin;
using std::endl;

Wine::Wine(const char * l, int y, const int yr[], const int bot[]):
		   Pairarray(Arrayint(yr,y),Arrayint(bot,y)),string(l),years(y)
{
	
}

Wine::Wine(const char * l,int y):string(l),years(y)
{

}

void Wine::GetBottles()
{
	Arrayint y(years),b(years);
	cout<<"Enter "<<(string &)(*this)<<" data for "
		<<this->years<<" year(s):"<<endl;
	for(int i=0;i<years;i++)
	{
		cout<<"Enter yeat: ";
		cin>>y[i];
		cout<<"Enter bottles for that years: ";
		cin>>b[i];
	}
	Pairarray::Set(y,b);
}

const string & Wine::Label()const
{
	return (string &)(*this);
}

int Wine::sum()const
{
	return Pairarray::sum();
}

void Wine::Show()const
{
	cout<<"Wine: "<<Label()<<endl;
	cout<<"	Years	Bottles"<<endl;
	Pairarray::Show(years);
}