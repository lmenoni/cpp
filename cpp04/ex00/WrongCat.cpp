/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:48:35 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/30 13:48:37 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

void    WrongCat::makeSound( void ) const {
    std::cout << "Meow!" << std::endl;
}

// ORTHODOX

WrongCat::WrongCat( void ) {
    type = "WrongCat";
    std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::~WrongCat( void ) { 
    std::cout << "WrongCat default destructor called."  << std::endl; 
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal(other) {
    type = other.type;
    std::cout << "WrongCat copy constructor called."  << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
    if (this != &other)
        type = other.type;
    return (*this);
}
