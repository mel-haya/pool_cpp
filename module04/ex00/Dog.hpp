#ifndef __Dog_HPP__
# define __Dog_HPP__

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog &c);
        Dog & operator = (const Dog &c);
        virtual void makeSound() const;
};
#endif