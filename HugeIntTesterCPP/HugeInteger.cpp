
#include <string>
#include "HugeInteger.h"
#include <iostream>
using namespace std;


HugeInteger::HugeInteger(long n ) { // conversion constructor & no arg constructor
	for (int i = 0; i < 40; ++i) {
		integer[i] = 0;
	}
	for (int i = 39; i >= 0 && n != 0; --i) {
		integer[i] = static_cast<short>(n % 10);
		n /= 10;
	}
}

HugeInteger::HugeInteger(const string & str) { // constructor for a string to convert to integer
	input(str);
}

HugeInteger HugeInteger::add(const HugeInteger & op2) const {
	 HugeInteger newHuge;
	 
	 int carry = 0;
	 for (int i = 39; i >= 0; --i) {
		 newHuge.integer[i] = integer[i] + op2.integer[i] + carry;
		 if (newHuge.integer[i] > 9) {
			 newHuge.integer[i] % 10;
			 carry = 1;
		 }
		 else {
			 carry = 0;
		 }
	 }

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

// overloaded output operator
void HugeInteger::output() const
{
	int i; // used for looping
	for (i = 0; (i < 40) && (integer[i] == 0); i++)
		; // skip leading zeros
	if (i == 40)
		cout << 0;
	else
		for (; i < 40; ++i) // display the HugeInteger
			cout << integer[i];
}

void HugeInteger::input(const string & str) {
	// initiallize array to zero
	for (int i = 0; i < 40; ++i) {
		integer[i] = 0;
	}

	int length = str.size();
	for (int i = 40 - length, k = 0; i < 40; ++i, ++k) {
		if (isdigit(str[k])) {
			integer[i] = str[k] - '0';
		}
	}
}

HugeInteger::~HugeInteger()
{
}
