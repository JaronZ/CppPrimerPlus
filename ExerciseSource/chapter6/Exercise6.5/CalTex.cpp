//Exercise6.5
#include<iostream>
using namespace std;
int main(){
	double incomes,taxes;
	while(true){
		cout<<"Please enter your income:";
		cin>>incomes;
		if(cin.fail()||incomes<0)
			break;
		if(incomes<=5000){
			taxes=0;
			incomes=5000;
		}
		else if(incomes<=15000){
			taxes=(incomes-5000)*0.1;
			incomes=incomes-taxes;
		}
		else if(incomes<=35000){
			taxes=(15000-5000)*0.1+(incomes-15000)*0.15;
			incomes=incomes-taxes;
		}
		else{
			taxes=(15000-5000)*0.1+(35000-15000)*0.15+(incomes-35000)*0.2;
			incomes=incomes-taxes;
		}
		cout<<"Your Incomes is "<<incomes+taxes<<endl;
		cout<<"Your taxes is "<<taxes<<endl;
		cout<<"Your realized incomes is "<<incomes<<endl;
	}
	return 0;	
}