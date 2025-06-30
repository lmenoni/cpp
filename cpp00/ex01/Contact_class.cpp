/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:21:20 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 13:21:22 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.h"

bool Contact::setContact(std::string fn, std::string ln
            , std::string nk, std::string ph, std::string sc){
    if (fn.empty() || ln.empty() || nk.empty() || ph.empty() || sc.empty()){
        std::cout << RED << "Every Field Needs To Be Filled." << RESET << std::endl;
        return (false);
    }
    fname = fn;
    lname = ln;
    nick  = nk;
    phn   = ph;
    sec   = sc;
    return (true);
}

void Contact::printColumn(std::string s){
    if (s.length() > 10)
            std::cout << YELLOW << "|" << s.substr(0, 9) << "." << RESET;
    else
        std::cout << YELLOW << "|" << std::setw(10) << s << RESET;
}

void Contact::printShort(int idx){
    std::cout << YELLOW << "|" << std::setw(10) << idx << RESET;
    printColumn(fname);
    printColumn(lname);
    printColumn(nick);
    std::cout << YELLOW << "|" << RESET << std::endl;
}

void Contact::printContact(){
    std::cout << YELLOW << "First Name: " << fname << RESET << std::endl;
    std::cout << YELLOW << "Last Name : " << lname << RESET << std::endl;
    std::cout << YELLOW << "Nickname  : " << nick << RESET << std::endl;
    std::cout << YELLOW << "Phone     : " << phn << RESET << std::endl;
    std::cout << YELLOW << "Secret    : " << sec << RESET << std::endl;
}
