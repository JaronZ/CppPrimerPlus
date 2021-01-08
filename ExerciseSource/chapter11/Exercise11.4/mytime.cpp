#include<iostream>
#include"mytime.hpp"

Time::Time()
{
	hours=minutes=10;
}

Time::Time(int h,int m)
{
	hours = h;
	minutes = m;
}

void Time::AddMin(int m)
{
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}

void Time::AddHr(int h)
{
	hours += h;
}

void Time::Reset(int h,int m)
{
	hours = h;
	minutes = m;
}

Time operator+(const Time& t1,const Time& t2)
{
	Time t(t1.hours,t1.minutes);
	t.AddMin(t2.minutes);
	t.AddHr(t2.hours);
	return t;
}

Time operator-(const Time& t1,const Time& t2)
{
	Time t(t1.hours,t1.minutes);
	t.minutes-=t2.minutes;
	if(t.minutes<0)
	{
		t.minutes+=60;
		t.hours--;
	}
	t.AddHr(-t2.hours);
	return t;
}

Time operator*(const Time& t,double n)
{
	Time m(t.hours,t.minutes);
	m.hours*=n;
	m.minutes*=n;
	if(m.minutes>60)
	{
		m.hours+=m.minutes/60;
		m.minutes%=60;
	}
	return m;
}

Time operator*(double m, const Time& t)
{
	return t*m;
}

std::ostream& operator<<(std::ostream & os,const Time & t)
{
	os<<t.hours<<":"<<t.minutes;
	return os;
}