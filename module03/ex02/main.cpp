#include "FragTrap.hpp"

int main()
{
    FragTrap a = FragTrap("H");

    a.attack("mouad");
    a.takeDamage(20);
    a.beRepaired(3);
    a.highFivesGuys();
}