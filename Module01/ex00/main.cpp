#include "Zombie.hpp"

int main(void)
{
    Zombie *z;

    z = newZombie("monke");
    z->announce();
    randomChump("MonKe1");

    delete z;
}