#ifndef VECTOR_H_
#define VECTOR_H_
#include<iostream>
#include<cmath>
using std::atan2;
using std::sqrt;
//namespade VECTOR
namespace VECTOR
{
	const double Rad_to_deg=45.0/atan(1.0);
	//class Vector
	class Vector
	{	
	public:
	//RECT for rectangle,POL for Polar modes
		enum Mode{RECT,POL};
	private:
		double x;			//horizontal value
		double y;			//vertical value
		/*************************************************************************************
		*double mag;		//length of vector
		*double ang;		//direction of vector in degrees
		**************************************************************************************/
		Mode mode;			//RECT of POL
	//private methods for setting values
		/**************************************************************************************
		*void set_mag();
		*void set_ang();
		*void set_x();
		*void set_y();
		***************************************************************************************/
	public:
		Vector();
		Vector(double n1,double n2,Mode form = RECT);
		void reset(double n1,double n2,Mode form = RECT);
		~Vector();
		double xval()const{return x;}		//report x value
		double yval()const{return y;}		//report y value
		double magval()const{return sqrt(x*x+y*y);}	//report magnitude
		double angval()const{return atan2(y,x)*Rad_to_deg;}	//report angle
		void polar_mode();					//set mode to POL
		void rect_mode();					//set mode to RECT
	//operator overloading
		Vector operator+(const Vector & b)const;
		Vector operator-(const Vector & b)const;
		Vector operator-()const;
		Vector operator*(double n)const;
	//friends
		friend Vector operator*(double n,const Vector & a);
		friend std::ostream & operator<<(std::ostream & os, const Vector & v);

	};//end class Vector

}//end namespace VECTOR
#endif