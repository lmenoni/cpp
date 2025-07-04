/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 16:30:48 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/03 16:30:50 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.h"
#include <string>
#include <iostream>

int main( void ) {
    Point a(10, 10);
    Point b(15, 10);
    Point c(10, 15);
    Point to_check(13, 12);

    if (bsp(a, b, c, to_check))
        std::cout   << "INSIDE"     << std::endl;
    else
        std::cout   << "OUTSIDE"    << std::endl;
    
    return (0);
}
