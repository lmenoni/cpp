/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:19:53 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/02 17:19:55 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class   Fixed {
    private:

        int value;
        static const int fractBits;

    public:

        Fixed( void );
        ~Fixed( void );
        Fixed( const Fixed& other );
        Fixed& operator=( const Fixed& other );
        Fixed( int const n );
        Fixed( float const f );

        Fixed   operator+( const Fixed& other ) const;
        Fixed   operator-( const Fixed& other ) const;
        Fixed   operator*( const Fixed& other ) const;
        Fixed   operator/( const Fixed& other ) const;
        Fixed&  operator++( void );
        Fixed   operator++( int );
        Fixed&  operator--( void );
        Fixed   operator--( int );

        static Fixed&   min(Fixed& f1, Fixed& f2);
        static const Fixed&   min(const Fixed& f1, const Fixed& f2);
        static Fixed&   max(Fixed& f1, Fixed& f2);
        static const Fixed&   max(const Fixed& f1, const Fixed& f2);

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);
bool    operator>(const Fixed& l, const Fixed& r);
bool    operator<(const Fixed& l, const Fixed& r);
bool    operator>=(const Fixed& l, const Fixed& r);
bool    operator<=(const Fixed& l, const Fixed& r);
bool    operator==(const Fixed& l, const Fixed& r);
bool    operator!=(const Fixed& l, const Fixed& r);

#endif
