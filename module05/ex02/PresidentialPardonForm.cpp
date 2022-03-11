#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5) , target(target)
{
    std::cout << "PresidentialPardonForm parametrized constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c):
Form("Presidential Pardon Form", 25, 5)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = c;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm &c)
{
    std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
    if (this != &c)
    {
        this->target = c.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    
}
