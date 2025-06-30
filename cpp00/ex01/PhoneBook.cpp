/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:21:09 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 13:21:12 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

PhoneBook::PhoneBook(){
    ncontacts  = 0;
    oldest     = 0;
}

PhoneBook::PhoneBook(const PhoneBook& other){
    for (int i = 0; i < 8; ++i)
        contacts[i] = other.contacts[i];
    ncontacts = other.ncontacts;
    oldest = other.oldest;
}

PhoneBook& PhoneBook::operator=(const PhoneBook& other){
    if (this != &other) {
        for (int i = 0; i < 8; ++i)
            contacts[i] = other.contacts[i];
        ncontacts = other.ncontacts;
        oldest = other.oldest;
    }
    return *this;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::displayAll(){
    std::cout << YELLOW << "|     Index|First Name| Last Name|  Nickname|" << RESET << std::endl;
    std::cout << YELLOW <<  "---------------------------------------------" << RESET << std::endl;
    for (int i = 0; i < ncontacts; i++)
        contacts[i].printShort(i);
}

void PhoneBook::displayOne(int idx)
{
    if (idx >= 0 && idx < ncontacts)
        contacts[idx].printContact();
    else
        std::cout << RED << "No Contact at index: " << idx << RESET << std::endl;
}

void PhoneBook::addContact(Contact& newContact){
    if (ncontacts < 8){
        contacts[ncontacts] = newContact;
        ncontacts++;
    }
    else{
        contacts[oldest] = newContact;
        oldest = (oldest + 1) % 8;
    }
}

