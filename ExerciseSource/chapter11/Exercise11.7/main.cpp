//main.cpp -- use Complex class
#include<iostream>
#include"complex0.hpp"
using namespace std;
int main()
{
	Complex a(3.0,4.0);
	Complex c;
	cout<<"Enter a complex number(q to quit):\n";
	while(!(cin>>c).fail())
	{
		cout<<"a is "<<a<<'\n';
		cout<<"a + c is "<<a+c<<'\n';
		cout<<"a - c is "<<a-c<<'\n';
		cout<<"a * c is "<<a*c<<'\n';
		cout<<"2 * c is "<<2*c<<'\n';
		cout<<"Enter a complex number (q to quit):\n";
	}
	cout<<"Done!\n";
	return 0;
}