#include<iostream>
#include"plog.hpp"
using namespace std;
int main(){
	Plog p1;
	Plog p2("PPPPP",69);
	p1.showplog();
	p2.showplog();
	p1.setci(30);
	p1.showplog();
	return 0;
}