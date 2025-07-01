/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:52:15 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 14:52:17 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& W)
    :   weapon(W), name(new_name) {}

HumanA::~HumanA(void) {}

HumanA::HumanA(const HumanA& other)
    : weapon(other.weapon), name(other.name) {}

HumanA& HumanA::operator=(const HumanA& other){
    if (this != &other){
        weapon = other.weapon;
        name = other.name;
    }
    return (*this);
}

void    HumanA::attack(void){
    std::cout   << name << " attacks with their "   << weapon.getType()
                << std::endl;
}