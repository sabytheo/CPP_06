#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>
#include <limits>
#include <math.h>

class ScalarConverter
{
	private:

	public:
		ScalarConverter();
		static void convert(const std::string& string);
		~ScalarConverter();
};



#endif
