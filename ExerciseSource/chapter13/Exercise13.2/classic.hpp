#ifndef CLASSIC_H_
#define CLASSIC_H_
//derived class
#include"cd.hpp"
class Classic : public Cd
{
private:
	char * mainwork;
public:
	Classic(const char * mainwork,const char * s1,const char * s2,int n,double x);
	Classic(const Classic & d);
	Classic();
	virtual ~Classic();
	virtual void Report()const;		//report all classic data
	virtual Classic & operator=(const Classic & d);
};

#endif