/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:06:16 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:06:18 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public:

    Cat( void );
    ~Cat( void );
    Cat( const Cat& other );
    Cat& operator=( const Cat& other );

    void    makeSound( void ) const override;

};

#endif
