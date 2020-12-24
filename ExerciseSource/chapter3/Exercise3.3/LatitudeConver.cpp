//Exercise3.3
/*将一个以度分秒形式输入的纬度转换为维度*/
#include<iostream>
using namespace std;

int main(){
	int degree,minute,second;
	double latitude;
	cout<<"Enter a latitude in degrees,minutes,and seconds:"<<endl;
	cout<<"First,enter the degree: ";
	cin>>degree;
	cout<<"Second,enter the minute: ";
	cin>>minute;
	cout<<"Third,enter the second: ";
	cin>>second;
	cout<<degree<<" degrees,"<<minute<<" minutes,"<<second<<" seconds = ";
	cout<<degree+((double)minute)/60+(((double)second)/60)/60<<" degrees."<<endl;
	return 0;
}