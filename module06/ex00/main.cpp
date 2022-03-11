#include "includes.hpp"

int main(int argc , char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Invalid argument" << std::endl;
        return 1;
    }
    try
    {
        int i = (std::stoi(argv[1]));
        if(i < -127  || i > 127)
            throw std::out_of_range("");
        char c = static_cast<char>(i);
        if(isprint(c))
            std::cout <<"char: '" << c <<"'"<< std::endl;
        else
            std::cout <<"char: Non displayable" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"char: impossible" << std::endl;
    }

    try
    {
        int i = static_cast<int>(std::stoi(argv[1]));
        std::cout <<"int: " << i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"int: impossible" << std::endl;
    }

    try
    {
        float f = static_cast<float>(std::stof(argv[1]));
        std::cout.precision(1);
        std::cout << std::fixed <<"float: " << f << "f"<< std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"float: impossible" << std::endl;
    }

    try
    {
        double d = static_cast<double>(std::stod(argv[1]));
        std::cout.precision(1);
        std::cout << std::fixed <<"double: " << d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout <<"double: impossible" << std::endl;
    }
    
}