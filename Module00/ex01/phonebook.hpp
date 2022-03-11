#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "contact.hpp"
#include <stdlib.h>

class Phonebook {
    public:
        Phonebook( void );
        ~Phonebook( void );
        void addContact( void );
        void printContacts( void );
    private:
        Contact contacts[8];
        int id;
};

#endif