//Exercise7.2
#include<iostream>
using namespace std;
void Input(double score[],int n){
	cout<<"Please enter ten scores."<<endl;
	for(int i=0;i<n;i++){
		cin>>score[i];
	}
}
double CalAver(double score[],int n){
	double result=0.0;
	for(int i=0;i<n;i++){
		result+=score[i];
	}
	return result/n;
}
void Show(double score[],int n){
	cout<<"score:"<<endl;
	for(int i=0;i<n;i++){
		cout<<score[i]<<" ";
	}
	cout<<endl;
	cout<<"average: "<<CalAver(score,n)<<endl;
}
int main(){
	double scores[10];
	Input(scores,10);
	Show(scores,10);
	return 0;
}