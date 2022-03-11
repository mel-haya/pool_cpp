#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "an unnamed FragTrap was created" << std::endl;
    this->hp = 100;
    this->attackDmg = 30;
    this->energyPts = 100;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap "<< this->name << " destroyed"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &c)
{
    std::cout << "Copy constructor called" << std::endl; 
    *this = c;
}

FragTrap & FragTrap::operator = (const FragTrap &c)
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
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    this->hp = 100;
    this->attackDmg = 30;
    this->energyPts = 100;
    std::cout << "FragTrap " << name << " was created"<< std::endl;
}

void FragTrap::attack(std::string const & target)
{
    if (!(this->hp))
    {
        std::cout << "FragTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " attack " << target;
    std::cout << ", causing " << this->attackDmg << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (!(this->hp))
    {
        std::cout << "FragTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " took " << amount << " dmg" << std::endl;
    this->hp -= amount;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "FragTrap " << this->name << " died" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (!(this->hp))
    {
        std::cout << "FragTrap " << this->name << " is dead " << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " healed for " << amount << " hp" << std::endl;
    this->hp += amount;
}

void    FragTrap::highFivesGuys( void )
{
	std::cout << "Can I have a high five?" << std::endl;
}