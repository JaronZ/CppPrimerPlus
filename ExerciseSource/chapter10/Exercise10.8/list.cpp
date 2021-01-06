#include"list.hpp"
List::List(Item* arr,int n){
	if(n<0||n>MaxSize)
		count=0;
	count=n;
	for(int i=0;i<count;i++){
		data[i]=arr[i];
	}
}

bool List::add(Item e){
	if(!isFull()){
		data[count++]=e;
		return true;
	}
	else
		return false;
}

bool List::isEmpty()const{
	return count==0;
}

bool List::isFull()const{
	return count==MaxSize;
}

void List::visit(void (*pf)(Item& )){
	for(int i=0;i<count;i++)
		pf(data[i]);
}