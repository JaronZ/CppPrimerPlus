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

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
{
	label=l;
	yearsandbottles.first.resize(y);
	for(int i=0;i<y;i++)
	{
		yearsandbottles.first[i]=yr[i];
	}
	yearsandbottles.second.resize(y);
	for(int i=0;i<y;i++)
	{
		yearsandbottles.second[i]=bot[i];
	}
}

Wine::Wine(const char * l,int y)
{
	label=l;
	yearsandbottles.first.resize(y);
	yearsandbottles.second.resize(y);
}

void Wine::GetBottles()
{
	cout<<"Enter "<<label<<" data for "
		<<yearsandbottles.first.size()<<" year(s):"<<endl;
	for(int i=0;i<yearsandbottles.first.size();i++)
	{
		cout<<"Enter yeat: ";
		cin>>yearsandbottles.first[i];
		cout<<"Enter bottles for that years: ";
		cin>>yearsandbottles.second[i];
	}
}

const string & Wine::Label()const
{
	return label;
}

int Wine::sum()const
{
	return yearsandbottles.second.sum();
}

void Wine::Show()const
{
	cout<<"Wine: "<<label<<endl;
	cout<<"		Year	Bottles"<<endl;
	for(int i=0;i<yearsandbottles.first.size();i++)
	{
		cout<<"		"<<yearsandbottles.first[i]
			<<"	"<<yearsandbottles.second[i]<<endl;
	}
}