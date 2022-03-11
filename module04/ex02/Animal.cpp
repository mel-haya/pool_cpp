#include "Animal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called" << std::endl;
    type = "Animal";
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &c)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = c;
}

AAnimal & AAnimal::operator= (const AAnimal &c)
{
    std::cout << "AAnimal Assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
} 

std::string AAnimal::getType() const
{
    return this->type;
}
