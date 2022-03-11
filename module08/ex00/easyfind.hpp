#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iterator>
#include <iostream>


class notFoundException : public std::exception
{
    virtual const char* what() const throw()
    {
        return "Not found";
    }
};

template<typename T>
void easyfind(T c, int i)
{
    typename T::iterator ptr;
    for (ptr = c.begin(); ptr != c.end(); ptr++)
    {
        if(*ptr == i)
        {
            std::cout << "Found" << std::endl;
            return;
        }
    }
    throw notFoundException();
}
#endif