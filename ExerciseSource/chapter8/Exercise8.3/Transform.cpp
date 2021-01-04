//Exercise8.3
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void ToUpper(string&str){
	for(string::size_type i=0;i<str.size();i++){
		str[i]=toupper(str[i]);
	}
}
int main(){
	string str;
	cout<<"Enter a string (q to quit):";
	getline(std::cin,str);
	while(str!="q"){
		ToUpper(str);
		cout<<str<<endl;
		cout<<"Next string (q to quit):";
		getline(std::cin,str);
	}
	cout<<"Bye"<<endl;
	return 0;
}