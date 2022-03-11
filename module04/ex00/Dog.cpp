#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &c)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = c;
}

Dog & Dog::operator= (const Dog &c)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
} 

void    Dog::makeSound(void) const
{
    std::cout << "* Woof Woof *" << std::endl;
}
