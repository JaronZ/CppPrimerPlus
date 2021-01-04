//Exercise8.6
#include<iostream>
#include<cstring>			//strlen函数所需要包含的头文件
using namespace std;
template <typename T>
T maxn(T nums[],int n){
	T e=nums[0];
	for(int i=1;i<n;i++){
		if(nums[i]>e)
			e=nums[i];
	}
	return e;
}

template <>
char* maxn<char*>(char* pch[],int n){
	size_t m=strlen(pch[0]);
	char* ch=pch[0];
	for(int i=1;i<n;i++){
		if(strlen(pch[i])>m){
			m=strlen(pch[i]);
			ch=pch[i];
		}
	}
	return ch;
}

int main(){
	double numd[]{1,2.3,5.6,3.4,23,4};
	cout<<"The max number of the numd is:"<<maxn(numd,6)<<endl;
	int numi[]{3,4,5,2,6,1};
	cout<<"The max number of the numi is:"<<maxn(numi,6)<<endl;
	//C++不允许将常量string赋值给char*，必须要是const char*
	//虽然会出现warning，但是能够通过编译
	char* pch[4]={
		{"I am the longest string!!!"},
		{"Yes, you are right."},
		{"I don't think so."},
		{"No you just jealous"}
	};
	cout<<"The longest string is:"<<endl;
	cout<<maxn(pch,4)<<endl;
	return 0;
}