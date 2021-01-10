//string2.cpp -- String methods
#include<iostream>
#include<cctype>		//toupper、、、
#include<cstring>		//sizeof operator  strcpy
#include"string2.hpp"
using std::cout;
using std::endl;
using std::cin;

//initializing static class member
int String::num_strings = 0;

//static function
int String::HowMany()
{
	return num_strings;
}

String::String()
{
	len=0;
	str=new char;
	*str='\0';
	num_strings++;
}

String::String(const char* s)
{
	len=strlen(s);
	str=new char[len + 1];
	strcpy(str,s);
	num_strings++;
}

String::String(const String& st)
{
	//最好使用length，避免使用sizeof()，使用sizeof会降低效率
	len=st.length();
	str=new char[len + 1];
	strcpy(str,st.pstr());
	num_strings++;
}

String::~String()
{
	--num_strings;
	delete [] str;
}

int String::has(char ch)const
{
	int count=0;
	for(int i=0;i<len;i++)
		if(str[i]==ch)
			count++;
	return count;
}

void String::stringLow()
{
	for(int i=0;i<len;i++)
		if(isupper(str[i]))
			str[i]=tolower(str[i]);
}

void String::stringUp()
{
	for(int i=0;i<len;i++)
		if(islower(str[i]))
			str[i]=toupper(str[i]);
}

String& String::operator=(const String& st)
{
	if(this==&st)
		return *this;
	len=st.length();
	delete [] str;
	str=new char[len+1];
	strcpy(str,st.pstr());
	return *this;
}

String& String::operator=(const char* s)
{
	len=strlen(s);
	delete [] str;
	str=new char[len+1];
	strcpy(str,s);
	return *this;
}

String  String::operator+(const char* s)const
{
	int l,m,n;
	m=len;
	n=strlen(s);
	l=m+n;
	char newstr[l+1];
	strcpy(newstr,str);
	strcpy(newstr+m,s);
	return String(newstr);
}

String  String::operator+(const String& st)const
{
	int l,m,n;
	m=len;
	n=st.length();
	l=m+n;
	char newstr[l+1];
	strcpy(newstr,str);
	strcpy(newstr+m,st.pstr());
	return String(newstr);
}

char& String::operator[](int i)
{
	return str[i];
}

const char& String::operator[](int i)const
{
	return str[i];
}

std::istream& operator>>(std::istream& is,String& st)
{
	char temp[String::CINLIM];
	is.get(temp,String::CINLIM);
	if(is)
		//use operator= to assign
		st=temp;
	while(is&&is.get()!='\n')
		continue;
	return is;
}

String 	operator+ (const char* s,const String& st2)
{
	int l,m,n;
	m=strlen(s);
	n=st2.length();
	l=m+n;
	char newstr[l+1];
	strcpy(newstr,s);
	strcpy(newstr+m,st2.pstr());
	return String(newstr);
}

bool 	operator< (const String& st1,const String& st2)
{
	return strcmp(st1.pstr(),st2.pstr())<0;
}

bool	operator> (const String& st1,const String& st2)
{
	return strcmp(st1.pstr(),st2.pstr())>0;
}

bool	operator==(const String& st1,const String& st2)
{
	return strcmp(st1.pstr(),st2.pstr())==0;
}

std::ostream& operator<<(std::ostream& os,const String& st)
{
	os<<st.pstr();
	return os;
}