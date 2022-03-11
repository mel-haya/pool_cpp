#include "Karen.hpp"

void    Karen::debug(void)
{
    std::cout << "[DEBUG] I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "[INFO] Can i get extra topping for my pizza!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen()
{
    std::cout << "a wild karen has appeared" << std::endl;
}

Karen::~Karen(void)
{
    std::cout << "karen actually left can you believe it" << std::endl;
}

int check_valid(std::string level)
{
    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
        return 1;
    return 0;
}

void    Karen::complain(std::string level)
{
    fncPtr a[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string msgs = "DEBUG   INFO    WARNING ERROR";
    int i = msgs.find(level);
    if (!check_valid(level) || i == -1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    i /= 8;
    while (i < 4)
    {
        (this->*a[i])();
        i++;
    }
}
