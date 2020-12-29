//Exercise7.4
#include<iostream>
using namespace std;
double Pro(int number,int picks,int c){
	double result=1.0;
	int n=1;
	for(;picks>0;picks--,number--){
		result*=number;
		n*=picks;
	}
	result=n/result;
	result=result/c;
	return result;
}
int main(){
	int p,n,c;
	p=5;
	n=47;
	c=27;
	cout<<"The probability is "<<Pro(n,p,c)<<endl;
	return 0;
}