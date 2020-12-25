//Exercise4.9
/*要求使用new完成Exercise4.6*/
/*结构CandyBar包含了三个成员，分别是糖果的品牌
糖果的重量、糖果的卡路里(整数),程序声明这个结构，
要求创建一个包含三个该结构的数组，并将其初始化，并显示其值*/
#include<iostream>
#include<string>
using namespace std;
struct CandyBar{
	string brand;
	double weight;
	int caluli;
};
int main(){
	struct CandyBar *Candys=new struct CandyBar[3]{
		{"Mocha Munch",2.3,350},
		{"Mocha Munch",1.5,190},
		{"Mocha Munch",0.5,64}
	};
	for(int i=0;i<3;i++){
		cout<<"CandyBar's brand is "<<Candys[i].brand<<endl;
		cout<<"CandyBar's weight is "<<Candys[i].weight<<endl;
		cout<<"CandyBar's calorie is "<<Candys[i].caluli<<endl;
		cout<<endl;
	}
	delete [] Candys;
	return 0;
}