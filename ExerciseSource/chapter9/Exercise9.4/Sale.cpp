#include<iostream>
#include"Sale.hpp"
using namespace std;
namespace SALES{
	void setSales(Sales & s,const double ar[],int n){
		s.max=ar[0];
		s.min=ar[0];
		s.average=0;
		for(int i=0;i<n;i++){
			s.sales[i]=ar[i];
			s.average+=ar[i];
			if(s.max<ar[i])
				s.max=ar[i];
			if(s.min>ar[i])
				s.min=ar[i];
		}
		s.average/=n;
	}

	int setSales(Sales & s){
		cout<<"Please enter sales up to four:"<<endl;
		int i;
		s.average=0;
		for(i=0;i<QUARTERS;i++){
			cin>>s.sales[i];
			s.average+=s.sales[i];
		}
		s.average/=i;
		s.max=s.sales[0];
		s.min=s.sales[0];
		for(int j=0;j<i;j++){
			if(s.max<s.sales[j])
				s.max=s.sales[j];
			if(s.min>s.sales[j])
				s.min=s.sales[j];
		}
		return i;
	}

	void showSales(const Sales & s,int n){
		cout<<"Sales:  ";
		for(int i=0;i<n;i++){
			cout<<s.sales[i]<<" ";
		}
		cout<<endl;
		cout<<"Max:	   "<<s.max<<endl;
		cout<<"Min:	   "<<s.min<<endl;
		cout<<"Average:"<<s.average<<endl;
	}
}