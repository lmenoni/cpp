/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 14:36:01 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 14:36:03 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_H
#define PHONE_H

#include "Contact.hpp"
#include "PhoneBook.hpp"
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

void    search_contact(PhoneBook& Book);
int     safe_getline(std::string& line);
bool    check_int(std::string& line);
void    add_new_contact(PhoneBook& Book);

#endif