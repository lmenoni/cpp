/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:57:23 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 15:57:25 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:

    Ice( void );
    Ice( const Ice& other );
    Ice& operator=( const Ice& );
    ~Ice( void );

    AMateria *clone( void ) const;
    void    use( ICharacter& target );

};

#endif
