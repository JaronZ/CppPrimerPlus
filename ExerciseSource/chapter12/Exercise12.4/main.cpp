#include<iostream>
#include"stack.hpp"

using namespace std;

int main()
{
	Stack st1(6);
	st1.push((Item)10);
	st1.push((Item)20);
	Stack st2=st1;
	Stack st3(st2);
	Item it;
	while(!st2.isempty())
	{
		st2.pop(it);
		cout<<it<<endl;
	}
	return 0;
}