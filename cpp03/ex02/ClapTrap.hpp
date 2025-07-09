/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 16:28:17 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/04 16:28:19 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class   ClapTrap {
    protected:

        std::string Name;
        int         HP;
        int         EP;
        int         Atk;

    public:

        ClapTrap( const std::string& NewName );
        ~ClapTrap( void );
        ClapTrap( const ClapTrap& other);
        ClapTrap&   operator=( const ClapTrap& other );

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        bool    isDead( void );
        bool    isTired( void );
        void    checkUp( void );
};

#endif
