#include<iostream>
#include"cow.hpp"
using namespace std;
int main()
{
	Cow c1("Keb who","eat drink f**k",310);
	Cow c2;
	Cow c3(c1);
	c1.ShowCow();
	c2.ShowCow();
	c3.ShowCow();
	c2=c1;
	c2.ShowCow();
}