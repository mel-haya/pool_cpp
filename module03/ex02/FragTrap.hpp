#ifndef __FRAG_HPP__
# define __FRAG_HPP__

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &c);
        FragTrap & operator = (const FragTrap &c);
        FragTrap(std::string name);  
        void highFivesGuys(void);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif