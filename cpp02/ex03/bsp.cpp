/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:30:39 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/03 16:30:41 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   myAbs(float val) {
    return ((val < 0) ? -val : val);
}

float   area(const Point& p1, const Point& p2, const Point& p3) {
    Fixed   r;

    r = ((p1.getPointX() * (p2.getPointY() - p3.getPointY()))
        + (p2.getPointX() * (p3.getPointY() - p1.getPointY()))
        + (p3.getPointX() * (p1.getPointY() - p2.getPointY())))
        / Fixed(2);
    return (myAbs(r.toFloat()));
}

bool    isOnSegment(const Point& p1, const Point& p2, const Point& point) {
    float A = area(p1, p2, point);

    if (myAbs(A) > 0.0001f)
        return (false);
    
    Fixed minX = Fixed::min(p1.getPointX(), p2.getPointX());
    Fixed maxX = Fixed::max(p1.getPointX(), p2.getPointX());
    Fixed minY = Fixed::min(p1.getPointY(), p2.getPointY());
    Fixed maxY = Fixed::max(p1.getPointY(), p2.getPointY());

    Fixed x = point.getPointX();
    Fixed y = point.getPointY();

    return (x >= minX && x <= maxX && y >= minY && y <= maxY);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point) {
    if (myAbs(area(a, b, c) - (area(a, b, point) + area(b, c, point) + area(c, a, point)))
        > 0.0001f)
        return (false);
    if (isOnSegment(a, b, point) || isOnSegment(b, c, point)
        || isOnSegment(a, c, point))
        return (false);
    return (true);
}
