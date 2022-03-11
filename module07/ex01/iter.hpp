#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>

void iter( T * arr, int const arrLength, void func( T const & ))
{
    for(int i = 0; i < arrLength ; i++)
        func(arr[i]);
}
#endif
