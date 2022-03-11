#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name)
{
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
    if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = f;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &f)
{
    std::cout << "Bureaucrat Assignation operator called" << std::endl;
    if (this != &f)
    {
        this->grade = f.grade;
    }
    return *this;
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if ( this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}
void Bureaucrat::decrementGrade()
{
    this->grade++;
    if ( this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}
std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::signForm(Form &f)
{
    if(f.getIsSigned())
    {
        std::cout << this->getName() << " couldn't sign " << f.getName() << " becouse this form is already signed" << std::endl;
        return;
    }
    else if(this->grade > f.getGradeToSign())
    {
        std::cout << this->getName() << " couldn't sign " << f.getName() << " becouse the bureaucrat grade is low" << std::endl;
        return;
    }
    else
    {
        std::cout << this->getName() << " signed the form " << f.getName() << std::endl;
        f.beSigned(*this);
    }
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

void Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.tryExec(this->grade);
    }
    catch(const std::exception& e)
    {
        std::cerr << this->name << " couldn't execute " << form.getName() << " because ";
        std::cerr << e.what() << std::endl;
        return;
    }
    form.execute(*this);
    std::cout << this->name << " executed " << form.getName() << std::endl;
}