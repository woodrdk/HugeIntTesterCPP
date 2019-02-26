#pragma once // not work in all compilers

#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

class HugeInteger
{
public:
	HugeInteger( long = 0 ); // conversion constructor & no arg constructor
	HugeInteger( const std::string & str) // constructor for a string to convert to integer
	~HugeInteger();			
};

#endif