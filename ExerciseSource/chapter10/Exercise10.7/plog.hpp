class Plog{
private:
	const static int MaxSize=20;
	char name[MaxSize];
	int ci;
public:
	Plog(const char*n="Plgrga",int c=50);
	void setci(int c);
	void showplog()const;
};