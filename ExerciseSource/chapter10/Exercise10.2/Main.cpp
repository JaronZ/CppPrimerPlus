#include<iostream>
#include"Person.hpp"
using namespace std;
int main(){
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy","Sam");
	one.Show();
	two.Show();
	two.FormalShow();
	three.Show();
	three.FormalShow();
	return 0;
}