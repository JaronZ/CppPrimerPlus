//Exercise7.3
#include<iostream>
#include<cstring>
using namespace std;
struct box{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void ShowBox(struct box b){
	cout<<"maker:"<<b.maker<<endl;
	cout<<"height:"<<b.height<<endl;
	cout<<"width:"<<b.width<<endl;
	cout<<"length:"<<b.length<<endl;
	cout<<"volume:"<<b.volume<<endl;
}
void SetVol(struct box *b){
	b->volume=b->width*b->height*b->length;
}
int main(){
	struct box b;
	b.length=10;
	b.width=5;
	b.height=7.5;
	strcpy(b.maker,"By myself.");
	SetVol(&b);
	ShowBox(b);
	return 0;
}