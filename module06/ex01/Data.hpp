#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>

typedef struct d
{
    std::string name;
    int age;
} Data;

std::ostream& operator<<(std::ostream& os, const Data& d);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif