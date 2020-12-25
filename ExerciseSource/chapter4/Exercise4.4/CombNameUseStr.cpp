//Exercise4.3
/*要求用户输入姓名，然后程序组织姓名并将其输出
程序要求使用string组织姓名*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	string lname,fname,fullname;
	cout<<"Enter your first name:";
	getline(std::cin,fname);
	cout<<"Enter your last name:";
	getline(std::cin,lname);
	//string类型中重定义了+运算符，所以可以使用+进行字符串的拼接
	fullname=lname+", "+fname;
	cout<<"Here's the information in a single string: "
		<<fullname<<endl;
	return 0;
}