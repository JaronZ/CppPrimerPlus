//Exercise4.5
/*结构CandyBar包含了三个成员，分别是糖果的品牌
糖果的重量、糖果的卡路里(整数),程序声明这个结构，
并将其初始化，最后程序显示糖果的信息*/
#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	int caluli;
};
int main(){
	CandyBar One={"Mocha Munch",2.3,350};
	cout<<"CandyBar's brand is "<<One.brand<<endl;
	cout<<"CandyBar's weight is "<<One.weight<<endl;
	cout<<"CandyBar's calorie is "<<One.caluli<<endl;
	return 0;
}