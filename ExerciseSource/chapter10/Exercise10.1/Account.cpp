#include<iostream>
#include<cstring>
#include"Account.hpp"
namespace ACCOUNT{
	Account::Account(const char*n,const char*i,double d){
		strcpy(name,n);
		strcpy(id,i);
		deposit=d;
	}	

	Account::~Account(){}

	void Account::Show()const{
		std::cout<<"Account holder:"<<name<<std::endl;
		std::cout<<"Credit card:   "<<id<<std::endl;
		std::cout<<"Deposit:       "<<deposit<<std::endl;
	}

	bool Account::Deposit(double de){
		if(de<=0){
			std::cout<<"Deposit failed."<<std::endl;
			return false;
		}
		deposit+=de;
		return true;
	}

	bool Account::Withdraw(double wi){
		if(wi<=0||deposit-wi<0){
			std::cout<<"Withdraw failed."<<std::endl;
			return false;
		}
		deposit-=wi;
		return true;
	}
}