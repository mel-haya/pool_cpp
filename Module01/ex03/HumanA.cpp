# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : weapon(w)
{
    this->name = name;
    std::cout << this->name << " was created with a " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name << " was killed"<< std::endl;
}

void HumanA::setWeapon(Weapon w)
{
    this->weapon = w;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}