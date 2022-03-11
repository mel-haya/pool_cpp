#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream& os, const Data& d)
{
    os << "Name : " << d.name << std::endl << "Age : " << d.age;
    return os;
}