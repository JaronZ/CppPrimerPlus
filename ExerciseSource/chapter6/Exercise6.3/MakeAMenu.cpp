//Exercise6.3
/*编写一个菜单驱动，该菜单显示4个选项，
程序响应用户输入的相应的选项*/
#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Please enter one of the following choices:"<<endl;
	cout<<"c) carnivore            p) painist"<<endl;
	cout<<"t) tree                 g) game   "<<endl;
	do{
		cout<<"Please enter a c, p, t, or g:";
		cin>>ch;
	}while(!(ch=='c'||ch=='p'||ch=='t'||ch=='g'));
	switch(ch){
		case 'c':
			cout<<"A carnivore is a animal."<<endl;
			break;
		case 'p':
			cout<<"A painist is a man."<<endl;
			break;
		case 't':
			cout<<"A tree is a planet."<<endl;
			break;
		case 'g':
			cout<<"A game is just a game."<<endl;
			break;
	}
	return 0;
}