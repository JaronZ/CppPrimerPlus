//Exercise8.4
#include<iostream>
#include<cstring>
using namespace std;
struct stringy{
	char*str;
	int ct;
};

void set(struct stringy &s,char*ch){
	s.ct=strlen(ch);
	s.str=new char[s.ct+1];
	strcpy(s.str,ch);
}

void show(stringy &s){
	cout<<s.str<<endl;
}

void show(const char*ch,int n=1){
	for(int i=0;i<n;i++){
		cout<<ch<<endl;
	}
}

int main(){
	stringy beany;
	char testing[]="Reality isn't what it used to be.";
	set(beany,testing);
	show(beany);
	testing[0]='D';
	testing[1]='u';
	show(testing);
	show(testing,3);
	show("Done!");
	return 0;
}