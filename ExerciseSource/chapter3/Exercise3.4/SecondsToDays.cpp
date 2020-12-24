//Exercise3.4
/*用户输入秒数
程序输出以天、时、分、秒为时间的输出*/
#include<iostream>
using namespace std;
int main(){
	long long int lseconds;
	int days,hours,minutes,seconds;
	cout<<"Enter the number of seconds:";
	cin>>lseconds;
	seconds=lseconds%60;
	lseconds/=60;
	minutes=lseconds%60;
	lseconds/=60;
	hours=lseconds%24;
	days=lseconds/24;
	cout<<days*24*60*60+hours*60*60+minutes*60+seconds<<" seconds = "
		<<days<<" days,"
		<<hours<<" hours,"
		<<minutes<<" minutes,"
		<<seconds<<" seconds"<<endl;
	return 0;
}