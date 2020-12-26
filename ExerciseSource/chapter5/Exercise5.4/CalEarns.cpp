//Exercise5.4
/*判断复利模式下100本金5%需要多久追上单利模式下100本金10%利率*/
#include<iostream>
using namespace std;
int main(){
	int years=0;
	//d存储单利模式下的本金加利率
	//c存储复利模式下的本金加利率
	double d=100,c=100;
	while(c<=d){
		d+=10;
		c*=1.05;
		years++;
	}
	cout<<"After "<<years<<" Cleo's money exceed Daphne's."<<endl;
	return 0;
}