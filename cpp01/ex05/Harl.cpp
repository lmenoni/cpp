/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:19:55 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/02 13:19:57 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain( std::string level ) {
    static std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    static void (Harl::*functions[])( void ) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    for (int i = 0; i < 4; ++i) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "[Probably complaining about insignificant problems]" << std::endl;
}

void    Harl::debug( void ) {
    std::cout   << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."    << std::endl
                << "I really do!"   << std::endl;
}

void    Harl::info( void ) {
    std::cout   << "I cannot believe adding extra bacon costs more money."  << std::endl
                << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"   << std::endl;
}

void    Harl::warning( void ) {
    std::cout   << "I think I deserve to have some extra bacon for free."   << std::endl
                << "I've been coming for years, whereas you started working here just last month."  << std::endl;
}

void    Harl::error( void ) {
    std::cout   << "This is unacceptable! I want to speak to the manager now."  << std::endl;
}

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

Harl::Harl(const Harl& other) {(void)other;}

Harl& Harl::operator=(const Harl& other)    {
    (void)other;
    return (*this);
}