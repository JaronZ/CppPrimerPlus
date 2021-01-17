#ifndef VINTAGEPORT_H_
#define VINTAGEPORT_H_
#include"port.hpp"
class VintagePort:public Port 	
{
private:
	char * nickname;		//i.e., "The noble" or "Old Velvet", etc.	
	int year;
public:
	VintagePort();
	VintagePort(const char * br,const char * st,int b,const char * nn,int y);
	VintagePort(const VintagePort & vp);
	~VintagePort(){delete[]nickname;}
	VintagePort & operator=(const VintagePort & vp);
	void Show()const;
	friend ostream & operator<<(ostream & os,const VintagePort & vp);
};
#endif
