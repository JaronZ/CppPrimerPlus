//Exercise5.10
/*用户输入数字指定显示多少行，程序显示相应行数的'*'*/
#include<iostream>
using namespace std;
int main(){
	int counts;
	cout<<"Please enter a number of integers(negative)."<<endl;
	cin>>counts;
	for(int i=0;i<counts;i++){
		for(int j=0;j<counts;j++){
			if(j<counts-i-1)
				cout<<'.';
			else
				cout<<'*';
		}
		cout<<endl;
	}
	return 0;
}