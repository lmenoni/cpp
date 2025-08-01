/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:57:29 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 15:57:30 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

AMateria *Ice::clone( void ) const{
    return (new Ice);
}

void    Ice::use( ICharacter& target ){
    std::cout   << "* shoots an ice bolt at "   << target.getName() << std::endl;
}

// ORTHODOX

Ice::Ice( void ) : AMateria("ice") {
    if (DEBUG)
        std::cout   << "Ice default constructor called." << std::endl;
}

Ice::Ice( const Ice& other ) : AMateria(other._type) {
    if (DEBUG)
        std::cout   << "Ice copy constructor called." << std::endl;
}

Ice& Ice::operator=( const Ice& ) {
    if (DEBUG)
        std::cout   << "What's the point??" << std::endl;
    return (*this);
}

Ice::~Ice( void ) {
    if (DEBUG)
        std::cout   << "Ice default destructor called." << std::endl;
}
