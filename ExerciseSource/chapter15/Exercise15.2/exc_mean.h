// exc_mean.h -- exception classes for hmean(), gmean()
#include <iostream>
#include <stdexcept>
#include <string>
using std::string;

class bad_hmean : public std::logic_error
{
public:
	bad_hmean(const string & str) : std::logic_error(str) {}
	const char * what() {
		return "hmean():\ninvalid arguments."; }
};

class bad_gmean : public std::logic_error
{
public:
	bad_gmean(const string & str) : std::logic_error(str) {}
	const char * what() {
		return "gmean():\nparameter scale error."; }
};