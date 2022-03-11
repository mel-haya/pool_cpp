#include "Zombie.hpp"

int main(void)
{
    Zombie *z;
    int i;

    i = 0;
    z = zombieHorde(5, "monke");
    while (i < 5)
    {
        z[i].announce();
        i++;
    }
    delete [] z;
}