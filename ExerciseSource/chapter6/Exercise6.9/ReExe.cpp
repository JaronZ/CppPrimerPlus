//Exercise6.9
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct donor{
	char name[20];
	double fund;
};
int main(){
	int counts,n;
	ifstream in;
	in.open("Donor.txt",ios::in);
	if(!in.is_open()){
		cout<<"open Donor.txt Failed"<<endl;
		return 1;
	}
	
	//这里仍然存在问题
	in>>counts;
	struct donor *donors=new struct donor[counts];
	for(int i=0;i<counts;i++){
		//清除缓冲区中残余的换行符
		in>>ch;
		for(int j=0;j<20;j++){
			ch=in.get();
			if(ch=='\n')
				break;
			donors[i].name[j]=ch;
			in.clear();
		}
		in>>donors[i].fund;
	}

	//显示
	n=0;
	cout<<"Grand Patrons:"<<endl;
	for(int i=0;i<counts;i++){
		if(donors[i].fund>=10000){
			cout<<left;
			cout.width(20);
			cout<<donors[i].name;
			cout<<donors[i].fund<<endl;
			n++;
		}
	}
	if(n==0){
		cout<<"None."<<endl;
	}

	n=0;
	cout<<"The others:"<<endl;
	for(int i=0;i<counts;i++){
		if(donors[i].fund<10000){
			cout<<left;
			cout.width(20);
			cout<<donors[i].name;
			cout<<donors[i].fund<<endl;
			n++;
		}
	}
	if(n==0){
		cout<<"None."<<endl;
	}
	return 0;
}