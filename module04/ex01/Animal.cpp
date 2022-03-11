#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "animal constructor called" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "animal destructor called" << std::endl;
}

Animal::Animal(const Animal &c)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = c;
}

Animal & Animal::operator= (const Animal &c)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
} 

void Animal::makeSound() const
{
    std::cout << "* Animal Sound *" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}
