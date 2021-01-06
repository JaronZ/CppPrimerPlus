#include<iostream>
#include<cstring>
#include<string>
#include"Person.hpp"
using namespace std;
Person::Person(const string & ln,const char * fn){
	lname=ln;
	strcpy(fname,fn);
}

void Person::Show()const{
	cout<<fname<<" "<<lname<<endl;
}

void Person::FormalShow()const{
	cout<<lname<<", "<<fname<<endl;
}