#include<iostream>
#include<cstring>
#include"classic.hpp"
using std::cout;
using std::endl;

Classic::Classic(const char * mainwork,const char * s1,const char * s2,int n,double x):Cd(s1,s2,n,x)
{
	this->mainwork=new char[strlen(mainwork)+1];
	strcpy(this->mainwork,mainwork);
}

Classic::Classic(const Classic & d):Cd(d)
{
	mainwork=new char[strlen(d.mainwork)+1];
	strcpy(this->mainwork,d.mainwork);
}


Classic::Classic(){}
Classic::~Classic()
{
	delete [] mainwork;
}

void Classic::Report()const
{
	cout<<"Main work:  "<<mainwork<<endl;
	Cd::Report();
}

Classic & Classic::operator=(const Classic & d)
{
	Cd::operator=(d);
	delete [] mainwork;
	mainwork=new char[strlen(d.mainwork)+1];
	strcpy(mainwork,d.mainwork);
	return *this;
}