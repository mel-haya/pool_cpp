#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "an unnamed ScavTrap was created" << std::endl;
    this->hp = 100;
    this->attackDmg = 20;
    this->energyPts = 50;
}
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap "<< this->name << " destroyed"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
    std::cout << "Copy constructor called" << std::endl; 
    *this = c;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &c)
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
ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    this->hp = 100;
    this->attackDmg = 20;
    this->energyPts = 50;
    std::cout << "ScavTrap " << name << " was created"<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " entered Gate guard mode" << std::endl;
}


void ScavTrap::attack(std::string const & target)
{
    if (!(this->hp))
    {
        std::cout << "ScavTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attack " << target;
    std::cout << ", causing " << this->attackDmg << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (!(this->hp))
    {
        std::cout << "ScavTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " took " << amount << " dmg" << std::endl;
    this->hp -= amount;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "ScavTrap " << this->name << " died" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (!(this->hp))
    {
        std::cout << "ScavTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " healed for " << amount << " hp" << std::endl;
    this->hp += amount;
}