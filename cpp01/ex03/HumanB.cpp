/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:52:20 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 14:52:23 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
    :   weapon(0), name(new_name) {}

HumanB::~HumanB(void) {}

HumanB::HumanB(const HumanB& other){
    weapon = other.weapon;
    name = other.name;
}

HumanB& HumanB::operator=(const HumanB& other){
    if (this != &other){
        weapon = other.weapon;
        name = other.name;
    }
    return (*this);
}

void    HumanB::attack(void){
    std::cout   << name << " attacks with their ";
    if (weapon)
        std::cout   << weapon->getType();
    else
        std::cout   << "fists";
    std::cout   << std::endl;
}

void    HumanB::setWeapon(Weapon& new_wpn){
    weapon = &new_wpn;
}
