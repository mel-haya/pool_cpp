#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "a weapon of type " << type << " was created" << std::endl; 
}

Weapon::Weapon(void)
{
    std::cout << "a weapon was created" << std::endl; 
}

Weapon::~Weapon()
{
    std::cout << "a weapon type " << this->type <<" was destroyed" << std::endl; 
}

const std::string &Weapon::getType( void )
{
    return this->type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}