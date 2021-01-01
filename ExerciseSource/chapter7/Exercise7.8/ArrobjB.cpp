//Exercise7.8b
#include<iostream>
using namespace std;
const int Seasons=4;
const char*Snames[Seasons]={
	{"Spring"},
	{"Summer"},
	{"Fall"},
	{"Winter"}
};
struct Cost{
	double arr[Seasons];
};
void fill(struct Cost *pa);
void show(struct Cost da);
int main(){
	struct Cost pa;
	fill(&pa);
	show(pa);
	return 0;
}

void fill(struct Cost *pa){
	for(int i=0;i<Seasons;i++){
		cout<<"Enter "<<Snames[i]<<" expenses: ";
		cin>>pa->arr[i];
	}
}

void show(struct Cost da){
	double total=0.0;
	cout<<"\nEXPENSES\n";
	for(int i=0;i<Seasons;i++){
		cout<<Snames[i]<<": $"<<da.arr[i]<<endl;
		total+=da.arr[i];
	}
	cout<<"Total Expenses: $"<<total<<endl;
}