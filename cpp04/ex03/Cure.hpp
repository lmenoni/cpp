/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:57:49 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 15:57:50 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
public:

    Cure( void );
    Cure( const Cure& other );
    Cure& operator=( const Cure& );
    ~Cure( void );

    AMateria *clone( void ) const;
    void    use( ICharacter& target );

};

#endif
