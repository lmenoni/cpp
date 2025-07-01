/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:52:07 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 14:52:10 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
#include <string>
#include <iostream>

class   HumanA{
    private:

        Weapon&     weapon;
        std::string name;

    public:

        HumanA(std::string new_name, Weapon& W);
        ~HumanA(void);
        HumanA(const HumanA& other);
        HumanA& operator=(const HumanA& other);

        void    attack(void);
};

#endif
