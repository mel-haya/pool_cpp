#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal &c);
        Animal & operator = (const Animal &c);

        virtual void makeSound() const;
        std::string getType() const;
};
#endif