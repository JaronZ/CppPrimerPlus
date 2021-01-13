//stack.cpp -- class Stack methods
#include"stack.hpp"

Stack::Stack(int n)
{
	top=-1;
	size=n;
	pitems=new Item[size];
}

Stack::Stack(const Stack& st)
{
	size=st.size;
	top=st.top;
	pitems=new Item[size];
	for(int i=0;i<=top;i++)
	{
		pitems[i]=st.pitems[i];
	}
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty()const
{
	return top==-1;
}

bool Stack::isfull()const
{
	return top==size-1;
}

bool Stack::push(const Item& item)
{
	if(isfull())
		return false;
	else
		pitems[++top]=item;
	return true;
}

bool Stack::pop(Item& item)
{
	if(isempty())
		return false;
	else
		item=pitems[top--];
	return true;
}

Stack& Stack::operator=(const Stack& st)
{
	delete[] pitems;
	size=st.size;
	top=st.top;
	pitems=new Item[size];
	for(int i=0;i<=top;i++)
	{
		pitems[i]=st.pitems[i];
	}
	return *this;
}