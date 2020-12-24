//Exercise3.6
/*用户输入驱车里程数和汽油量
程序输出百公里油耗*/
#include<iostream>
using namespace std;
int main(){
	double miles,gallons;
	double kilimeters,volumes;
	cout<<"Please enter mileage(miles):";
	cin>>miles;
	cout<<"Please enter fuel consumption(gallons):";
	cin>>gallons;
	kilimeters=miles*1.6;
	volumes=gallons*4.55;
	cout<<"Your car's consumption per hundred kilometers is "
	<<volumes/kilometers*100<<endl;
	return 0;
}