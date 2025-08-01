/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:57:43 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 15:57:44 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

AMateria *Cure::clone( void ) const{
    return (new Cure);
}

void    Cure::use( ICharacter& target ){
    std::cout   << "* heals "   << target.getName() << "’s wounds * "   << std::endl;
}

// ORTHODOX

Cure::Cure( void ) : AMateria("cure") {
    if (DEBUG)
        std::cout   << "Cure default constructor called." << std::endl;
}

Cure::Cure( const Cure& other ) : AMateria(other._type) {
    if (DEBUG)
        std::cout   << "Cure copy constructor called." << std::endl;
}

Cure& Cure::operator=( const Cure& ) {
    if (DEBUG)
        std::cout   << "What's the point??" << std::endl;
    return (*this);
}

Cure::~Cure( void ) {
    if (DEBUG)
        std::cout   << "Cure default destructor called." << std::endl;
}
