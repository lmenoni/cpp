/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:16:50 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 16:16:51 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria *Character::getAMateria( int idx) const {
    if (idx < 4 && idx >= 0)
        return (_inventory[idx]);
    return (NULL);
}

bool Character::fillEmptySlot( AMateria *m ) {
    if (this->emptySlot()) {
        this->equip(m);
        return (true);
    }
    return (false);
}

bool Character::emptySlot( void ) const {
    for (int i = 0; i < 4; i++) {
        if (!_inventory[i])
            return (true);
    }
    return (false);
}

bool Character::alreadyEquipped( AMateria* toCheck ) const {
    if (!toCheck)
        return (false);

    for (int i = 0; i < 4; i++) {
        if (_inventory[i] == toCheck)
            return (true);
    }
    return (false);
}

std::string const & Character::getName( void ) const{
    return (_name);
}

void    Character::equip( AMateria* m ) {
    if (!m)
        return ;

    int i = 0;
    while (i < 4 && _inventory[i])
        i++;

    if (i == 4)
        return ;
    else
        _inventory[i] = m;
    if (DEBUG)
        std::cout   << "Equipped AMateria: "    << m->getType() << " in slot "  << i << "." << std::endl;
}

void    Character::unequip( int idx ) {
    if (idx < 4 && idx >= 0 && _inventory[idx])
        _inventory[idx] = NULL;
    if (DEBUG)
        std::cout   << "Unequipped AMateria in slot "    << idx << "." << std::endl;
}

void    Character::use(int idx, ICharacter& target) {
    if (idx < 4 && idx >= 0 && _inventory[idx])
        _inventory[idx]->use(target);
}

// ORTHODOX

Character::Character( const std::string& NewName) : _name(NewName) {
    if (DEBUG)
        std::cout   << "Character default constructor called."  << std::endl;
    for (int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

Character::Character( const Character& other ) : _name(other._name) {
    if (DEBUG)
        std::cout   << "Character copy constructor called."  << std::endl;
    for (int i = 0; i < 4; i++){
        if (other._inventory[i])
            _inventory[i] = other._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character& Character::operator=( const Character& other ) {

    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
            {
                delete _inventory[i];
                _inventory[i] = NULL;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character( void ) {
    if (DEBUG)
        std::cout   << "Character destructor called."  << std::endl;
    for (int i = 0; i < 4; i++){
        if (_inventory[i]){
            delete _inventory[i];
            _inventory[i] = NULL;
        }
    }
}
