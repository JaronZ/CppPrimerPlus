//Exercise7.10
#include<iostream>
using namespace std;
double add(double,double);
double multiply(double,double);
double mis(double,double);
double devide(double,double);
double calculate(double,double,double (*pa)(double,double));
int main(){
	const int SLEN=4;
	double (*pa[SLEN])(double,double)={
		add,multiply,mis,devide
	};
	double a=2.5,b=10.4;
	for(int i=0;i<SLEN;i++){
		cout<<"result: "<<calculate(a,b,pa[i])<<endl;
	}
	return 0;
}
double add(double a,double b){
	return a+b;
}
double multiply(double a,double b){
	return a*b;
}
double mis(double a,double b){
	return a-b;
}
double devide(double a,double b){
	return a/b;
}
double calculate(double a,double b,double (*pa)(double,double)){
	return pa(a,b);
}