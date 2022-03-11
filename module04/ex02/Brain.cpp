#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "brain constructor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "brain destructor called" << std::endl;
}
Brain::Brain(const Brain &c)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = c;
}
Brain & Brain::operator= (const Brain &c)
{
    std::cout << "Brain Assignation operator called" << std::endl;
    if (this != &c)
    {
        for(int i = 0; i < 100 ; i++)
        {
            this->ideas[i] = c.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int i)
{
    return this->ideas[i];
}


void Brain::setIdeas(std::string idea)
{
    for(int i = 0; i < 100 ; i++)
    {
        this->ideas[i] = idea;
    }
}