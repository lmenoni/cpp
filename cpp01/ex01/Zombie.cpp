/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:27:15 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 17:27:17 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) :  name("Random"){}

Zombie::Zombie(const std::string new_name)
    :   name("Random")
{
    name = new_name;
}

Zombie::Zombie(const Zombie& other){
    name = other.name;
}

Zombie& Zombie::operator=(const Zombie& other){
    if (this != &other)
        name = other.name;
    return (*this);
}

Zombie::~Zombie(void) {}

void    Zombie::announce(void){
    std::cout   << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string new_name){
    name = new_name;
}