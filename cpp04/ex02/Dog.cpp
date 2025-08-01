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

void    Dog::displayIdeas( void ) const {
    std::cout   << "=====ALL IDEAS====="    << std::endl;
    for (int i = 0; i <  100; i++) {
        std::cout   << brain->getIdea(i) << std::endl;
    }
}

// ORTHODOX

Dog::Dog( void ) : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog default constructor called." << std::endl; 
}

Dog::~Dog( void ) { 
    std::cout << "Dog default destructor called."  << std::endl;
    delete brain;
}

Dog::Dog( const Dog& other ) : AAnimal(other) {
    std::cout << "Dog copy constructor called."  << std::endl;
    type = other.type;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator=( const Dog& other ) {
    if (this != &other) {
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

