#include<iostream>
#include<cstring>
#include"golf.hpp"

Golf::Golf(const char* name,int hc){
	strcpy(fullname,name);
	handicap=hc;
}

//如果输入空行，则结束
Golf::Golf(int i){
	std::cout<<"PLease enter your fullname:";
	std::cin.getline(fullname,Len);
		if(IsEmpty())
			return;
	std::cout<<"Please enter your handicap:";
	std::cin>>handicap;
	std::cin.get();
}

bool Golf::IsEmpty(){
	if(fullname[0]=='\0')
		return true;
	return false;
}

void Golf::Handicap(int hc){
	handicap=hc;
}

void Golf::Showgolf()const{
	std::cout<<"fullname:"<<fullname<<std::endl;
	std::cout<<"handicap:"<<handicap<<std::endl;
}
