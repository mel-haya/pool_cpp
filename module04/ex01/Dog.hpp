#ifndef __Dog_HPP__
# define __Dog_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        ~Dog();
        Dog(const Dog &c);
        Dog & operator = (const Dog &c);
        
        virtual void makeSound() const;
        Brain *getBrain() const;
};
#endif