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
	// addition operator 
	HugeInteger add(const HugeInteger &) const;
	~HugeInteger();			

private: 
	std::array< short, 40> integer;
};

#endif