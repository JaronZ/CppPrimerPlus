#include <iostream>
#include "studentc.hpp"

using std::cout;
using std::endl;

std::ostream & Student::arr_out(std::ostream & os) const
{
	if(scores.size()>0)
	{
		int i;
		for(int i = 0;i<scores.size();i++)
		{
			os<<scores[i]<<" ";
		 	if(i%5 == 4)
				os<<endl;
		}
		if(i%5!=0)
			os<<endl;
	}
	else
		os<<" empty array"<<endl;
	return os;
}

double Student::Average()const
{
	if(scores.size()>0)
		return scores.sum()/scores.size();
	else
		return 0;
}

const std::string & Student::Name() const
{
	return name;
}

double & Student::operator[] (int i)
{
	return scores[i];
}

double Student::operator[] (int i) const
{
	return scores[i];
}

std::istream & operator>>(std::istream & is,
								   Student & stu)
{
	is>>stu.name;
	return is;
}

std::istream & getline(std::istream & is,
		 			   Student & stu)
{
	getline(is,stu.name);
	return is;
}

std::ostream & operator<<(std::ostream & os,
						  const Student & stu)
{
	os<<"Scores for " << stu.name << ":\n";
	stu.arr_out(os);
	return os;
}