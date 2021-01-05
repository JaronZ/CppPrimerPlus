#include<iostream>
#include"Sale.hpp"
using namespace std;
int main(){
	using namespace SALES;
	double s[]{6.7,3.4,7.6,5.6};
	Sales sale1,sale2;
	setSales(sale1,s,4);
	int count=setSales(sale2);
	showSales(sale1,4);
	cout<<endl;
	showSales(sale2,count);
	return 0;
}