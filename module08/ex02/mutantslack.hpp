#ifndef MSTACK_CPP
#define MSTACK_CPP

#include <deque>
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack <T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator	begin() { return ( this->c.begin() ); };
        iterator	end() { return ( this->c.end() ); };
        MutantStack(){ std::cout << "Default MutantStack constructor called" << std::endl;}
        ~MutantStack(){ std::cout << "MutantStack destructor called" << std::endl;}
        MutantStack(const MutantStack &c)
        {
            std::cout << "Copy MutantStack constructor called" << std::endl;
            *this = c;
        }
        MutantStack & operator = (const MutantStack &c)
        {
            std::cout << "MutantStack assignment operator called" << std::endl;
            (void)c;
            return *this;
        }
};

#endif