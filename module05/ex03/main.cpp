#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat b = Bureaucrat("Tesla", 1);
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        b.signForm(*rrf);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}