#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <string>

class Intern
{

    public:
        Intern();
        ~Intern();
        Intern(const Intern &c);
        Intern & operator = (const Intern &c);
        Form * makeForm(std::string form, std::string target);
        Form *Presidential(std::string target);
        Form *Robotomy(std::string target);
        Form *Shrubbery(std::string target);
        class FormNotFoundException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

typedef Form *(Intern::*forms)(std::string);

#endif