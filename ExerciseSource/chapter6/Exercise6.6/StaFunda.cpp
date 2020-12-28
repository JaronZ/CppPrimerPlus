//Exercise6.6
#include<iostream>
#include<string>
using namespace std;
struct donor{
	string name;
	double fund;
};
int main(){
	int counts,n;
	cout<<"Please enter the number of donors:";
	cin>>counts;
	//清除缓冲区中残余的换行符
	cin.get();
	struct donor *donors=new struct donor[counts];
	for(int i=0;i<counts;i++){
		cout<<"Please enter the donor's name:";
		getline(std::cin,donors[i].name);
		cout<<"Please enter the donor's funds:";
		cin>>donors[i].fund;
		//清除缓冲区中残余的换行符
		cin.get();
	}

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