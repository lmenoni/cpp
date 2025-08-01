/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:06:09 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:06:11 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

void    Cat::makeSound( void ) const {
    std::cout << "Meow!" << std::endl;
}

void    Cat::displayIdeas( void ) const {
    std::cout   << "=====ALL IDEAS====="    << std::endl;
    for (int i = 0; i <  100; i++) {
        std::cout   << brain->getIdea(i) << std::endl;
    }
}

// ORTHODOX

Cat::Cat( void ) : brain(new Brain()) {
    std::cout << "Cat default constructor called." << std::endl;
    type = "Cat";
}

Cat::~Cat( void ) {
    std::cout << "Cat default destructor called."  << std::endl;
    delete brain;
}

Cat::Cat( const Cat& other ) : AAnimal(other) {
    std::cout << "Cat copy constructor called."  << std::endl;
    type = other.type;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator=( const Cat& other ) {
    if (this != &other) {
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return (*this);
}
