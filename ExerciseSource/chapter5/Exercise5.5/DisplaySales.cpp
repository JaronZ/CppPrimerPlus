//Exercise5.5
/*输入全年的销量，程序计算并循环输出每月的销量总和*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int sales[12];
	int sumofsales=0;
	string months[12]={
		{"January"},{"February"},{"March"},
		{"April"},{"May"},{"June"},
		{"July"},{"August"},{"September"},
		{"October"},{"November"},{"December"}
	};
	for(int i=0;i<12;i++){
		cout<<"Sales of "<<months[i]<<" :";
		cin>>sales[i];
		sumofsales+=sales[i];
	}
	cout<<"Sales of this year is "<<sumofsales<<endl;
	return 0;
}