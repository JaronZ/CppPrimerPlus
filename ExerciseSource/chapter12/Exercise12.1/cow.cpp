//Cow.cpp -- class Cow methods
#include<cstring>
#include<iostream>
#include"cow.hpp"
using std::cout;
using std::endl;
Cow::Cow()
{
	strcpy(name,"Keb Cow");
	hobby=new char[10];
	strcpy(hobby,"None");
	weight=200;
}

Cow::Cow(const char* nm,const char* ho,double wt)
{
	strcpy(name,nm);
	hobby=new char[sizeof(ho)+1];
	strcpy(hobby,ho);
	weight=wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name,c.name);
	hobby=new char[sizeof(c.hobby)+1];
	strcpy(hobby,c.hobby);
	weight=c.weight;
}

Cow::~Cow()
{
	delete []hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	delete hobby;
	strcpy(name,c.name);
	hobby=new char[sizeof(c.hobby)+1];
	strcpy(hobby,c.hobby);
	weight=c.weight;
	return *this;
}

void Cow::ShowCow()const
{
	cout<<"name: "<<name<<endl;
	cout<<"hobby: "<<hobby<<endl;
	cout<<"weight: "<<weight<<endl;
}