//main.cpp -- use Stonewt class
#include<iostream>
#include"stonewt.hpp"
using std::cout;
using std::endl;
int main()
{
	Stonewt s1(156.8);
	Stonewt s2(15,5.67);
	Stonewt s3=s1+s2;
	s3.stone_mode();
	cout<<s3<<endl;
	s3=s1*0.7;
	s3.poundint_mode();
	cout<<s3<<endl;
	s3.pounddou_mode();
	cout<<s3<<endl;
	s3=s2-s1;
	s3.stone_mode();
	cout<<s3<<endl;
	return 0;
}