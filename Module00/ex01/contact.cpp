#include "contact.hpp"

Contact::Contact(void)
{
    this->index = 0;
    return;
}

Contact::~Contact(void)
{
    return;
}

int Contact::getId(void)
{
    return this->index;
}

std::string Contact::getFirstName(void)
{
    return this->firstName;
}

std::string Contact::getLastName(void)
{
    return this->lastName;
}

std::string Contact::getNickname(void)
{
    return this->nickname;
}

std::string Contact::getPhoneNum(void)
{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
    return this->darkestSecret;
}

void Contact::setId(int id)
{
    this->index = id;
}

void Contact::setFirstName(std::string s)
{
    this->firstName = s;
}

void Contact::setLastName(std::string s)
{
    this->lastName = s;
}

void Contact::setNickname(std::string s)
{
    this->nickname = s;
}

void Contact::setPhoneNum(std::string s)
{
    this->phoneNumber = s;
}

void Contact::setDarkestSecret(std::string s)
{
    this->darkestSecret = s;
}