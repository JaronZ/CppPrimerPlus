//Exercise2.5
//用户输入摄氏温度
//将其转换为华氏温度并输出
#include<iostream>
using namespace std;

double CelToFah(double Cel);
int main(){
	double cel;
	cout<<"Please enter a Celsius value:";
	cin>>cel;
	cout<<cel<<" degree Celsius is "<<CelToFah(cel)<<" degree Fahrenheit."<<endl;
	return 0;
}

double CelToFah(double Cel){
	return 1.8*cel+32.0;
}