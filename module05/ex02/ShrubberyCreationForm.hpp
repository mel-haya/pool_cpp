#ifndef SCF_H
# define SCF_H

#include "Form.hpp"

#include <fstream>  

class ShrubberyCreationForm : public Form
{

    private:
        std::string target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &c);
        ShrubberyCreationForm& operator= (const ShrubberyCreationForm &c);
        void execute(Bureaucrat const & executor) const;
};
#endif