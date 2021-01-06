#include<iostream>
#include<cstring>
#include"plog.hpp"

Plog::Plog(const char*n,int c){
	strcpy(name,n);
	ci=c;
}

void Plog::setci(int c){
	ci=c;
}

void Plog::showplog()const{
	std::cout<<"Name:"<<name<<std::endl;
	std::cout<<"CI:  "<<ci<<std::endl;
}