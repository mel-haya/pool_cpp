#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form",145 ,137), target(target)
{
    std::cout << "ShrubberyCreationForm parametrized constructor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c) : Form("Shrubbery Creation Form",145 ,137)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = c;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm &c)
{
    std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
    if (this != &c)
    {
        this->target = c.target;
    }
    return *this;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
    std::ofstream of (target + "_shrubbery");
    for(int i = 0 ; i < 100 ; i++)
    {
        of << "       _-_" << std::endl;
        of << "    /~~   ~~\\" << std::endl;
        of << " /~~         ~~\\" << std::endl;
        of << "{               }" << std::endl;
        of << " \\  _-     -_  /" << std::endl;
        of << "   ~  \\\\ //  ~" << std::endl;
        of << "_- -   | | _- _" << std::endl;
        of << "  _ -  | |   -_" << std::endl;
        of << "      // \\\\" << std::endl;
    }

    of.close();
}