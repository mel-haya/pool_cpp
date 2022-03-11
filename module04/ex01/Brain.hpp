#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(const Brain &c);
        Brain & operator = (const Brain &c);
        
        std::string getIdea(int i);
        void setIdeas(std::string idea);
};

#endif