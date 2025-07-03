/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:30:11 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/03 16:30:13 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   Point::getPointX( void ) const {
    return (x);
}

Fixed   Point::getPointY( void ) const {
    return (y);
}

Point::Point(const float fx, const float fy) : x(fx), y(fy) {}

// ORTHODOX

Point::Point( void ) : x(0), y(0) {}

Point::Point( const Point& other ) : x(other.x), y(other.y) {}

Point::~Point( void ) {};
