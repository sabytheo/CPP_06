#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

typedef __intptr_t uintptr_t;

class Serializer
{
	private:

	public:
		Serializer();
		~Serializer();
		struct Data
		{
			int *ptr;
		};
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};



#endif
