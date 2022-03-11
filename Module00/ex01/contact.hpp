#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{

    public:
        Contact(void);
        ~Contact(void);
        int getId(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNum(void);
        std::string getDarkestSecret(void);
        void setId(int id);
        void setFirstName(std::string s);
        void setLastName(std::string s);
        void setNickname(std::string s);
        void setPhoneNum(std::string s);
        void setDarkestSecret(std::string s);
    private:
        int index;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
};

#endif
