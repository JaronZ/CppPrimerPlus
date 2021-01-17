#include<iostream>
#include<cstring>
#include"dma.hpp"
using namespace std;
ABC::ABC(const char * l,int r = 0)
{
	label = new char[strlen(l)+1];
	strcpy(label,l);
	rating=r;
}

ABC::ABC(const ABC & rs)
{
	label = new char[strlen(rs.label)+1];
	strcpy(label,rs.label);
	rating=rs.rating;
}

ABC::~ABC()
{
	delete [] label;
}

void ABC::view()const
{
	cout<<"  label:"<<label<<endl
		<<" rating:"<<rating<<endl;
}

baseDMA::baseDMA(const char * l,int r):ABC(l,r)
{

}

baseDMA::baseDMA(const baseDMA & rs):ABC(rs)
{

}

void baseDMA::view()const
{
	ABC::view();
}

lacksDMA::lacksDMA(const char * c,
		const char * l,int r):ABC(l,r)
{
	strcpy(color,c);
}

lacksDMA::lacksDMA(const lacksDMA & rs):ABC(rs)
{	
	strcpy(color,rs.color);
}

void lacksDMA::view()const
{
	cout<<"  color:"<<color<<endl;
	ABC::view();
}

hasDMA::hasDMA(const char * s,
		const char * l,int r):ABC(l,r)
{
	style=new char[strlen(s)+1];
	strcpy(style,s);
}

hasDMA::hasDMA(const hasDMA & rs):ABC(rs)
{
	style=new char[strlen(rs.style)+1];
	strcpy(style,rs.style);
}

void hasDMA::view()const
{
	cout<<"  Style:"<<style<<endl;
	ABC::view();
}