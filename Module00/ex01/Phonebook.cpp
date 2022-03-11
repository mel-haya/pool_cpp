#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->id = 0;
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void Phonebook::addContact(void)
{
    std::string line;

    this->contacts[this->id].setId(this->id + 1);
    std::cout << "Enter a first name : ";
    getline(std::cin, line);
    this->contacts[this->id].setFirstName(line);
    std::cout << "Enter a last name : ";
    getline(std::cin, line);
    this->contacts[this->id].setLastName(line);
    std::cout << "Enter a nickname : ";
    getline(std::cin, line);
    this->contacts[this->id].setNickname(line);
    std::cout << "Enter a phone number : ";
    getline(std::cin, line);
    this->contacts[this->id].setPhoneNum(line);
    std::cout << "Enter his darkest secret : ";
    getline(std::cin, line);
    this->contacts[this->id].setDarkestSecret(line);
    if(this->id == 7)
        this->id = 0;
    else
        this->id++;
}

std::string truncate(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return str;
}

void Phonebook::printContacts( void )
{
    int i = 0;

    std::cout << std::setw(25) << "CONTACTS" <<std::endl;
    std::cout << "____________________________________________" << std:: endl;
    std::cout << "     Index|First name| Last name|  Nickname|"<< std::endl;
    while (i < 8 && this->contacts[i].getId())
    {
        std::cout << std::setw(10) << this->contacts[i].getId() << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].getNickname()) << "|\n";
        i++;
    }
    std::cout << "___________________________________________|" << std:: endl;
}