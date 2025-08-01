/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:48:45 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/31 13:48:47 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {

    std::cout << "=====CHARACTER TEST=====" << std::endl;
    Character p1("Gino");

    AMateria *IceSpell1 = new Ice;
    AMateria *IceSpell2 = new Ice;
    AMateria *IceSpell3 = new Ice;
    AMateria *IceSpell4 = new Ice;
    AMateria *HealingSpell = new Cure;

    if (!p1.fillEmptySlot(IceSpell1))
        delete (IceSpell1);
    if (!p1.fillEmptySlot(HealingSpell))
        delete (HealingSpell);

    p1.use(0, p1);
    p1.use(1, p1);

    if (!p1.fillEmptySlot(IceSpell2))
        delete (IceSpell2);
    if (!p1.fillEmptySlot(IceSpell3))
        delete (IceSpell3);
    if (!p1.fillEmptySlot(IceSpell4))
        delete (IceSpell4);

    AMateria *t = p1.getAMateria(0);
    p1.unequip(0);
    if (t)
        delete t;

    std::cout << "=====MATERIA SOURCE TEST=====" << std::endl;

    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}
