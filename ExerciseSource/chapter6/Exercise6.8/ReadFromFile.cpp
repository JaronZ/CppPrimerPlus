//Exercise6.8
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	ifstream in;
	in.open("read.txt",ios::in);
	int count=0; 
	/*这里必须要有ch，即使不使用它
	因为这样才能调用该函数原型istream& get(char& var);
	否则将调用该函数int get();若调用了第二个函数原型，则将无法使用
	in.get().eof()这样的语句,因为其返回值为int*/
	while(!in.get(ch).eof())
		count++;
	cout<<"This text have total "<<count<<" characters."<<endl;
	in.close();
	return 0;
}