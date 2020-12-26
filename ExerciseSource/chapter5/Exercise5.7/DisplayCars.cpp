//Exercise5.7
/*使用一个car结构存储车的生产商和生产年份。
向用户询问有多少辆车，使用new创建动态数组，
最后程序输出汽车的信息*/
#include<iostream>
#include<string>
using namespace std;
struct car{
	string made;
	int DofP;
};
int main(){
	int counts;
	cout<<"How many cars will you input:";
	cin>>counts;
	struct car* cars=new struct car[counts];
	for(int i=0;i<counts;i++){
		cout<<"Car #"<<i+1<<":"<<endl;
		cout<<"Please enter the make:";
		getline(std::cin,cars[i].made);
		cout<<"Please enter the year made:";
		cin>>cars[i].DofP;
	}
	cout<<"Here is your collection:"<<endl;
	for(int i=0;i<counts;i++){
		cout<<cars[i].DofP<<" "<<cars[i].made<<endl;
	}
	return 0;
}