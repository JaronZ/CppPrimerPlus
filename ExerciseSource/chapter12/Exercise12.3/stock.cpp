//stock.cpp -- Stock methods
#include<iostream>
#include<cstring>
#include"stock.hpp"
using std::cout;
using std::endl;
using std::ios;

//constructor
Stock::Stock()			//default constructor				
{
	company=new char[strlen("no name")+1];
	strcpy(company,"no name");
	shares=0;
	share_val=0.0;
	total_val=0.0;
}

Stock::Stock(const char* co,int n,double pr)
{
	company=new char[strlen(co)+1];
	strcpy(company,co);
	if(n<0)
	{
		cout<<"Number of shares can't be negative; "
			<<company<<" shares set to 0.\n";
	}
	else
		shares=n;
	share_val=pr;
	set_tot();
}

//class destructor
Stock::~Stock()
{
	delete [] company;
}

//other methods
void Stock::buy(int num,double price)
{
	if(num<0)
	{
		cout<<"Number of shares purcharsed can't be negative. "
			<<"Transaction is aborted.\n";
	}
	else
	{
		shares+=num;
		share_val=price;
		set_tot();
	}
}

void Stock::sell(int num,double price)
{
	if(num<0||num>shares)
	{
		cout<<"The number of shares sold wrong. "
			<<"Transaction is aborted.\n";
	}
	else
	{
		shares-=num;
		share_val=price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val=price;
	set_tot();
}

std::ostream& operator<<(std::ostream& os, const Stock& s)
{
	using std::ios_base;
	ios_base::fmtflags orig=
		os.setf(ios_base::fixed,ios_base::floatfield);
	std::streamsize prec=os.precision(3);

	os<<"Company: "<<s.company
	  <<" shares: "<<s.shares<<'\n';
	os<<" Share Price: $"<<s.share_val;
	os.precision(2);
	cout<<" Total worth: $"<<s.total_val<<endl;

	os.setf(orig,ios_base::floatfield);
	os.precision(prec);
	return os;
}

const Stock& Stock::topval(const Stock& s)const
{
	if(s.total_val>total_val)
		return s;
	else
		return *this;
}