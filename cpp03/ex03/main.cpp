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
    FragTrap ft("Francesco");
    

    std::cout   << "-------------------------------" << std::endl;
    ct.checkUp();
    st.checkUp();
    ft.checkUp();
    ct.attack("Beppe");
    st.attack("Franco");
    ft.attack("Gennaro");
    std::cout   << "-------------------------------" << std::endl;
    ct.takeDamage(3);
    st.takeDamage(10);
    ft.takeDamage(20);
    ct.checkUp();
    st.checkUp();
    ft.checkUp();
    std::cout   << "-------------------------------" << std::endl;
    ct.beRepaired(1);
    st.beRepaired(5);
    ft.beRepaired(10);
    ct.checkUp();
    st.checkUp();
    ft.checkUp();
    std::cout   << "-------------------------------" << std::endl;
    ft.highFivesGuys();

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
