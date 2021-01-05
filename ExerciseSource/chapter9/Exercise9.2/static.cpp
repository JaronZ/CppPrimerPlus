//Exercise9.2
#include<iostream>
#include<string>
using namespace std;
void strcount(string str);
int main(){
	
	string input;
	char next;

	cout<<"Enter a line:\n";
	getline(cin,input);
	while(input.size()!=0){
		strcount(input);
		cout<<"Enter next line (empty line to quit):\n";
		getline(cin,input);
	}
	cout<<"Bye\n";
	return 0;
}
void strcount(string str){
	static int total=0;
	cout<<"\""<<str<<"\" contains ";
	total+=str.size();
	cout<<str.size()<<" characters\n";
	cout<<total<<" characters total\n";
}