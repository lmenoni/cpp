
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook{
    private:

        Contact contacts[8];
        int     ncontacts;
        int     oldest;

    public:

        PhoneBook();
        PhoneBook(const PhoneBook& other);
        PhoneBook& operator=(const PhoneBook& other);
        ~PhoneBook();

        void addContact(Contact& newContact);
        void displayAll();
        void displayOne(int idx);
};

#endif
