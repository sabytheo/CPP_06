#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{

}

Base *Base::generate(void)
{
	int val = std::rand() % 3;

	if (val == 0)
		return new A();
	else if (val == 1)
		return new B();
	else
		return new C();
}

void Base::identify(Base* p)
{
	std::cout << p << std::endl;
}


void Base::identify(Base& p)
{
	std::cout << &p << std::endl;
}
