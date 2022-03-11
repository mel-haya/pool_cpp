#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
    private:
        std::vector<int> arr;
        unsigned int s;
        Span();
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span &c);
        Span & operator = (const Span &c);
        void addNumber(int i);
        void addNumbers(std::vector<int> v);
        int &  operator[](unsigned int index);
        int  shortestSpan();
        int  longestSpan();
        int getSize();
        class outOfBoundException : public std::exception
        {
            virtual const char* what() const throw();
        };

        class noSpanException : public std::exception
        {
            virtual const char* what() const throw();
        };
};

#endif