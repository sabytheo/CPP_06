#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &copy);
	Serializer operator=(const Serializer &other);

public:
	struct Data
	{
		int *ptr;
	};
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);
	~Serializer();
};

#endif
