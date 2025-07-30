/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:05:54 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:05:56 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:

    Brain   *brain;

public:

    Dog( void );
    ~Dog( void );
    Dog( const Dog& other );
    Dog& operator=( const Dog& other );

    void    makeSound( void ) const;

};


#endif
