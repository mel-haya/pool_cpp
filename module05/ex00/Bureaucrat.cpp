#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    std::cout << "default constructor called" << std::endl;
    if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &f)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &f)
    {
        this->grade = f.grade;
    }
    return *this;
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}
void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

int Bureaucrat::getGrade()
{
    return this->grade;
}
const std::string Bureaucrat::getName()
{
    return this->name;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade : " << b.getGrade();
    return os;
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}