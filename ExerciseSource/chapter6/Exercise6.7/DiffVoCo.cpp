//Exercise6.7
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main(){
	static const int strsize=10;
	static const int count=20;
	int v,c,o,i;
	char ch;
	char words[count][strsize];
	cout<<"Enter Words (q to quit):"<<endl;
	for(i=0;i<count;i++){
		cin>>words[i];
		if(strcmp(words[i],"q")==0){
			words[i][0]='\0';
			break;
		}
	}
	i=v=c=o=0;
	while(words[i][0]!='\0'){
		ch=words[i][0];
		ch=tolower(ch);
		if(isalpha(words[i][0]))
			if(ch=='a'||ch=='e'||ch=='i'
				||ch=='o'||ch=='u')
				v++;
			else
				c++;
		else
			o++;
		i++;
	}
	cout<<v<<" words beginning with vowels"<<endl;
	cout<<c<<" words beginning with consonants"<<endl;
	cout<<o<<" others"<<endl;
}
