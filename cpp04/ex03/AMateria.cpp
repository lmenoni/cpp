/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:27:57 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 15:27:58 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const & AMateria::getType( void ) const {
    return (_type);
}

// ORTHODOX

AMateria::AMateria( void ) : _type("-none-") {
    if (DEBUG)
        std::cout   << "AMateria default constructor called."   << std::endl;
}

AMateria::AMateria( std::string const & type ) : _type(type) {
    if (DEBUG)
        std::cout   << "AMateria type constructor called."   << std::endl;
}

AMateria::AMateria( const AMateria& other ) : _type(other._type) {
    if (DEBUG)
        std::cout   << "AMateria copy constructor called."   << std::endl;
}

AMateria& AMateria::operator=( const AMateria& other ) {
    if (this != &other)
        _type = other._type;
    return (*this);
}

AMateria::~AMateria( void ) {
    if (DEBUG)
        std::cout   << "AMateria destructor called."   << std::endl;
}
