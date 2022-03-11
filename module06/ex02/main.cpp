#include "Base.hpp"

int main()
{
    Base *a = generate();
    std::cout << "-------Identify by *ptr--------" << std::endl;
    identify(a);
    std::cout << "-------Identify by &ref--------" << std::endl;
    identify(*a);
    delete a;
}