// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <string>
using std::string;

class bad_means : public std::logic_error
{
protected:
	double a;
	double b;
public:
	bad_means(double x, double y, const string & str)
	 	: std::logic_error(str), a(x), b(y) {}
};

class bad_hmean : public bad_means
{
public:
	bad_hmean(double x, double y, const string & str)
		: bad_means(x, y, str) {} 
	void mesg() const {std::cout << "Error in " << what() <<
		": \nx: " << a << ", y:" << b << std::endl; }
};

class bad_gmean : public bad_means
{
public:
	bad_gmean(double x, double y, const string & str)
		: bad_means(x, y, str) {}
	void mesg() const {std::cout << "Error in " << what() << 
		": \nx: " << a << ", y:" << b << std::endl; }
};