#include "Karen.hpp"

int main(int c, char **v)
{
    Karen a;

    if (c != 2)
    {
        std::cout << "invalid args" << std::endl;
        return (0);
    }
    a.complain(v[1]);
}