//Exercise9.3
#include<iostream>
#include<new>
#include<cstring>
using namespace std;
struct chaff{
	char dross[20];
	int slag;
};

int main(){
	size_t s=sizeof(chaff)*2;
	char buffer1[sizeof(chaff)*2];
	char* buffer2=new char[s];
	struct chaff *ff1=new (buffer1) chaff [2];
	struct chaff *ff2=new (buffer2) chaff [2];

	strcpy(ff1[0].dross,"opq");
	ff1[0].slag=100;
	strcpy(ff2[0].dross,"opq");
	ff2[0].slag=100;
	strcpy(ff1[1].dross,"kdj");
	ff1[1].slag=200;
	strcpy(ff2[1].dross,"kdj");
	ff2[1].slag=200;

	for(int i=0;i<2;i++){
		cout<<"dross:"<<ff1[i].dross<<endl;
		cout<<"slag:"<<ff1[i].slag<<endl;
		cout<<"dross:"<<ff2[i].dross<<endl;
		cout<<"slag:"<<ff2[i].slag<<endl;
	}

	delete buffer2;
	return 0;
}