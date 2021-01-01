//Exercise7.6
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int Fill_array(double arr[],int n);
void Show_array(double arr[],int n);
void Reverse_array(double arr[],int n);
int main(){
	int count;
	double arr[10];
	count=Fill_array(arr,10);
	Show_array(arr,count);
	Reverse_array(arr,count);
	Show_array(arr,count);
	Reverse_array(arr+1,count-2);
	Show_array(arr,count);
	return 0;
}
int Fill_array(double arr[],int n){
	cout<<"Please enter some double numbers at most "<<n<<" numbers."<<endl;
	int i;
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(cin.fail())
			return i;
	}
	return i;
}
void Show_array(double arr[],int n){
	cout<<"double arrays:"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void Reverse_array(double arr[],int n){
	double temp;
	for(double *f=arr,*l=arr+n-1;f!=l&&f+1!=l;f+=1,l-=1){
		temp=*f;
		*f=*l;
		*l=temp;
	}
}