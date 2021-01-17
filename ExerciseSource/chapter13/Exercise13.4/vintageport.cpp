#include<iostream>
#include<cstring>
#include"vintageport.hpp"

VintagePort::VintagePort():Port()
{
	nickname=new char;
	*nickname='\0';
}

VintagePort::VintagePort(const char * br,const char * st,int b,
	const char * nn,int y):Port(br,st,b)
{
	nickname=new char[strlen(nn)+1];
	strcpy(nickname,nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
	delete [] nickname;
	nickname=new char[strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year=vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	delete [] nickname;
	nickname=new char[strlen(vp.nickname)+1];
	strcpy(nickname,vp.nickname);
	year=vp.year;
	Port::operator=(vp);
	return *this;
}

void VintagePort::Show()const
{
	cout<<"Nickname:"<<nickname<<endl;
	Port::Show();
	cout<<"    year:"<<year<<endl;
}

ostream & operator<<(ostream & os,const VintagePort & vp)
{
	os<<"Nickname:"<<vp.nickname<<endl;
	os<<vp;
	os<<"    year:"<<vp.year<<endl;
	return os;
}