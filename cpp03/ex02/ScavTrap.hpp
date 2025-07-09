/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:03:49 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/09 12:03:50 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
    public:

        ScavTrap( const std::string& NewName );
        ~ScavTrap( void );
        ScavTrap( const ScavTrap& other );
        ScavTrap& operator=( const ScavTrap& other );

        void    attack( const std::string& target );
        void    guardGate( void );
};

#endif