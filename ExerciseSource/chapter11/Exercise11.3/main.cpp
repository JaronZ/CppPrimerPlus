//randwalk -- using the Vector class
//compile with the vector.cpp file
#include<iostream>
#include<cstdlib>		//rand() srand() prototypes	
#include<ctime>			//time() prototype
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
	int count, average = 0;
	int max,min;
	cout<<"Enter target distance (q to quit) : ";
	while(cin >> target)
	{
		average=0;
		cout<<"Enter step length: ";
		if(!(cin >> dstep))
			break;

		cout<<"Enter number of times: ";
		if(!(cin >> count))
			break;

		for(int i=0;i < count;i++)
		{
			while(result.magval() < target)
			{
				direction = rand() % 360;
				step.reset(dstep,direction,Vector::POL);
				result = result + step;
				steps++;
			}
			if(i==0)
			{
				max=steps;
				min=steps;
			}
			else
			{
				if(max < steps)
					max = steps;
				if(min > steps)
					min = steps;
			}	
			average+=steps;
			cout << "After " << steps << " steps,the subject "
			"has the following location:\n";
			cout << result << endl;
			result.polar_mode();
			cout << " or\n" << result << endl;
			cout << "Average outward distance per step = "
				 << result.magval()/steps << endl;
			
			steps = 0;
			result.reset(0.0,0.0);
			cout << endl;
		}

		cout << "Max: " << max << ", Min: " << min << endl;
		average/=count;
		cout << "Average: " << average << endl;
		cout << "Enter target distance (q to quit): ";
	}
	cout<<"Bye!\n";
	cin.clear();
	while(cin.get()!='\n')
		continue;
	return 0;
}