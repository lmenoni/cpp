/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:05:39 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:05:40 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal
{
    protected:
    
    std::string type;

    public:

    Animal( void );
    ~Animal( void );
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);

    std::string    getType( void ) const;
    virtual void    makeSound( void ) const;

};


#endif
