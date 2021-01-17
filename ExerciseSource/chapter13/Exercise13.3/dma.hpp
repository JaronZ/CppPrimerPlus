//dma.hpp -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include<iostream>

class ABC
{
private:
	char * label;
	int rating;
public:
	ABC(const char * l,int r);
	ABC(const ABC & rs);
	virtual ~ABC()=0;
	virtual void view()const;
};

class baseDMA:public ABC
{
public:
	baseDMA(const char * l = "null",int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA(){}
	virtual void view()const;	
};

class lacksDMA:public ABC
{
private:
	enum{COL_LEN=40};
	char color[COL_LEN];
public:
	lacksDMA(const char * c="blank",
		const char * l="null",int r=0);
	lacksDMA(const lacksDMA & rs);
	virtual ~lacksDMA(){}
	virtual void view()const;
};

class hasDMA:public ABC
{
private:
	char * style;
public:
	hasDMA(const char * s = "none",
		const char * l = "null",int r=0);
	hasDMA(const hasDMA & rs);
	virtual ~hasDMA(){delete [] style;}
	virtual void view()const;
};
#endif