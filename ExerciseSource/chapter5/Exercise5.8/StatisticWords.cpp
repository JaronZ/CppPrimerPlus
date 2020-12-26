//Exercise5.8
/*使用char数组循环读取每一个单词，直到用户输入done为止
程序统计用户共输入了多少个单词*/
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char words[20][15];
	cout<<"Enter some words, done to end."<<endl;
	int i;
	for(i=0;i<20;i++){
		cin>>words[i];
		if(strcmp(words[i],"done")==0)
			break;
	}
	cout<<"You entered a total "<<i<<" words."<<endl;
	return 0;
}