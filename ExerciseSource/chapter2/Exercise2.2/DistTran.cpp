//Exercise2.2
//用户输入一个long为单位的距离，将他转换为码
//1 long == 220码
#include<iostream>
using namespace std;

int main(){
	long int l;
	cout<<"Please enter a number."<<endl;
	cin>>l;
	cout<<"Distance is "<<l*220<<" 码."<<endl;
	return 0;
}