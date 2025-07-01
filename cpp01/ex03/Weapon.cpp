/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:51:52 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 14:51:54 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type(0) {}

Weapon::Weapon(std::string new_type) : type(new_type) {}

Weapon::Weapon(const Weapon& other){
    type = other.type;
}

Weapon::~Weapon(void) {}

Weapon& Weapon::operator=(const Weapon& other){
    if (this != &other)
        type = other.type;
    return (*this);
}

const std::string&   Weapon::getType(void){
    return (type);
}

void    Weapon::setType(std::string new_type){
    type = new_type;
}