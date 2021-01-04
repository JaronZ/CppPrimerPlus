//Exercise8.2
#include<iostream>
#include<cstring>
using namespace std;
const static int Name_Size=20;
typedef struct Bar{
	char board[Name_Size];
	double weight;
	int heat;
}Bar;

void set(Bar& bar,const char* b="Millennium Munch",
	double w=2.85,int h=350){
	strcpy(bar.board,b);
	bar.weight=w;
	bar.heat=h;
}

void show(const Bar& bar){
	cout<<"Board:  "<<bar.board<<endl;
	cout<<"Weight: "<<bar.weight<<endl;
	cout<<"Heat:   "<<bar.heat<<endl;
}

int main(){
	Bar b;
	set(b);
	show(b);
	set(b,"Apple",2.34,190);
	show(b);
	return 0;
}
