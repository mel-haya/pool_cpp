#ifndef PPF_H
# define PPF_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string target;
    PresidentialPardonForm();
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &c);
    PresidentialPardonForm& operator= (const PresidentialPardonForm &c);
    void execute(Bureaucrat const & executor) const;
};




#endif