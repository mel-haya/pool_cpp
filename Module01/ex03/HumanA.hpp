#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &w);
        ~HumanA();
        void setWeapon(Weapon w);
        void attack(void);
    private:
        Weapon &weapon;
        std::string name;
};
#endif