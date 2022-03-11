#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

#include <string>
#include <iostream>

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal(const AAnimal &c);
        AAnimal & operator = (const AAnimal &c);

        virtual void makeSound() const = 0;
        std::string getType() const;
};
#endif