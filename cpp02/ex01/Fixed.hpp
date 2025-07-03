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

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
