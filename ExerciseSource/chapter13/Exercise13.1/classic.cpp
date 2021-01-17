#include<iostream>
#include<cstring>
#include"classic.hpp"
using std::cout;
using std::endl;

Classic::Classic(const char * mainwork,const char * s1,const char * s2,int n,double x):Cd(s1,s2,n,x)
{
	strcpy(this->mainwork,mainwork);
}

Classic::Classic(const Classic & d):Cd(d)
{
	strcpy(this->mainwork,d.mainwork);
}


Classic::Classic(){}
Classic::~Classic(){}

void Classic::Report()const
{
	cout<<"Main work:  "<<mainwork<<endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic & d)
{
	Cd::operator=(d);
	strcpy(mainwork,d.mainwork);
	return *this;
}