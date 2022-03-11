#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon& w);
        void attack(void);
    private:
        Weapon *weapon;
        std::string name;
};
#endif