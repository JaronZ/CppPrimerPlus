//Exercise8.5
#include<iostream>
using namespace std;
template<typename T>
T max5(T num[5]){
	T e=num[0];
	for(int i=1;i<5;i++){
		if(e<num[i])
			e=num[i];
	}
	return e;
}
int main(){
	int numi[]{3,23,123,5,2};
	double numd[]{2,5.23,5.24,2.1,3};
	char numc[]{'a','d','S','f','z'};
	cout<<"The max number in numi:"<<max5(numi)<<endl;
	cout<<"The max number in numd:"<<max5(numd)<<endl;
	cout<<"The max number in numc:"<<max5(numc)<<endl;
	return 0;
}