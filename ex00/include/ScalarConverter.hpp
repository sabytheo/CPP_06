#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cctype>
#include <limits>
#include <math.h>

class ScalarConverter
{
public:
	static void convert(const std::string &string);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter operator=(const ScalarConverter &other);
	~ScalarConverter();
};

#endif
