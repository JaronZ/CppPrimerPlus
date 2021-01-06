namespace ACCOUNT{
	class Account
	{
	public:
		Account(const char*n,const char*i,double d);
		~Account();
	private:
		char name[20];
		char id[17];
		double deposit;
	public:
		void Show()const;
		bool Deposit(double de);
		bool Withdraw(double wi);
	};
}