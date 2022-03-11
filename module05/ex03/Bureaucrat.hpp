#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
//#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
        Bureaucrat();
    public:
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &c);
        Bureaucrat & operator = (const Bureaucrat &c);
        int getGrade() const;
        std::string getName() const;
        void incrementGrade();
        void decrementGrade();
        void signForm(Form &f);
        void executeForm(Form const & form);
        class GradeTooHighException : public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& b);

#endif