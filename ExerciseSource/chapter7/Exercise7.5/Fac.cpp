//Exercise7.5
#include<iostream>
using namespace std;
int f(int n);
int main(){
	int n;
	while(true){
		cout<<"Please enter a integer value:"<<endl;
		cin>>n;
		if(cin.fail()||n<0)
			return 0;
		cout<<n<<"! = "<<f(n)<<endl;
	}
	return 0;
}

int f(int n){
	if(n==1||n==0)
		return 1;
	else
		return n*f(n-1);
}