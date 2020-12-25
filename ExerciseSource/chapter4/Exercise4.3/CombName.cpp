//Exercise4.3
/*要求用户输入姓名，然后程序组织姓名并将其输出
程序要求使用char数组和cstring中的函数*/
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

int main(){
	char fname[10],lname[10],fullname[20];
	char*pos;
	cout<<"Enter your first name:";
	cin.getline(fname,sizeof(fname));
	cout<<"Enter your last name:";
	cin.getline(lname,sizeof(lname));
	//char* strncpy(char* dest,const char *src,size_t n);
	//其中该函数的返回值为指向fullname的指针，指向的位置为最后一个复制元素的下一个位置
	pos=strncpy(fullname,lname,strlen(lname));
	pos=strncpy(pos,", ",strlen(", "));
	strncpy(pos,fname,strlen(fname));
	cout<<"Here's the information in a single string: "
		<<fullname<<endl;
	return 0;
}