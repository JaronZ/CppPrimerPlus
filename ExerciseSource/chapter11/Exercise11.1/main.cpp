//randwalk -- using the Vector class
//compile with the vector.cpp file
#include<iostream>
#include<cstdlib>		//rand() srand() prototypes	
#include<ctime>			//time() prototype
#include<fstream>		//ofstream class
#include"vector.hpp"
int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));					//seed random-number generate
	double direction;
	Vector step;
	Vector result(0.0,0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	ofstream ostar("file.txt",ios::out|ios::app);
	cout<<"Enter target distance (q to quit) : ";
	while(cin>>target)
	{
		cout<<"Enter step length: ";
		if(!(cin>>dstep))
			break;

		while(result.magval()<target)
		{
			direction = rand() % 360;
			step.reset(dstep,direction,Vector::POL);
			result = result + step;
			ostar<<result<<endl;
			steps++;
		}
		ostar<<"After "<<steps<<" steps,the subject "
			"has the following location:\n";
		ostar<<result<<endl;
		result.polar_mode();
		ostar<<" or\n"<<result<<endl;
		ostar<<"Average outward distance per step = "
			<<result.magval()/steps<<endl;
		steps = 0;
		result.reset(0.0,0.0);
		ostar<<endl;
		cout<<"Enter target distance (q to quit): ";
	}
	ostar<<"Bye!\n";
	cin.clear();
	while(cin.get()!='\n')
		continue;
	return 0;
}