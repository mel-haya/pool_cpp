#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = c;
}

WrongAnimal & WrongAnimal::operator= (const WrongAnimal &c)
{
    std::cout << "WrongAnimal Assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
} 

void    WrongAnimal::makeSound(void) const
{
    std::cout << "* WrongAnimal Sound *" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}
