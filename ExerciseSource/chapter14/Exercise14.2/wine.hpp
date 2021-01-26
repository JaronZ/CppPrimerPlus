// wine.hpp -- class Wine definition
#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <string>
#include <valarray>
using std::string;
using std::valarray;
using std::pair;
using std::cout;
using std::endl;
template<typename T1,typename T2>
class Pair
{
private:
	T1 year;
	T2 bottles;
public:
	Pair(const T1& s,const T2& m):year(s),bottles(m){}
	Pair(){}
	int sum()const;
	void Set(const T1& s1,const T2& s2);
	void Show(int y)const;
};
template<typename T1,typename T2>
int Pair<T1,T2>::sum()const
{
	return bottles.sum();
}
template<typename T1,typename T2>
void Pair<T1,T2>::Set(const T1& s1,const T2& s2)
{
	year=s1,
	bottles=s2;
}
template<typename T1,typename T2>
void Pair<T1,T2>::Show(int y)const
{
	for(int i=0;i<y;i++)
		cout<<'\t'<<year[i]<<'\t'<<bottles[i]<<endl;
}

typedef valarray<int> Arrayint;
typedef Pair<Arrayint,Arrayint>Pairarray;
class Wine:private string,private Pairarray
{
private:
	int years;
public:
	//initialize label to l,number of years to y
	//vintage years to yr[], bottles to bot[]
	Wine(const char * l,int y,const int yr[],const int bot[]);
	//initialize label to l,number of years to y
	Wine(const char * l,int y);
	void GetBottles();
	const string & Label()const;
	int sum()const;
	void Show()const;
};

#endif