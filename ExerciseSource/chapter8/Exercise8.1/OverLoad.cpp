//Exercise8.1
#include<iostream>
using namespace std;
static int count=0;
void show(const char* ch);
void show(const char* ch,int n);
int main(){
	const char* ch{"Hhhhhhhhhhhhhh"};
	show(ch);
	cout<<"第一次调用void show(char*,int)"<<endl;
	show(ch,0);
	cout<<"第二次调用void show(char*,int)"<<endl;
	show(ch,100);
	cout<<"第三次调用void show(char*,int)"<<endl;
	show(ch,200);
	return 0;
}
void show(const char* ch){
	cout<<ch<<endl;
}
void show(const char* ch,int n){
	count++;
	for(int i=0;i<count;i++){
		cout<<ch<<endl;
	}
}