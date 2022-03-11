# include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    std::cout << this->name << " was created " << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->name << " was killed"<< std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
    this->weapon = &w;
}

void HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " ;
    if (!this->weapon)
        std::cout << "bare hands" << std::endl;
    else
        std::cout << this->weapon->getType()<< std::endl;;
}