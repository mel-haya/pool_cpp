#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>

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
        int getGrade();
        const std::string getName();
        void incrementGrade();
        void decrementGrade();
        
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