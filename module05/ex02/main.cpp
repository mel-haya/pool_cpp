#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Form *f1 = new ShrubberyCreationForm("Home");
        PresidentialPardonForm f2 = PresidentialPardonForm("Macron");
        RobotomyRequestForm f3 = RobotomyRequestForm("Cra tyrannique retrait pa");

        Bureaucrat b = Bureaucrat("Putin",1);

        b.signForm(*f1);
        // b.signForm(f2);
        // b.signForm(f3);

        b.executeForm(*f1);
        // f2.execute(b);
        // f3.execute(b);
        delete f1;
        return 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}