//Exercise2.6
//用户输入一个数据，main调用一个函数将这个数转换为另一单位制
#include<iostream>
using namespace std;

double UnitTran(double digit);
int main(){
	double astronunit;
	cout<<"Enter the number of light years:";
	cin>>astronunit;
	cout<<astronunit<<" light years = "<<UnitTran(astronunit)<<" astronomical units"<<endl;
	return 0;
}
double UnitTran(double digit){
	return digit*63240.0;
}