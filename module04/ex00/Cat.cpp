#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &c)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = c;
}

Cat & Cat::operator= (const Cat &c)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this != &c)
        this->type = c.type;
    return *this;
} 

void    Cat::makeSound(void) const
{
    std::cout << "* Nyan Nyan *" << std::endl;
}
