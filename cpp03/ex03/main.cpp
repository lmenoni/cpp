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

#include "DiamondTrap.hpp"

int main( void ) {

    DiamondTrap dt("Ugo");

    dt.checkUp();
    dt.attack( "Gigi");
    dt.ClapTrap::attack("Gianni");
    dt.takeDamage(30);
    dt.checkUp();
    dt.beRepaired(15);
    dt.checkUp();
    dt.guardGate();
    dt.highFivesGuys();
    dt.whoAmI();
    dt.takeDamage(100);
}
