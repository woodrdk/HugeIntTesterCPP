// #pragma once // not work in all compilers

#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include <array>
#include <string>

class HugeInteger
{
public:
	HugeInteger( long = 0 ); // conversion constructor & no arg constructor
	HugeInteger(const std::string & str); // constructor for a string to convert to integer
	
	// addition operator; HugeInteger + HugeInteger 
	HugeInteger add(const HugeInteger &) const;
	
	// addition operator; HugeInteger + Int 
	HugeInteger add(int) const;

	// addition operator; HugeInteger + String 
	HugeInteger add(const std::string &) const;

	// subtraction operator; HugeInteger - HugeInteger
	HugeInteger subtract(const HugeInteger &) const;
	// subtraction operator; HugeInteger - Int
	HugeInteger subtract(int) const;

	// addition operator; HugeInteger - String 
	HugeInteger subtract(const std::string &) const;

	void output() const; // output

	~HugeInteger();			

private: 
	std::array< short, 40> integer;
};

#endif