//Exercise4.8
/*程序要求用户输入披萨的信息，并使用结构存储信息
然后显示信息,程序要求使用new分配内存，并且先输入披萨的直径*/
#include<iostream>
#include<string>
using namespace std;
struct pizza
{
	string company;
	double dia;
	double weight;
};
int main(){
	struct pizza *pizzas=new struct pizza;
	cout<<"Please enter the dia of the pizza:";
	cin>>pizzas->dia;
	cout<<"Please enter the company of the pizza:";
	getline(std::cin,pizzas->company);
	cout<<"Please enter the weight of the pizza:";
	cin>>pizzas->weight;

	cout<<"Company:"<<pizzas->company<<endl;
	cout<<"Dia:"<<pizzas->dia<<endl;
	cout<<"Weight:"<<pizzas->weight<<endl;
	delete pizzas;
	return 0;
}