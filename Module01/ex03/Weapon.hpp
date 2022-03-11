#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

# include <iostream>
# include <string>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        Weapon(void);
        ~Weapon();
        const std::string &getType( void );
        void setType(std::string type);
};
#endif