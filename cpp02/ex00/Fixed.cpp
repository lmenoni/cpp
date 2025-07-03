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

int Fixed::getRawBits( void ) {
    std::cout   << "getRawBits member function called" << std::endl;
    return (value);
}

void    Fixed::setRawBits( int const raw ) {
    value = raw;
}

// Orthodox

static const int fractBits = 8;

Fixed::Fixed( void ) : value(0) {
    std::cout   << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
    std::cout   << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed& other ) : value(0) {
    std::cout   << "Copy constructor called" << std::endl;
    value = other.getRawBits();
}

Fixed&  Fixed::operator=( Fixed& other) {
    std::cout   << "Copy assignment operator called" << std::endl;
    if (this != &other)
        value = other.getRawBits();
    return (*this);
}
