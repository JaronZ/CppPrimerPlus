// newxcp.cpp -- the bad_alloc exception
#include <iostream>
#include <new>
#include <cstdlib>	// for exit(), EXIT_FAILURE
using namespace std;

struct Big {
	double stuff[20000];
};

int main() {
	Big * pb;
	try {
		cout << "Trying to get a big block of memory:\n";
		pb = new Big[12000];	// 1,600,000,000 bytes
	}
	catch (bad_alloc & bd) {
		cout << "Caught the exception!\n";
		cout << bd.what() << endl;
		exit(EXIT_FAILURE);
	}
	cout << "Memory successfully allocated\n";
	pb[0].stuff[0] = 4;
	cout << pb[0].stuff[0] << endl;
	delete [] pb;
	return 0;
}