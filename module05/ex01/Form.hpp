#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
# include <exception>

class Form
{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;
        Form();
    public:
        Form(const std::string name, const int gradeToSign, const int gradeToExec);
        ~Form();
        Form(const Form &c);
        Form& operator= (const Form &c);
        std::string getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        void beSigned(Bureaucrat & b);
    class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& os, Form& f);

#endif