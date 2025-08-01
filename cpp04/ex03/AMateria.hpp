/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:27:52 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 15:27:53 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <string>
#include <iostream>

#ifndef DEBUG
#define DEBUG 0
#endif

class ICharacter;

class AMateria
{
protected:

    std::string _type;
    AMateria& operator=( const AMateria& other );
    
public:

    AMateria( std::string const & type );
    AMateria( void );
    virtual ~AMateria( void );
    AMateria( const AMateria& other );

    std::string const & getType( void ) const;
    virtual AMateria* clone( void ) const = 0;
    virtual void use( ICharacter& target ) = 0;

};

#endif