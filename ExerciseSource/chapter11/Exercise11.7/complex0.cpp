//complex0.cpp -- Complex methods
#include<iostream>
#include"complex0.hpp"
using std::cout;
Complex::Complex(double r,double i)
{
	real=r;
	imag=i;
}

Complex Complex::operator+(const Complex& c)const
{
	return Complex(real+c.real,imag+c.imag);
}

Complex Complex::operator-(const Complex& c)const
{
	return Complex(real-c.real,imag-c.imag);
}	

Complex Complex::operator*(const Complex& c)const
{
	return Complex(real*c.real-imag*c.imag,real*c.imag+imag*c.real);
}

Complex Complex::operator*(double d)const
{
	return Complex(real*d,imag*d);
}

Complex Complex::operator~()const
{
	return Complex(real,-imag);
}

Complex operator*(double d,const Complex& c)
{
	return c*d;
}

std::ostream& operator<<(std::ostream& os,const Complex& c)
{
	os<<"("<<c.real<<","<<c.imag<<")";
	return os;
}

std::istream& operator>>(std::istream& is,Complex& c)
{
	cout<<"real: ";
	is>>c.real;
	cout<<"imaginary: ";
	is>>c.imag;
	return is;
}