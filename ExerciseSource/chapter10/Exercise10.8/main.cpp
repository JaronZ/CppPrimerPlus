#include<iostream>
#include"list.hpp"
using namespace std;
void pf1(Item & i){
	cout<<i<<" ";
}
void pf2(Item & i){
	i+=1;
}
int main(){
	Item arr[10]{1,2,3,4,5,6,7,8,9,10};
	List l1(arr,10);
	l1.visit(pf1);
	cout<<endl;
	int i=11;
	while(l1.add(i++));
	l1.visit(pf1);
	cout<<endl;
	l1.visit(pf2);
	l1.visit(pf1);
	cout<<endl;
	return 0;
}