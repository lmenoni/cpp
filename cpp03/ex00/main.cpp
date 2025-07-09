/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:27:11 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/04 16:27:13 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap ct("Ugo");

    ct.checkUp();
    ct.attack("Beppe");
    ct.takeDamage(3);
    ct.checkUp();
    ct.beRepaired(1);
    ct.checkUp();

    for (int i = 0; i < 10; ++i)
        ct.beRepaired(1);
    ct.checkUp();
    ct.attack("Beppe");
    ct.beRepaired(1);
    ct.checkUp();

    ct.takeDamage(10);
    ct.attack("Beppe");
    ct.beRepaired(1);
    ct.checkUp();
}
