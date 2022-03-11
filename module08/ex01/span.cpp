#include "span.hpp"

const char* Span::outOfBoundException::what() const throw()
{
    return "you reached the max size of the array";
}

const char* Span::noSpanException::what() const throw()
{
    return "not enaugh elements for a span";
}

int &  Span::operator[](unsigned int index)
{
    if (index >= 0 && index < arr.size())
        return (this->arr[index]);
    throw Span::outOfBoundException();
}

Span::Span(unsigned int N)
{
    this->s = N;
    this->arr = std::vector<int>(0);
}

int Span::getSize()
{
    return this->s;
}

Span::~Span()
{
    return ;
}

Span::Span(const Span &c)
{
    *this = c;
}
Span & Span::operator = (const Span &c)
{
    if ( this != &c )
	{
		this->arr = c.arr;
		this->s = c.s;
	}
	return *this;
}

void Span::addNumber(int i)
{
    if(s == arr.size())
        throw outOfBoundException();
    arr.push_back(i);
}
int  Span::shortestSpan()
{
    if(arr.size() < 2)
        throw noSpanException();
    std::vector<int> tmp = this->arr;
    std::sort(tmp.begin(), tmp.end(), std::greater<int>());
    int ret = tmp[0] - tmp[tmp.size() - 1];
    for(unsigned int i = 0; i < tmp.size() - 1 ; i++)
    {
        if((tmp[i] - tmp[i + 1]) < ret)
            ret = (tmp[i] - tmp[i + 1]);
    }
    return ret;

}
int  Span::longestSpan()
{
    if(arr.size() < 2)
        throw noSpanException();
    std::vector<int> tmp = this->arr;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

void Span::addNumbers(std::vector<int> v)
{
    for(std::vector<int>::iterator iter = v.begin();  iter != v.end(); ++iter )
    {
        this->addNumber(*iter);
    }
}