/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:27:24 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/04 16:27:26 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void    ClapTrap::checkUp( void ) {
    std::cout   << "ClapTrap "  << Name
                << " has:"      << std::endl
                << HP           << " HP"    << std::endl
                << EP           << " EP"    << std::endl
                << Atk          << " Atk"   << std::endl
                << "---------------------"  << std::endl;
}

bool    ClapTrap::isTired( void ) {
    if (EP <= 0) {
        std::cout   << "ClapTrap "      << Name
                    << " is tired..."    << std::endl;
        return (true);
    }
    return (false);
}

bool    ClapTrap::isDead( void ) {
    if (HP <= 0) {
        std::cout   << "ClapTrap "      << Name
                    << " is dead..."    << std::endl;
        return (true);
    }
    return (false);
}

void    ClapTrap::attack( const std::string& target ) {
    if (isDead() || isTired())
        return ;
    std::cout   << "ClapTrap "  << Name
                << " attacks "  << target
                << ", causing " << Atk
                << " points of damage!" << std::endl;
    EP--;
}

void    ClapTrap::takeDamage( unsigned int amount ) {
    if (isDead())
        return ;
    std::cout   << "ClapTrap "          << Name
                << " has taken "        << amount
                << " points of damage!" << std::endl;
    HP -= amount;
    if (HP <= 0)
        std::cout   << "ClapTrap "  << Name
                    << " died!"     << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount ) {
    if (isDead() || isTired())
        return ;
    std::cout   << "ClapTrap "              << Name
                << " repaired itself by "   << amount
                << " health points!"        << std::endl;
    if (HP + amount <= 10)
        HP += amount;
    else
        HP = 10;
    EP--;
}

// ORTHODOX

ClapTrap::ClapTrap( const std::string& NewName )
    :   Name(NewName),
        HP(10),
        EP(10),
        Atk(0)
{ std::cout   << "Default Constructor Called" << std::endl; }

ClapTrap::ClapTrap( const ClapTrap& other )
    :   Name(other.Name),
        HP(other.HP),
        EP(other.EP),
        Atk(other.Atk)
{ std::cout  << "Copy Constructor Called"    << std::endl; }

ClapTrap::~ClapTrap( void )
{ std::cout << "Destructor Called"  << std::endl; }

ClapTrap&   ClapTrap::operator=( const ClapTrap& other ) {
    if (this != &other){
        Name = other.Name;
        HP = other.HP;
        EP = other.EP;
        Atk = other.Atk;
    }
    return (*this);
}
