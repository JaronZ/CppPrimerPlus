#include<iostream>
#include"golf.hpp"
using namespace std;
int main(){
	const int size=4;
	golf ann[size];
	int i;
	for(i=0;i<size;i++){
		if(setgolf(ann[i])==0)
			break;
	}
	if(i!=size)
		setgolf(ann[i],"Mandam",10);
	handicap(ann[i],5);
	for(int j=0;j<i+1;j++){
		showgolf(ann[j]);
	}
	return 0;
}