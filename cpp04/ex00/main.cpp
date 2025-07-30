/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:04:32 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/22 14:04:34 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* w = new WrongCat();

std::cout << j->getType() << " " << std::endl;
j->makeSound();

std::cout << i->getType() << " " << std::endl;
i->makeSound();
meta->makeSound();

std::cout << w->getType() << " " << std::endl;
w->makeSound();

delete meta;
delete j;
delete i;
delete w;
}
