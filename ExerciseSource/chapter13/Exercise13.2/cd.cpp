#include<iostream>
#include<cstring>
#include"cd.hpp"
using std::cout;
using std::endl;

Cd::Cd(const char * s1,const char * s2,int n,double x)
{
	performers=new char[strlen(s1)+1];
	label=new char[strlen(s2)+1];
	strcpy(performers,s1);
	strcpy(label,s2);
	selections=n;
	playtime=x;
}

Cd::Cd(const Cd & d)
{
	performers=new char[strlen(d.performers)+1];
	label=new char[strlen(d.label)+1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
}

Cd::Cd(){}
Cd::~Cd()
{
	delete [] performers;
	delete [] label;
}

void Cd::Report()const
{
	cout<<"Performers: "<<performers<<endl
		<<"Label:      "<<label<<endl
		<<"selections: "<<selections<<endl
		<<"playtime:   "<<playtime<<endl;
}

Cd & Cd::operator=(const Cd & d)
{
	delete [] performers;
	delete [] label;
	performers=new char[strlen(d.performers)+1];
	label=new char[strlen(d.label)+1];
	strcpy(performers,d.performers);
	strcpy(label,d.label);
	selections=d.selections;
	playtime=d.playtime;
	return *this;
}