#include<iostream>
#include"move.hpp"
using namespace std;
int main(){
	Move a;
	Move b(2,5);
	a.showmove();
	cout<<endl;
	Move c = a.add(b);
	c.showmove();
	cout<<endl;
	a.reset(10,30);
	a.showmove();
	cout<<endl;
	return 0;
}