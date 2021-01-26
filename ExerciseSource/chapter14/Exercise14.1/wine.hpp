// wine.hpp -- class Wine definition
#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <string>
#include <utility>
#include <valarray>
using std::string;
using std::valarray;
using std::pair;
class Wine
{
private:
	string label;
	pair<valarray<int>,valarray<int>> yearsandbottles;
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