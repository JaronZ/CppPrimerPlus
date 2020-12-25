//Exercise4.10
/*用户输入三次50米跑的成绩，程序显示次数和平均成绩
要求程序使用array管理成绩*/
#include<iostream>
#include<array>
using namespace std;

int main(){
	double p;
	array<double,3> perform;
	for(int i=0;i<perform.size();i++){
		cout<<i+1<<":Please enter your 50 meter running time:";
		cin>>p;
		perform[i]=p;
	}
	p=0.0;
	for(int i=0;i<perform.size();i++){
		p+=perform[i];
	}
	p/=perform.size();
	cout<<"You've run "<<perform.size()<<" times already."<<endl;
	cout<<"Your average scores is "<<p<<" ."<<endl;
	return 0;
}