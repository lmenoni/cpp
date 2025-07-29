/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:05:59 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:06:02 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void    Dog::makeSound( void ) const {
    std::cout << "Woof!" << std::endl;
}

// ORTHODOX

Dog::Dog( void ) {
    type = "Dog";
    std::cout << "Dog default constructor called." << std::endl; 
}

Dog::~Dog( void ) { 
    std::cout << "Dog default destructor called."  << std::endl; 
}

Dog::Dog( const Dog& other ) : Animal(other) {
    type = other.type;
    std::cout << "Dog copy constructor called."  << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
    if (this != &other)
        type = other.type;
    return (*this);
}

