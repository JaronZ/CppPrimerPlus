#include<iostream>
#include"vintageport.hpp"
using namespace std;
int main()
{	
	Port a("vigu","grr",100);
	Port b("viga","gcc",200);
	VintagePort c("vigu","gkk",100,"none",1998);
	VintagePort d("vigu","gee",200,"none",1998);
	VintagePort e;
	a.Show();
	cout<<endl<<b<<endl;
	c.Show();
	cout<<endl;
	c+=100;
	c.Show();	
	e=c;
	cout<<endl;
	e.Show();
	return 0;
}