#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << name << " Zombie was created" << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "unnamed Zombie was created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "The zombie ";
    std::cout << this->name;
    std::cout << " died!" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << "<";
    std::cout << this->name;
    std::cout << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}