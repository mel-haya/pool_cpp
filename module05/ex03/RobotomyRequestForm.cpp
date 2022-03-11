#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form",72 ,45), target(target)
{
    std::cout << "RobotomyRequestForm parametrized constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c) : Form("Robotomy Request Form",72 ,45)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = c;
}
RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm &c)
{
    std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
    if (this != &c)
    {
        this->target = c.target;
    }
    return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        this->tryExec(executor.getGrade());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    std::srand(std::time(nullptr));
    int random = std::rand() % 2;
    std::cout << "*Drilling noises*" << std::endl;
    if(random)
        std::cout << target << " has been robotomized successfully" << std::endl;
    else
        std::cout << target << " robotomization has failed"<< std::endl;
}