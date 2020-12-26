//Exercise5.3
/*用户每输入一个数字，程序报告累计和，直到用户输入0*/
#include<iostream>
using namespace std;

int main(){
	double sum=0,dig;
	cout<<"Please enter a number, I'll output the sum of your all input."<<endl;
	cin>>dig;
	while(dig!=0.0){
		sum+=dig;
		cout<<"The sum of all your input now is "<<sum<<end;
		cout<<"Please enter a number, I'll output the sum of your all input."<<endl;
		cin>>dig;
	}
	return 0;
}