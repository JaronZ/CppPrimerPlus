//Exercise4.2
/*和Exercise4.1一样,但要求使用char数组而不是string*/
#include<iostream>
using namespace std;

int main(){
	char fname[10],lname[10];
	char grade;
	int age;
	cout<<"What is your first name?";
	//使用函数cin.getline(char*,size_t n)读取一行输入
	cin.getline(fname,sizeof(fname));
	cout<<"What is your last name?";
	//使用函数cin.get(char*,size_t n)
	//注意cin.get()函数会将换行符残留在缓冲区内，因此要使用getchar()读取该换行符
	cin.get(lname,sizeof(lname));
	getchar();
	cout<<"What letter grade do you deserve?";
	cin>>grade;
	cout<<"What is your age?";
	cin>>age;
	cout<<"Name: "<<lname<<", "<<fname<<endl;
	cout<<"Grade: "<<grade+char(1)<<endl;
	cout<<"Age: "<<age<<endl;
	return 0;
}