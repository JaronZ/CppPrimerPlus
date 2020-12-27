//Exercise6.4
#include<iostream>
using namespace std;
const static int strsize=20;
struct bop{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int perference;
};
int main(){
	struct bop bops[3]{
		{{"Linus torvalds"},{"the father of Linux"},{"boss"},1},
		{{"Ivor Horton"},{"writer"},{"worker"},3},
		{{"Scott Meyers"},{"Effective's writer"},{"He have a dog"},2}
	};
	char ch;
	cout<<"Benevolent Order of Programmers Report."<<endl;
	cout<<"a.display by name.      b.display by title."<<endl;
	cout<<"c.display by hopname.   d.display by preference."<<endl;
	cout<<"Enter your choice:";
	cin.get(ch);
	while(ch!='q'){
		switch(ch){
			case 'a':
				for(int i=0;i<3;i++)
					cout<<bops[i].fullname<<endl;
				break;
			case 'b':
				for(int i=0;i<3;i++)
					cout<<bops[i].title<<endl;
				break;
			case 'c':
				for(int i=0;i<3;i++)
					cout<<bops[i].bopname<<endl;
				break;
			case 'd':
				for(int i=0;i<3;i++){
					switch(bops[i].perference){
						case 1:
							cout<<bops[i].fullname<<endl;
							break;
						case 2:
							cout<<bops[i].title<<endl;
							break;
						case 3:
							cout<<bops[i].bopname<<endl;
							break;
					}
				}
				break;
		}
		cout<<"Next choice:";
		cin.get(ch);
		if(cin.fail()){
			cin.clear();
			continue;
		}
	}
	return 0;
}