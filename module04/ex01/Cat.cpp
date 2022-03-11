#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
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
    this->brain = new Brain();
    if (this != &c)
    {
        this->type = c.type;
        *(this->brain) = *(c.brain);
    }
    return *this;
} 

void Cat::makeSound() const
{
    std::cout << "* Nyan Nyan *" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}