//Exercise3.1
//用户输入以英尺为单位的升高，要求转换成英尺和英寸
//一英尺等于十二英寸
#include<iostream>
using namespace std;

int main(){
	int inche;
	const int inch_to_feet=12;
	double inches,feet;
	cout<<"Please Enter height of you(inches):____\b\b\b\b";
	cin>>inche;
	inches=inche%inch_to_feet;
	feet=inche/inch_to_feet;
	cout<<"Your height is "<<feet<<" Feets and "<<inches<<" Inches"<<endl;
	return 0;
}