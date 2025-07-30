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

void    Animal::makeSound( void ) const {
    std::cout   << "* generic animal sound *"   << std::endl;
}

std::string    Animal::getType( void ) const{
    return (type);
}


// ORTHODOX

Animal::Animal( void ) : type("default") {
    std::cout << "Animal default constructor called." << std::endl; 
}

Animal::~Animal( void ) { 
    std::cout << "Animal default destructor called."  << std::endl; 
}

Animal::Animal( const Animal& other ) : type(other.type)  {
    std::cout << "Animal copy constructor called."  << std::endl;
}

Animal& Animal::operator=( const Animal& other ) {
    if (this != &other)
        type = other.type;
    return (*this);
}
