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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
    ClapTrap ct("Ugo");
    ScavTrap st("Gigi");
    

    std::cout   << "-------------------------------" << std::endl;
    ct.checkUp();
    st.checkUp();
    ct.attack("Beppe");
    st.attack("Franco");
    std::cout   << "-------------------------------" << std::endl;
    ct.takeDamage(3);
    st.takeDamage(10);
    ct.checkUp();
    st.checkUp();
    std::cout   << "-------------------------------" << std::endl;
    ct.beRepaired(1);
    st.beRepaired(5);
    ct.checkUp();
    st.checkUp();
    std::cout   << "-------------------------------" << std::endl;

    // for (int i = 0; i < 10; ++i)
    //     ct.beRepaired(1);
    // ct.checkUp();
    // ct.attack("Beppe");
    // ct.beRepaired(1);
    // ct.checkUp();

    // ct.takeDamage(10);
    // ct.attack("Beppe");
    // ct.beRepaired(1);
    // ct.checkUp();
}
