#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = c;
}

WrongCat & WrongCat::operator= (const WrongCat &c)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
} 

void    WrongCat::makeSound(void) const
{
    std::cout << "* Nyan Nyan *" << std::endl;
}
