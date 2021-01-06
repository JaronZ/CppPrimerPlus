#include<iostream>
#include"Account.hpp"
using namespace std;
int main(){
	using namespace ACCOUNT;
	Account Eddy("Eiddy Steve","19985637481928374",10000);
	Eddy.Show();
	Eddy.Deposit(1000);
	Eddy.Show();
	Eddy.Withdraw(100000);
	Eddy.Withdraw(2000);
	Eddy.Show();
	return 0;
}