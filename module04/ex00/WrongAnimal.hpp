#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &c);
        WrongAnimal & operator = (const WrongAnimal &c);

        void makeSound() const;
        std::string getType() const;
};
#endif