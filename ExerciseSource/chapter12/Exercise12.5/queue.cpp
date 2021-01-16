//queue.cpp -- Queue and Customer methods
#include<iostream>
#include"queue.hpp"

//time set to a random value in the range 1-3
void Customer::set(long when)
{
	processtime=std::rand()%3+1;
	arrive=when;
}

//Queue methods
Queue::Queue(int qs):qsize(qs)
{
	front=rear=nullptr;
	items=0;
}

Queue::~Queue()
{
	Item i;
	while(!isempty())
		dequeue(i);
}

bool Queue::isempty()const
{
	return items==0;
}

bool Queue::isfull()const
{
	return items==qsize;
}

int Queue::queuecount()const
{
	return items;
}

bool Queue::enqueue(const Item & item)
{
	if(isfull())
		return false;
	Node * add = new Node;	//create Node
	add->item=item;
	add->next=nullptr;
	items++;
	if(front==nullptr)
		front=add;
	else
		rear->next=add;
	rear=add;
	return true;
}

bool Queue::dequeue(Item & item)
{
	if(isempty())
		return false;
	Node * del = front;
	item=del->item;
	items--;
	if(items==0)
		front=rear=nullptr;
	else 
		front=front->next;
	delete del;
	return true;
}