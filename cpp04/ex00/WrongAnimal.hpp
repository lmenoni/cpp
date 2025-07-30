/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:48:19 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/30 13:48:21 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
    
    std::string type;

    public:

    WrongAnimal( void );
    ~WrongAnimal( void );
    WrongAnimal(const WrongAnimal& other);
    WrongAnimal& operator=(const WrongAnimal& other);

    std::string    getType( void ) const;
    void    makeSound( void ) const;

};

#endif
