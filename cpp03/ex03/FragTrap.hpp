/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:56:17 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/09 12:56:20 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap {
    public:

        FragTrap( const std::string& NewName );
        ~FragTrap( void );
        FragTrap( const FragTrap& other );
        FragTrap& operator=( const FragTrap& other );

        void    highFivesGuys( void );
};

#endif
