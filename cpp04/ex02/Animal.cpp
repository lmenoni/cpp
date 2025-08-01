/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:05:34 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:05:35 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void    AAnimal::makeSound( void ) const {
    std::cout   << "* generic AAnimal sound *"   << std::endl;
}

std::string    AAnimal::getType( void ) const{
    return (type);
}

// ORTHODOX

AAnimal::AAnimal( void ) : type("default") {
    std::cout << "AAnimal default constructor called." << std::endl; 
}

AAnimal::~AAnimal( void ) { 
    std::cout << "AAnimal default destructor called."  << std::endl; 
}

AAnimal::AAnimal( const AAnimal& other ) : type(other.type)  {
    std::cout << "AAnimal copy constructor called."  << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& other ) {
    if (this != &other)
        type = other.type;
    return (*this);
}
