#ifndef __CLAP_HPP__
# define __CLAP_HPP__

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        int         hp;
        int         energyPts;
        int         attackDmg;

    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &c);
        ClapTrap & operator = (const ClapTrap &c);
        ClapTrap(std::string name);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif