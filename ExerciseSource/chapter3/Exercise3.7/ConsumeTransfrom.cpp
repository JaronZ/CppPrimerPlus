//Exercise3.7
/*用户按照欧洲风格输入汽车耗油量，
将其转换成为美国风格耗油量*/
#include<iostream>
using namespace std;

int main(){
	double baigongli,meijialun;
	cout<<"Please enter Your car's consumption (per hundred kilometers):";
	cin>>baigongli;
	meijialun=(1/(baigongli/100/4.45))/1.6;
	cout<<"Miles per gallon is "<<meijialun<<endl;
	return 0;
}