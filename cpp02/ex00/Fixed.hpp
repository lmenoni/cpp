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

class   Fixed {
    private:

        int value;
        static const int fractBits;

    public:

        Fixed( void );
        ~Fixed( void );
        Fixed( Fixed& other );
        Fixed& operator=( Fixed& other );

        int     getRawBits( void );
        void    setRawBits( int const raw );
};

#endif
