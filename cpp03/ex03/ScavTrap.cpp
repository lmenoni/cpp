/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:03:58 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/09 12:04:00 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void    ScavTrap::guardGate( void )
{ std::cout << "ScavTrap is now in gate keeper mode!"   << std::endl; }

void    ScavTrap::attack( const std::string& target ) {
    if (isDead() || isTired())
        return ;
    std::cout   << "ScavTrap "  << Name
                << " attacks "  << target
                << ", causing " << Atk
                << " points of damage!" << std::endl;
    EP--;
}

// ORTHODOX

ScavTrap::ScavTrap( void ) : ClapTrap("default") {

    HP = 100;
    EP = 50;
    Atk = 20;
}

ScavTrap::ScavTrap( const std::string& NewName )
    :   ClapTrap(NewName) {
    HP = 100;
    EP = 50;
    Atk = 20;
    std::cout   << "ScavTrap Constructor Called!"   << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other )
    :   ClapTrap(other) {}

ScavTrap&   ScavTrap::operator=( const ScavTrap& other ) {
    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

ScavTrap::~ScavTrap( void )
{ std::cout << "ScavTrap Destructor Called!"    << std::endl; }
