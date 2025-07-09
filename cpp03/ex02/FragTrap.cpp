/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:56:24 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/09 12:56:25 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void    FragTrap::highFivesGuys( void ) 
{ std::cout << "C'mon guys give me a high five" << std::endl; }

// ORTHODOX

FragTrap::FragTrap( const std::string& NewName )
    :   ClapTrap(NewName) {
    HP = 100;
    EP = 50;
    Atk = 20;
    std::cout   << "FragTrap Constructor Called!"   << std::endl;
}

FragTrap::FragTrap( const FragTrap& other )
    :   ClapTrap(other) {}

FragTrap&   FragTrap::operator=( const FragTrap& other ) {
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

FragTrap::~FragTrap( void )
{ std::cout << "FragTrap Destructor Called!"    << std::endl; }
