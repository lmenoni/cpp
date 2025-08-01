/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:29:44 by lmenoni           #+#    #+#             */
/*   Updated: 2025/08/01 14:29:46 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria( AMateria *m ) {
    if (!m)
        return ;

    int i = 0;
    while (i < 4 && _memory[i])
        i++;

    if (i == 4)
        return ;
    else
        _memory[i] = m;
    if (DEBUG)
        std::cout << "Learned AMateria: " << m->getType() << " in slot " << i << "." << std::endl;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
    for (int i = 0; i < 4; i++) {
        if (_memory[i] && type == _memory[i]->getType())
            return (_memory[i]->clone());
    }
    return (NULL);
}

// ORTHODOX
MateriaSource::MateriaSource( void ) {
    if (DEBUG)
        std::cout << "MateriaSource default constructor called." << std::endl;
    for (int i = 0; i < 4; i++){
        _memory[i] = NULL;
    }
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
    if (DEBUG)
        std::cout << "MateriaSource copy constructor called." << std::endl;
    for (int i = 0; i < 4; i++){
        if (other._memory[i])
            _memory[i] = other._memory[i]->clone();
        else
            _memory[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=( const MateriaSource& other ) {

    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_memory[i])
            {
                delete _memory[i];
                _memory[i] = NULL;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            if (other._memory[i])
                _memory[i] = other._memory[i]->clone();
            else
                _memory[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource( void ) {
    if (DEBUG)
        std::cout   << "MateriaSource destructor called."  << std::endl;
    for (int i = 0; i < 4; i++){
        if (_memory[i]){
            delete _memory[i];
            _memory[i] = NULL;
        }
    }
}

