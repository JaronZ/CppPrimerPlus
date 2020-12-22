//Exercise2.7
//用户输入小时和分钟数，在main中使用函数以特定格式输出该时间
#include<iostream>
using namespace std;

void ShowTime(int h,int m);
int main(){
	int h,m;
	cout<<"Enter the number of hours:";
	cin>>h;
	cout<<"Enter the number of minutes:";
	cin>>m;
	ShowTime(h,m);
	return 0;
}
void ShowTime(int h,int m){
	cout<<"Time:"<<h<<":"<<m<<endl;
}