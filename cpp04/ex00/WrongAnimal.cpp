/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:48:12 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/30 13:48:14 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

void    WrongAnimal::makeSound( void ) const {
    std::cout   << "* generic WrongAnimal sound *"   << std::endl;
}

std::string    WrongAnimal::getType( void ) const{
    return (type);
}


// ORTHODOX

WrongAnimal::WrongAnimal( void ) : type("default") {
    std::cout << "WrongAnimal default constructor called." << std::endl; 
}

WrongAnimal::~WrongAnimal( void ) { 
    std::cout << "WrongAnimal default destructor called."  << std::endl; 
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) : type(other.type)  {
    std::cout << "WrongAnimal copy constructor called."  << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
    if (this != &other)
        type = other.type;
    return (*this);
}

