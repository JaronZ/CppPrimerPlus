#include<iostream>
#include"Sale.hpp"
using namespace std;
namespace SALES{
	Sales::Sales(const double ar[],int n){
		max=ar[0];
		min=ar[0];
		average=0;
		for(int i=0;i<n;i++){
			sales[i]=ar[i];
			average+=ar[i];
			if(max<ar[i])
				max=ar[i];
			if(min>ar[i])
				min=ar[i];
		}
		average/=n;
		count=n;
	}

	Sales::Sales(){
		cout<<"Please enter sales up to four:"<<endl;
		average=0;
		for(count=0;count<QUARTERS;count++){
			cin>>sales[count];
			average+=sales[count];
			if(cin.eof())
				break;
		}
		average/=count;
		max=sales[0];
		min=sales[0];
		for(int j=0;j<count;j++){
			if(max<sales[j])
				max=sales[j];
			if(min>sales[j])
				min=sales[j];
		}
	}

	void Sales::ShowSales()const{
		cout<<"Sales:  ";
		for(int i=0;i<count;i++){
			cout<<sales[i]<<" ";
		}
		cout<<endl;
		cout<<"Max:	   "<<max<<endl;
		cout<<"Min:	   "<<min<<endl;
		cout<<"Average:"<<average<<endl;
	}
}