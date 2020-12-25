//Exercise4.1
/*用户输入信息，程序向下调整成绩，并输出信息*/
#include<iostream>
#include<string>
using namespace std;

int main(){
	string fname,lname;
	char grade;
	int age;
	cout<<"What is your first name?";
	getline(std::cin,fname);
	cout<<"What is your last name?";
	getline(std::cin,lname);
	cout<<"What letter grade do you deserve?";
	cin>>grade;
	cout<<"What is your age?";
	cin>>age;
	cout<<"Name: "<<lname<<", "<<fname<<endl;
	cout<<"Grade: "<<grade+char(1)<<endl;
	cout<<"Age: "<<age<<endl;
	return 0;
}