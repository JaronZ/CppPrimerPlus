//Exercise7.1
#include<iostream>
using namespace std;
double Reconcile(const double &x,const double &y){
	double result=2*x*y/(x+y);
	return result;
}
int main(){
	double x,y;
	while(true){
		cout<<"Please enter two number 0 to quit:"<<endl;
		cin>>x>>y;
		if(x==0||y==0)
			break;
		cout<<x<<" "<<y<<" reconcile is "<<Reconcile(x,y)<<endl;
	}
	return 0;
}