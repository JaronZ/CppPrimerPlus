//main.cpp -- use Stonewt class
#include<iostream>
#include"stonewt.hpp"
using std::cout;
using std::endl;
using std::cin;
int main()
{
	Stonewt stn[6]
	{
		Stonewt(11*14),
		Stonewt(13,4.5),
		Stonewt(9,13.7)
	};
	for(int i=3;i<6;i++)
	{
		cout<<"Enter the weight(pounds):";
		double pds;
		cin>>pds;
		stn[i]=Stonewt(pds);
	}
	Stonewt max=stn[0],min=stn[0],Eleven=Stonewt(11,0);
	int count=0;
	for(int i=0;i<6;i++)
	{
		if(max<stn[i])
			max=stn[i];
		if(min>stn[i])
			min=stn[i];
		if(stn[i]==Eleven)
			count++;
	}

	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
	cout<<"The number of weight equal 11 stone: "<<count<<endl;
	return 0;
}