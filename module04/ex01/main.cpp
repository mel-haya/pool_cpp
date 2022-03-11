#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Dog i = Dog();
    i.getBrain()->setIdeas("woof");
    i.makeSound();
    {
        Dog j;
        j= i;
        std::cout << j.getBrain()->getIdea(0)<< std::endl;
        std::cout << j.getType() << std::endl;
    }
    std::cout << i.getBrain()->getIdea(0)<< std::endl;
    return 0;
}