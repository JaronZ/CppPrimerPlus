#include<iostream>
#include<cstring>
#include"golf.hpp"

void setgolf(golf& g,const char* name,int hc){
	strcpy(g.fullname,name);
	g.handicap=hc;
}

int setgolf(golf& g){
	std::cout<<"PLease enter your fullname:";
	std::cin.getline(g.fullname,Len);
	if(g.fullname[0]=='\0')
		return 0;
	std::cout<<"Please enter your handicap:";
	std::cin>>g.handicap;
	std::cin.get();
	return 1;
}

void handicap(golf& g,int hc){
	g.handicap=hc;
}

void showgolf(const golf& g){
	std::cout<<"fullname:"<<g.fullname<<std::endl;
	std::cout<<"handicap:"<<g.handicap<<std::endl;
}
