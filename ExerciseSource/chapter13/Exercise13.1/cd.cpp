#include<iostream>
#include<cstring>
#include"cd.hpp"
using std::cout;
using std::endl;

Cd::Cd(const char * s1,const char * s2,int n,double x)
{
	strcpy(performers,s1);
	strcpy(label,s2);
	selections=n;
	playtime=x;
}

Cd::Cd(const Cd & d)
{
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
}

Cd::Cd(){}
Cd::~Cd(){}

void Cd::Report()const
{
	cout<<"Performers: "<<performers<<endl
		<<"Label:      "<<label<<endl
		<<"selections: "<<selections<<endl
		<<"playtime:   "<<playtime<<endl;
}

Cd & Cd::operator=(const Cd & d)
{
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
	return *this;
}