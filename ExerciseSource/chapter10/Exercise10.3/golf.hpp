//golf.h -- for pe9-1.cpp

class Golf{
private:
	const static int Len=40;
	char fullname[Len];
	int handicap;
public:
	Golf(const char* name,int hc);
	Golf(int i);
	//这里要求编译器创建默认构造函数，用于数组的初始化操作
	Golf()=default;
	bool IsEmpty();
	void Handicap(int hc);
	void Showgolf()const;
};

