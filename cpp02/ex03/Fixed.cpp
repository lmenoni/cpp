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

int Fixed::getRawBits( void ) const {
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

Fixed&   Fixed::min(Fixed& f1, Fixed& f2) {
    if (f1 <= f2)
        return (f1);
    return (f2);
}

const Fixed&   Fixed::min(const Fixed& f1, const Fixed& f2) {
    if (f1 <= f2)
        return (f1);
    return (f2);
}

Fixed&   Fixed::max(Fixed& f1, Fixed& f2) {
    if (f1 >= f2)
        return (f1);
    return (f2);
}

const Fixed&   Fixed::max(const Fixed& f1, const Fixed& f2) {
    if (f1 >= f2)
        return (f1);
    return (f2);
}

Fixed::Fixed( float const f ) : value(0) {
    value = roundf(f * (1 << fractBits));
}

Fixed::Fixed( int const n ) : value(0) {
    value = n << fractBits;
}

// OPERATORS

Fixed&  Fixed::operator++( void ) {
    this->value++;
    return (*this);
}

Fixed  Fixed::operator++( int ) {
    Fixed   temp = *this;
    this->value++;
    return (temp);
}

Fixed&  Fixed::operator--( void ) {
    this->value--;
    return (*this);
}

Fixed  Fixed::operator--( int ) {
    Fixed   temp = *this;
    this->value--;
    return (temp);
}

Fixed   Fixed::operator+( const Fixed& other ) const {
    return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed   Fixed::operator-( const Fixed& other ) const {
    return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed   Fixed::operator*( const Fixed& other ) const {
    return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed   Fixed::operator/( const Fixed& other ) const {
    return (Fixed(this->toFloat() / other.toFloat()));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return (os);
}

bool    operator>(const Fixed& l, const Fixed& r) {
    return (l.toFloat() > r.toFloat());
}

bool    operator<(const Fixed& l, const Fixed& r) {
    return (l.toFloat() < r.toFloat());
}

bool    operator>=(const Fixed& l, const Fixed& r) {
    return (l.toFloat() >= r.toFloat());
}

bool    operator<=(const Fixed& l, const Fixed& r) {
    return (l.toFloat() <= r.toFloat());
}

bool    operator==(const Fixed& l, const Fixed& r) {
    return (l.toFloat() == r.toFloat());
}

bool    operator!=(const Fixed& l, const Fixed& r) {
    return (l.toFloat() != r.toFloat());
}

// ORTHODOX

Fixed::Fixed( void ) : value(0) {}

Fixed::~Fixed( void ) {}

Fixed::Fixed( const Fixed& other ) : value(0) {
    value = other.value;
}

Fixed&  Fixed::operator=( const Fixed& other) {
    if (this != &other)
        value = other.value;
    return (*this);
}
