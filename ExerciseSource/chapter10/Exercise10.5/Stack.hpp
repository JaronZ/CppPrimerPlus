//stack.hpp
#ifndef STACK_H_
#define STACK_H_

typedef struct customer{
	char fullname[35];
	double payment;
}Item;

class Stack{
private:
	enum{MAX=10};
	Item items[MAX];
	int top;
public:
	Stack();
	bool IsEmpty()const;
	bool IsFull()const;
	bool Push(const Item & item);
	bool Pop(Item & iter);
};

#endif