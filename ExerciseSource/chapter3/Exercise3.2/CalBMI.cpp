//Exercise3.2
/*用户输入身高(英尺、英寸)和体重(pounds)
计算BMI
BMI的计算公式 体重(kg)除以（身高(m)的平方）
一英寸等于0.0254米，一英尺等于12英寸，一千克等于2.2磅*/
#include<iostream>
int main(){
	double inches,feets;
	double pounds;
	double height,weight;
	double BMI;
	cout<<"Please enter your weight，use Feet and Inche：";
	cin>>feets>>inches;
	height=(feets*12+inches)*0.0254;
	cout<<"Please enter your height，use pounds：";
	cin>>pounds;
	weight=pounds/2.2;
	BMI=weight/(height*height);
	cout<<"Your BMI is "<<BMI<<endl;
	return 0;
}