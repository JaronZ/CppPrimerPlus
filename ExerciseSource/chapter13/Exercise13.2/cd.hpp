#ifndef CD_H_
#define CD_H_
//base class
class Cd
{
private:
	char * performers;
	char * label;
	int selections;			//number of selection
	double playtime;		//playing time in minutes
public:
	Cd(const char * s1,const char * s2,int n,double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report()const;		//report all CD data
	virtual Cd & operator=(const Cd & d);
};

#endif