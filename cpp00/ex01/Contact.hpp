/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:57:12 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 14:57:14 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "phone.hpp"
#include <string>

class Contact{
    private:
        std::string fname;
        std::string lname;
        std::string nick;
        std::string phn;
        std::string sec;

        void printColumn(std::string s);

    public:

        Contact();
        Contact(const Contact& other);
        Contact& operator=(const Contact& other);
        ~Contact();

        bool setContact(std::string fn, std::string ln
            , std::string nk, std::string ph, std::string sc);
        void printContact();
        void printShort(int idx);
};

#endif