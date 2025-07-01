/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:52:27 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 14:52:29 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class   HumanB{
    private:

        Weapon      *weapon;
        std::string name;

    public:

        HumanB(std::string new_name);
        ~HumanB(void);
        HumanB(const HumanB& other);
        HumanB& operator=(const HumanB& other);

        void    attack(void);
        void    setWeapon(Weapon& new_wpn);
};

#endif
