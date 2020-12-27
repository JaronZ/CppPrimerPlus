//Exercise6.2
/*循环读取最多10个double值到一个double数组中，
程序遇到非数字输入将会结束输入，并报告这些数字的平均值，
以及有多少个数字*/
#include<iostream>
#include<array>
using namespace std;
int main(){
	array<double 10> arr;
	int i=0;
	double sum=0.0;
	while(!cin.fail()){
		cin>>arr[i];
		i++;
		if(i==10)
			break;
	} 
	for(i=0;i<arr.size();i++){
		sum+=arr[i];
	}
	cout<<"You've typed it all in "<<arr.size()
		<<" double type numbers."<<endl;
	cout<<"These number's average is "
		<<sum/arr.size()<<endl;
	return 0;
}