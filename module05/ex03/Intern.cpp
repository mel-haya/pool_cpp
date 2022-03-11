#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default Constructor Called" << std::endl;
}
Intern::~Intern()
{
    std::cout <<"Intern Destructor Called " << std::endl;
}
Intern::Intern(const Intern &c)
{
    std::cout << "Intern Copy Constructor Called" << std::endl;
    *this = c;
}
Intern & Intern::operator= (const Intern &c)
{
    std::cout << "Intern Assignation operator called" << std::endl;
    (void)c;
    return *this;
}

Form *Intern::Presidential(std::string target)
{
    return (new PresidentialPardonForm(target));
}
Form *Intern::Robotomy(std::string target)
{
    return (new RobotomyRequestForm(target));
}
Form *Intern::Shrubbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

const char *Intern::FormNotFoundException::what() const throw()
{
    return "this form is not found";
}

Form *Intern::makeForm(std::string form, std::string target)
{
    forms f[3] = {&Intern::Presidential, &Intern::Robotomy, &Intern::Shrubbery};
    std::string fn[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for(int i = 0 ; i < 3; i++)
    {
        if(form == fn[i])
        {
            std::cout << "intern create "<< form << " form" << std::endl;
            return (this->*f[i])(target);
        }
    }
    throw (Intern::FormNotFoundException());
}
