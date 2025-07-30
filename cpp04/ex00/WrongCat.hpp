/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:48:27 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/30 13:48:29 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:

    WrongCat( void );
    ~WrongCat( void );
    WrongCat( const WrongCat& other );
    WrongCat& operator=( const WrongCat& other );

    void    makeSound( void ) const;

};

#endif
