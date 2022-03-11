#include "Base.hpp"

Base::~Base()
{
    std::cout << "Base Destructor called" << std::endl;
}

Base * generate(void)
{
    std::srand(std::time(0)); 
    int r = std::rand() % 3;
    if (r == 2)
        return new A();
    else if (r == 0)
        return new B();
    else 
        return new C();
}


void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl; 
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}
void identify(Base& p)
{
    Base r;
    try
    {
        r = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception &e){
        try
        {
            r = dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
            return;
        }
        catch(std::exception &e){
            try
            {
                r = dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
                return;
            }
            catch(std::exception &e){
                std::cout << "you can't be here what have you done" << std::endl; 
            }
        }
    }  
}