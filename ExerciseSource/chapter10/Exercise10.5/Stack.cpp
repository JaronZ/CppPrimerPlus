#include"Stack.hpp"
#include<iostream>
Stack::Stack(){
	top=0;
}

bool Stack::IsEmpty()const{
	return top==0;
}

bool Stack::IsFull()const{
	return top==MAX;
}

bool Stack::Push(const Item & item){
	if(top<MAX){
		items[top++]=item;
		return true;
	}
	else
		return false;
}

bool Stack::Pop(Item & item){
	if(IsEmpty())
		return false;
	item=items[--top];
	return true;
}