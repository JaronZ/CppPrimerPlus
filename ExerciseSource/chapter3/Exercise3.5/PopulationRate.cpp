//Exercise3.5
/*用户输入全球人口总数和某个国家的人口数
程序输出该国家占全球人口总数的百分比*/
#include<iostream>
using namespace std;
int main(){
	long long int popincou,popinearth;
	cout<<"Enter the world's population:";
	cin>>popinearth;
	cout<<"Enter the population of the China:";
	cin>>popincou;
	cout<<"The population of China is "<<((double)popincou)/popinearth*100
		<<"% of the world population."<<endl;
	return 0;
}