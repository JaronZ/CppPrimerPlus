typedef int Item;
class List{
private:
	const static int MaxSize=20;
	Item data[MaxSize];
	int count;
public:
	List(Item* arr=nullptr,int n=0);
	bool add(Item e);
	bool isEmpty()const;
	bool isFull()const;
	void visit(void (*pf)(Item&));
};