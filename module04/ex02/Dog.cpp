#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
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
    this->brain = new Brain();
    if (this != &c)
    {
        this->type = c.type;
        *(this->brain) = *(c.brain);
    }
    return *this;
} 

void    Dog::makeSound(void) const
{
    std::cout << "* Woof Woof *" << std::endl;
}

Brain *Dog::getBrain() const
{
    return brain;
}