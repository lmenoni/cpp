/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 14:51:45 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/01 14:51:47 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class   Weapon{
    private:

        std::string type;

    public:

        Weapon(void);
        Weapon(std::string);
        ~Weapon(void);
        Weapon(const Weapon& other);
        Weapon& operator=(const Weapon& other);

        const std::string&  getType(void);
        void                setType(const std::string new_type);
};

#endif
