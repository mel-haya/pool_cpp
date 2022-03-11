#include "Data.hpp"



int main()
{
    Data before;
    before.name = "kanye";
    before.age = 44;
    Data *after;

    uintptr_t p = serialize(&before);

    after = deserialize(p);
    std::cout << *after << std::endl;
}
