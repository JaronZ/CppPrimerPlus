#include<iostream>
#include"Sale.hpp"
using namespace std;
int main(){
	using namespace SALES;
	double s[]{6.7,3.4,7.6,5.6};
	Sales sales1(s,4);
	Sales sales2;
	sales1.ShowSales();
	cout<<endl;
	sales2.ShowSales();
	return 0;
}