#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>

template <typename T>
T const &max(const T &x, const T &y)
{
    return (x > y)? x: y;
}

template <typename T>
T const &min(const T &x, const T &y)
{
    return (x < y)? x: y;
}

template <typename T>
void    swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}
#endif