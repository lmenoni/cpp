/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:07:13 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 18:07:15 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
    Zombie* horde = zombieHorde(8, "Baldo");

    if (!horde)
        std::cout   << "No Zombie Summoned." << std::endl;
    else{
        for (int i = 0; i < 8; ++i)
            horde[i].announce();
        delete[] horde;
    }
    return (0);
}
