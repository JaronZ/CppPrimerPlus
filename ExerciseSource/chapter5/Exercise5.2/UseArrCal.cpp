//Exercise5.2
/*使用array和long double重写程序清单5.4，并计算100!*/
#include<iostream>
#include<array>
using namespace std;

int main(){
	const int ArSize=100;
	std::array<long double,ArSize> factorials;
	for(int i=0;ArSize;i++){
		if(i==0)
			factorials[i]=1;
		else
			factorials[i]=factorials[i-1]*(i+1);
	}
	cout<<ArSize<<"! = "<<factorials[ArSize-1]<<endl;
	return 0;
}