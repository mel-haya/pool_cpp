#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat *b = new Bureaucrat("hemid",1);
        
        std::cout << *b << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}