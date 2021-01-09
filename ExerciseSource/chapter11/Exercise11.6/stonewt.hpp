//stonewt.hpp -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include<iostream>
class Stonewt
{
private:
	enum{Lbs_per_stn = 14};					//pounds per stone
	int stone;								//whole stone
	double pds_left;						//fractional pounds
	double pounds;							//entire weight in pounds
	enum Mode{STONEWT,POUNDINT,POUNDDOU};	//mode of report
	Mode mode;
public:				
	Stonewt(double lbs);					//constructor for double pounds
	Stonewt(int stn, double lbs);			//constructor for stone, lbs
	Stonewt();								//default constructor
	~Stonewt(){};
	//change mode
	void stone_mode(){mode=STONEWT;}
	void poundint_mode(){mode=POUNDINT;}
	void pounddou_mode(){mode=POUNDDOU;}
	//operator overloading
	Stonewt operator+(const Stonewt& s)const;
	Stonewt operator-(const Stonewt& s)const;
	Stonewt operator*(double d)const;
	//relational opreator overloading
	bool operator==(const Stonewt& s)const{return pounds==s.pounds;}
	bool operator!=(const Stonewt& s)const{return pounds!=s.pounds;}
	bool operator< (const Stonewt& s)const{return pounds<s.pounds;}
	bool operator> (const Stonewt& s)const{return pounds>s.pounds;}
	bool operator<=(const Stonewt& s)const{return pounds<=s.pounds;}
	bool operator>=(const Stonewt& s)const{return pounds>=s.pounds;}
	//friend operator overloading
	friend Stonewt operator*(double d,const Stonewt& s);
	friend std::ostream& operator<<(std::ostream& os,const Stonewt& s);
};
#endif 