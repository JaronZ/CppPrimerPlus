//string2.hpp -- my String class definition
#ifndef STRING_H_
#define STRING_G_
#include<iostream>
class String
{
private:
	char* str;				//pointer to string
	int len;				//length of string
	static int num_strings;	//number of objects
	static const int CINLIM=80;	//cin input limit
public:
//	constructors and other methods
	String(const char* s);	//constructor
	String();				//default constructor
	String(const String& st);//copy constructor
	~String();				//destructor
	int length()const{return len;}
	const char* pstr()const{return str;}
	int  has(char ch)const;
	void stringLow();
	void stringUp();
//	overloaded operator methods
	String& operator=(const String& st);
	String& operator=(const char* s);
	String  operator+(const char* s)const;
	String  operator+(const String& st)const;
	char& operator[](int i);
	const char& operator[](int i)const;
// overloaded operator friends
	/*
	friend bool operator< (const String& st1,const String& st2);
	friend bool operator> (const String& st1,const String& st2);
	friend bool operator==(const String& st1,const String& st2);
	friend bool operator!=(const String& st1,const String& st2);
	friend std::ostream operator<<(std::ostream& os,const String& st);
	*/
	friend std::istream& operator>>(std::istream& is,String& st);
//	static function
	static int HowMany();
};

// use global methods better friend meghods -- Effective C++
String 	operator+ (const char* s,const String& st2);
bool 	operator< (const String& st1,const String& st2);
bool	operator> (const String& st1,const String& st2);
bool	operator==(const String& st1,const String& st2);
std::ostream& operator<<(std::ostream& os,const String& st);
#endif