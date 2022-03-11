#include "Form.hpp"

Form::Form(std::string name,const int gradeToSign,const int gradeToExec): name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    if (this->gradeToExec < 1 || this->gradeToSign < 1)
        throw (Form::GradeTooHighException());
    else if (this->gradeToExec > 150 || this->gradeToSign > 150)
        throw (Form::GradeTooLowException());
    this->isSigned = false;
    std::cout << "Form parameterized constructor called" << std::endl;
}
Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}
Form& Form::operator= (const Form &c)
{
    std::cout << "Form Assignation operator called" << std::endl;
    if (this != &c)
    {
        this->isSigned = c.isSigned;
    }
    return *this;
}

std::string Form::getName() const
{
    return this->name;
}
bool Form::getIsSigned() const
{
    return this->isSigned;
}
int Form::getGradeToSign() const
{
    return this->gradeToSign;
}
int Form::getGradeToExec() const
{
    return this->gradeToExec;
}

Form::Form(const Form &c) : name(c.getName()), gradeToSign(c.getGradeToSign()) , gradeToExec(c.getGradeToExec())
{
    std::cout << "Form Copy constructor called" << std::endl;
    *this = c;
}

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw (Form::GradeTooLowException());
}
std::ostream& operator<<(std::ostream& os, Form& f)
{
    os << "*The form " << f.getName() << " is";
    if(!f.getIsSigned())
        os << " not ";
    os << " signed"<< std::endl;
    os << "->Grade to be signed : " << f.getGradeToSign() << std::endl;
    os << "->Grade to be executed : " << f.getGradeToExec();
    return os;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "grade is too low";
}