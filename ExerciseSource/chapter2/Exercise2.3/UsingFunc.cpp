//Exercise2.3
//使用函数完成指定的输出
#include<iostream>
using namespace std;

void ShowMice();
void HowTheyRun();
int main(){
	ShowMice();
	ShowMice();
	HowTheyRun();
	HowTheyRun();
	return 0;	
}

void ShowMice(){
	cout<<"Tree blind mice"<<endl;
}

void HowTheyRun(){
	cout<<"See how they run"<<endl;
}