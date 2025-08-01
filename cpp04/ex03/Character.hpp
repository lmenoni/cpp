/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:47:15 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 16:47:17 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    
    AMateria    *_inventory[4];
    std::string _name;

public:

    Character( const std::string& NewName );
    Character( const Character& other );
    Character& operator=( const Character& other );
    ~Character( void );

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    bool alreadyEquipped( AMateria* toCheck ) const;
    AMateria *getAMateria( int idx ) const;
    bool emptySlot( void ) const;
    bool fillEmptySlot( AMateria *m );

};

#endif
