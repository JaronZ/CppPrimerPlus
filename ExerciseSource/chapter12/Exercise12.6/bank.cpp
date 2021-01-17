//bank.cpp -- using the Queue interface
//compile with queue.cpp
#include<iostream>
#include<cstdlib>
#include<ctime>
#include"queue.hpp"
const int MIN_PER_HR = 60;

bool newcustomer(double x);			//is there a new customer?

int main()
{
	using std::endl;
	using std::cout;
	using std::cin;
	using std::ios_base;

	std::srand(std::time(0));		//random initializing of rand()

	cout<<"Case Study: Bank of Heather Automatic Teller\n";
	cout<<"Enter maximum size of queue: ";
	int qs;
	cin>>qs;
	Queue line1(qs);				//line1 queue up to qs people
	Queue line2(qs);				//second line1 queue up to qs peopls

	cout<<"Enter the number of simulation hours: ";
	int hours;
	cin>>hours;
	//simulation will run 1 cycle per minute
	long cyclelimit = MIN_PER_HR*hours;	//# of cycles

	cout<<"Enter the average number of customers per hour: ";
	double perhour;				//average # of arrival perhour
	cin>>perhour;
	double min_per_cust;		//average time between arrivals;
	min_per_cust=MIN_PER_HR / perhour;

	Item temp;					//new customer data
	long turnaways=0;			//turned away by full queue
	long customersline1=0;		//joined the queue line1
	long customersline2=0;		//joined the queue line2
	long servedline1=0;			//served during the simulation in line1
	long servedline2=0;			//served during the simulation in line2
	long sum_line1=0;			//cumulative line1 length
	long sum_line2=0;			//cumulative line2 length
	int wait_timeline1=0;		//time until autoteller is free in line1
	int wait_timeline2=0;		//time until autoteller is free in line2
	long line1_wait=0;			//cumulative time in line1
	long line2_wait=0;			//cumulative time in line2

	//running the simulation
	for(int cycle = 0;cycle<cyclelimit;cycle++)
	{
		if(newcustomer(min_per_cust))	//have newcomer
		{
			if(line1.isfull()&&line2.isfull())
				turnaways++;
			else
			{
				temp.set(cycle);		//cycle = time of arrival
				if(line1.queuecount()<line2.queuecount())
				{
					line1.enqueue(temp);		//add new comer to line1
					customersline1++;
				}
				else
				{
					line2.enqueue(temp);
					customersline2++;
				}
				
			}
		}
		if(wait_timeline1<=0&&!line1.isempty())
		{
			line1.dequeue(temp);		//attend next customer
			wait_timeline1=temp.ptime();//for wait_time minutes
			line1_wait+=cycle-temp.when();
			servedline1++;
		}
		if(wait_timeline2<=0&&!line2.isempty())
		{
			line2.dequeue(temp);		//attend next customer
			wait_timeline2=temp.ptime();//for wait_time minutes
			line2_wait+=cycle-temp.when();
			servedline2++;
		}
		if(wait_timeline1>0)
			wait_timeline1--;
		if(wait_timeline2>0)
			wait_timeline2--;
		sum_line1+=line1.queuecount();
		sum_line2+=line2.queuecount();
	}
//reporting result
	if(customersline1>0)
	{
		cout<<"In line1."<<endl;
		cout<<"customers accepted: "<<customersline1<<endl;
		cout<<"average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed,ios_base::floatfield);
		cout<<(double)sum_line1/cyclelimit<<endl;
		cout<<" average wait time: "
			<<(double)line1_wait/servedline1<<" minutes\n";
	}
	else
		cout<<"No customers!\n";
	if(customersline2>0)
	{
		cout<<"In line2."<<endl;
		cout<<"customers accepted: "<<customersline2<<endl;
		cout<<"average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed,ios_base::floatfield);
		cout<<(double)sum_line2/cyclelimit<<endl;
		cout<<" average wait time: "
			<<(double)line2_wait/servedline2<<" minutes\n";
	}
	else
		cout<<"No customers!\n";
	cout<<endl;
	cout<<"  customers served: "<<servedline1+servedline2<<endl;
	cout<<"         turnaways: "<<turnaways<<endl;
	cout<<"Done!\n";

	return 0;
}

//x=average time,in minutes, between customers
//return value is true if customer shows up this minute
bool newcustomer(double x)
{
	return (std::rand()*x/RAND_MAX<1);
}