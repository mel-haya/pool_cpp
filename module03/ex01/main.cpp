#include "ScavTrap.hpp"

int main()
{
    ScavTrap a = ScavTrap("H");

    a.attack("mouad");
    a.takeDamage(20);
    a.beRepaired(3);
    a.guardGate();
}