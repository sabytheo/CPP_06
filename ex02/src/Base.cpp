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

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "object referenced is type A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "object referenced is type B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "object referenced is type C" << std::endl;
		return;
	}
	std::cout << p << std::endl;
}


void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "object referenced is type A" << std::endl;
	}
	try
	{
		B b = dynamic_cast<B&>(p);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "object referenced is type B" << std::endl;
	}
	try
	{
		C c = dynamic_cast<C&>(p);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "object referenced is type C" << std::endl;
	}

}
