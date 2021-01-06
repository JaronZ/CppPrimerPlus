//Main.cpp
#include<iostream>
#include"Stack.hpp"
using namespace std;
int main(){
	customer cs[5]{
		{"James Hacker",100},
		{"Hanfre olif",2003},
		{"Sherlock Holmes",2000},
		{"Iren Edler",300},
		{"Jaron Z",3000}
	};
	Item e;
	double sum=0;
	Stack stack;
	for(int i=0;i<5;i++){
		stack.Push(cs[i]);
	}
	while(!stack.IsEmpty()){
		stack.Pop(e);
		cout<<e.fullname<<" "<<e.payment<<endl;
		sum+=e.payment;
	}
	cout<<"Sum: "<<sum<<endl;

	return 0;
}