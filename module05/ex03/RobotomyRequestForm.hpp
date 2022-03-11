#ifndef RRF_H
# define RRF_H

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &c);
        RobotomyRequestForm& operator= (const RobotomyRequestForm &c);
        void execute(Bureaucrat const & executor) const;
};




#endif