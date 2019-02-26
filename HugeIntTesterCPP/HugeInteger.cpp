
#include <string>
#include "HugeInteger.h"

using namespace std;


HugeInteger::HugeInteger(long n ) { // conversion constructor & no arg constructor

}

HugeInteger::HugeInteger(const string & str) { // constructor for a string to convert to integer

}

HugeInteger HugeInteger::add(const HugeInteger & op2) const {
	 HugeInteger newHuge;
	 return newHuge;
}

// returns HugeInteger + int
HugeInteger HugeInteger::add(int n) const {
	HugeInteger newHuge;
	return newHuge;
}

// returns HugeInteger + string
HugeInteger HugeInteger::add(const std::string & str) const {
	HugeInteger newHuge;
	return newHuge;
}

// returns HugeInteger - HugeInteger
HugeInteger HugeInteger::subtract(const HugeInteger & op2) const {
	HugeInteger newHuge;
	return newHuge;
}

// returns HugeInteger - int
HugeInteger HugeInteger::subtract(int n) const {
	HugeInteger newHuge;
	return newHuge;
}

// returns HugeInteger - string
HugeInteger HugeInteger::subtract(const std::string & str) const {
	HugeInteger newHuge;
	return newHuge;
}

HugeInteger::~HugeInteger()
{
}
