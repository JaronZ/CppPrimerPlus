#include<iostream>
#include"golf.hpp"
using namespace std;
int main(){
	const int size=4;
	Golf ann[size];
	int i;
	for(i=0;i<size;i++){
		ann[i]=Golf(i);
		if(ann[i].IsEmpty())
			break;
	}
	if(i!=size)
		ann[i]=Golf("Mandam",10);
	ann[i].Handicap(5);
	for(int j=0;j<i+1;j++){
		ann[i].Showgolf();
	}
	return 0;
}