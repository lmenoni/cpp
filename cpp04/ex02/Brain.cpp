/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:13:40 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/30 14:13:42 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

const std::string&    Brain::getIdea( int idx ) const {
    return (ideas[idx]);
}

// ORTHODOX
Brain::Brain( void ) {
    std::cout   << "Brain default constructor called."  << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "(empty)";
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called."   << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

Brain::~Brain( void ) {
    std::cout   << "Brain default destructor called."   << std::endl;
}