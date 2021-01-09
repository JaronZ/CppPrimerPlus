//complexo.hpp -- definition for Complex class
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include<iostream>
class Complex
{
private:
	double real,imag;
public:
	Complex(double r=0,double i=0);
	Complex operator+(const Complex& c)const;
	Complex operator-(const Complex& c)const;
	Complex operator*(const Complex& c)const;
	Complex operator*(double d)const;
	Complex operator~()const;
	friend Complex operator*(double d,const Complex& c);
	friend std::ostream& operator<<(std::ostream& os,const Complex& c);
	friend std::istream& operator>>(std::istream& is,Complex& c);
};
#endif