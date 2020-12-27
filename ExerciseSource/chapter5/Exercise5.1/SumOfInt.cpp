//Exercise5.1
/*用户输入两个整数，程序输出这两个整数之间(包括这两个整数)的所有整数和*/
#include<iostream>
using namespace std;

int main(){
	int x,y;
	int t,sum;
	cout<<"Please enter two Integers:";
	cin>>x>>y;
	if(x>y){
		t=x;
		x=y;
		y=t;
	}
	sum=0;
	for(;x<=y;x++){
		sum+=x;
	}
	cout<<"The sum of the integers between these two numbers is "
		<<sum<<endl;
	return 0;
}