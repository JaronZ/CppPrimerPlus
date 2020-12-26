//Exercise5.9
/*完成Exercise5.8但是使用string对象而不是char数组*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	string words[20];
	cout<<"Enter some words, done to end.";
	int i;
	for(i=0;i<20;i++){
		cin>>words[i];
		if(words[i]=="done")
			break;
	}
	cout<<"You entered a total "<<i<<" words."<<endl;
	return 0;
}