#ifndef __CAT_HPP__
# define __CAT_HPP__
#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat &c);
        Cat & operator = (const Cat &c);
        
        virtual void makeSound() const;
        Brain *getBrain() const;
};
#endif