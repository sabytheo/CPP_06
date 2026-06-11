#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    std::srand(std::time(NULL));

    Base generator;

    Base *ptr = generator.generate();

    std::cout << "ptr: ---------\n";
    identify(ptr);

    std::cout << "ref : --------\n";
    identify(*ptr);

    delete ptr;
    std::cout << "--------------------------" << std::endl;

    return 0;
}
