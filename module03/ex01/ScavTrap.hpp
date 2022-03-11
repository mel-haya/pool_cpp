#ifndef __SCAV_HPP__
# define __SCAV_HPP__

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &c);
        ScavTrap & operator = (const ScavTrap &c);
        ScavTrap(std::string name);  
        void guardGate();
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif