#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

void ScalarConverter::convert(const std::string &str)
{
	if (str.length() == 1 && !std::isdigit(static_cast<int>(str[0])))
	{
		char c = str[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
		return;
	}
	else
	{
		char *end;
		double value = std::strtod(str.c_str(), &end);
		std::cout << end << std::endl;
		if (str.c_str() == end || (*end != '\0' && *end != 'f') || (*end == 'f' && *(end + 1) != '\0'))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return;
		}
		if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127)
			std::cout << "char: impossible" << std::endl;
		else if (std::isprint(static_cast<int>(value)))
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		if (std::isnan(value) || std::isinf(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(value) << std::endl;

		if (std::isnan(value))
			std::cout << "float: nanf" << std::endl;
		else if (std::isinf(value))
			std::cout << "float: " << (value > 0 ? "+inff" : "-inff") << std::endl;
		else
		{
			float f = static_cast<float>(value);
			std::cout << "float: " << f;
			if (f - static_cast<int>(f) == 0)
				std::cout << ".0";
			std::cout << "f" << std::endl;
		}
		if (std::isnan(value))
			std::cout << "double: nan" << std::endl;
		else if (std::isinf(value))
			std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
		else
		{
			std::cout << "double: " << value;
			if (value - static_cast<int>(value) == 0)
				std::cout << ".0";
			std::cout << std::endl;
		}
	}
}
