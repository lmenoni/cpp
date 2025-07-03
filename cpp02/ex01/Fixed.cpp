/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:19:47 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/02 17:19:49 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractBits = 8;

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return (os);
}

int Fixed::getRawBits( void ) const {
    std::cout   << "getRawBits member function called" << std::endl;
    return (value);
}

void    Fixed::setRawBits( int const raw ) {
    value = raw;
}

int Fixed::toInt( void ) const {
    return (value >> fractBits);
}

float   Fixed::toFloat( void ) const {
    return ((float)value / (1 << fractBits));
}

Fixed::Fixed( float const f ) : value(0) {
    std::cout   << "Float constructor called" << std::endl;
    value = roundf(f * (1 << fractBits));
}

Fixed::Fixed( int const n ) : value(0) {
    std::cout   << "Int constructor called" << std::endl;
    value = n << fractBits;
}

// Orthodox

Fixed::Fixed( void ) : value(0) {
    std::cout   << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
    std::cout   << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other ) : value(0) {
    std::cout   << "Copy constructor called" << std::endl;
    value = other.value;
}

Fixed&  Fixed::operator=( const Fixed& other) {
    std::cout   << "Copy assignment operator called" << std::endl;
    if (this != &other)
        value = other.value;
    return (*this);
}
