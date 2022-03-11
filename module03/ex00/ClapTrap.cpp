#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "Anon";
    this->hp = 10;
    this->energyPts = 10;
    this->attackDmg = 0;
    std::cout << "an unnamed ClapTrap was created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hp = 10;
    this->energyPts = 10;
    this->attackDmg = 0;
    std::cout << "Claptrap " << name << " was created"<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<< this->name << " was destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
    std::cout << "copy constructor called" << std::endl;
    *this = c;
}

ClapTrap & ClapTrap::operator= (const ClapTrap &c)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &c)
    {
        this->name = c.name;
        this->hp = c.hp;
        this->energyPts = c.energyPts;
        this->attackDmg = c.attackDmg;
    }
    return *this;

}      
void ClapTrap::attack(std::string const & target)
{
    if (!(this->hp))
    {
        std::cout << "ClapTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attack " << target;
    std::cout << ", causing " << this->attackDmg << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (!(this->hp))
    {
        std::cout << "ClapTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " took " << amount << " dmg" << std::endl;
    this->hp -= amount;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "ClapTrap " << this->name << " died" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (!(this->hp))
    {
        std::cout << "ClapTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " healed for " << amount << " hp" << std::endl;
    this->hp += amount;
}
