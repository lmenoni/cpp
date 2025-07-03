/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:30:06 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/03 16:30:07 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class   Point {
    private:

        Fixed const x;
        Fixed const y;

    public:

        Point( void );
        Point(const float fx, const float fy);
        Point(const Point& other);
        Point&  operator=(const Point& other);
        ~Point( void );

        Fixed getPointX( void ) const;
        Fixed getPointY( void ) const;
};

#endif
