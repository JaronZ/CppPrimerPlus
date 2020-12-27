//Exercise6.1
/*程序从键盘读取输入，直到遇到@符号为止，回显输入(数字除外)
并将字母的小写转换为大写，将字母的大写转换为小写*/
#include<iostream>
#include<cctype>
using namespace std;
int main(){
	cout<<"Please enter some characters:"<<endl;
	char ch=cin.get();
	while(ch!='@'){
		if(isalpha(ch)||isspace(ch)||ispunct(ch)){
			ch=(islower(ch)&&isalpha(ch))?toupper(ch):tolower(ch);
			cout<<ch;
		}
		ch=cin.get();
	}
	return 0;
}