
#ifndef PHONE_H
#define PHONE_H
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>


#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define RESET   "\033[0m"

class Contact{
    private:
        std::string fname;
        std::string lname;
        std::string nick;
        std::string phn;
        std::string sec;
        void printColumn(std::string s);
    public:
        bool setContact(std::string fn, std::string ln
            , std::string nk, std::string ph, std::string sc);
        void printContact();
        void printShort(int idx);
};

class PhoneBook{
    private:
        Contact contacts[8];
        int     ncontacts;
        int     oldest;
    public:
        PhoneBook();
        void addContact(Contact& newContact);
        void displayAll();
        void displayOne(int idx);
};

void    search_contact(PhoneBook& Book);
int     safe_getline(std::string& line);
bool    check_int(std::string& line);
void    add_new_contact(PhoneBook& Book);

#endif
