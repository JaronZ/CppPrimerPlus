//stonewt.cpp -- Stonewt methods
#include<iostream>
#include"stonewt.hpp"
using std::cout;
Stonewt::Stonewt(double lbs)
{
	pounds=lbs;
	stone=lbs/Lbs_per_stn;
	pds_left=lbs-stone*Lbs_per_stn;
	mode=POUNDDOU;
}

Stonewt::Stonewt(int stn,double lbs)
{
	stone=stn;
	pds_left=lbs;
	pounds=stn*Lbs_per_stn+lbs;
	mode=POUNDDOU;
}

Stonewt::Stonewt()
{
	stone=0;
	pds_left=0.0;
	pounds=0.0;
	mode=POUNDDOU;
}

Stonewt Stonewt::operator+(const Stonewt& s)const
{
	return Stonewt(pounds+s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt& s)const
{
	return Stonewt(pounds-s.pounds);
}

Stonewt Stonewt::operator*(double d)const
{
	return Stonewt(pounds*d);
}

Stonewt operator*(double d,const Stonewt& s)
{
	return s*d;
}

std::ostream& operator<<(std::ostream& os,const Stonewt& s)
{
	if(s.mode==Stonewt::STONEWT)
		cout<<s.stone<<" stone, "<<s.pds_left<<" pounds";
	else if(s.mode==Stonewt::POUNDINT)
		cout<<static_cast<int>(s.pounds)<<" pounds";
	else
		cout<<s.pounds<<" pounds";
	return os;
}