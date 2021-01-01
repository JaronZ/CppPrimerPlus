//Exercise7.7
#include<iostream>
using namespace std;
double* Fill_array(double arr[],int n);
void Show_array(double* beg,double* end);
void Reverse_array(double* beg,double* end);
int main(){
	double arr[10];
	double *end=Fill_array(arr,10);
	Show_array(arr,end);
	Reverse_array(arr,end);
	Show_array(arr,end);
	Reverse_array(arr+1,end-1);
	Show_array(arr,end);
	return 0;
}
double* Fill_array(double arr[],int n){
	cout<<"Please enter some double numbers at most "<<n<<" numbers."<<endl;
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(cin.fail()){
			if(i==0)
				return NULL;
			return &arr[i-1];
		}
	}
	return &arr[i];
}
void Show_array(double* beg,double* end){
	double* b=beg,*e=end;
	while(true){
		cout<<*b<<" ";
		if(b==e){
			break;
		}
		b++;
	}
	cout<<endl;
}
void Reverse_array(double* beg,double* end){
	double *b=beg,*e=end;
	double temp;
	while(b!=e&&b+1!=e){
		temp=*b;
		*b=*e;
		*e=temp;
		b++;
		e--;
	}
}