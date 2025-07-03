/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 19:26:54 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/03 19:26:56 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_H
#define BSP_H

#include "Point.hpp"

bool    bsp( Point const a, Point const b, Point const c, Point const point);
float   area(const Point& p1, const Point& p2, const Point& p3);
bool    isOnSegment(const Point& p1, const Point& p2, const Point& point);
float   myAbs(float val);

#endif
