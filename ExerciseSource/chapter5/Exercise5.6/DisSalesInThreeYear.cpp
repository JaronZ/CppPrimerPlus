//Exercise5.6
/*完成Exercise5.5,但是用二维数组存储3年的销售量，
程序报告每年销量的总和和三年销量的总和*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int sales[3][12];
	int sumofsales[3]={0};
	int salesofyears=0;
	string months[12]={
		{"January"},{"February"},{"March"},
		{"April"},{"May"},{"June"},
		{"July"},{"August"},{"September"},
		{"October"},{"November"},{"December"}
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<12;j++){
			cout<<i+1<<" year: Sales of "<<months[j]<<" :";
			cin>>sales[i][j];
			sumofsales[i]+=sales[i][j];
		}
	}
	for(int i=0;i<3;i++){
		cout<<"Sales of "<<i+1" year is "<<sumofsales[i]<<endl;
		salesofyears+=sumofsales[i];
	}
	cout<<"Sales of three years is "<<salesofyears<<endl;
	return 0;
}