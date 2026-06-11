
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

int main()
{

    std::srand(time(NULL));
    Base p;
    p.generate();
    identify(p);

    return 0;
}
