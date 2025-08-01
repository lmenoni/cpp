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

int main()
{
    AAnimal  *array[20];
    // AAnimal  animal;
    int     nOfAnimals = 10;

    std::cout   << "=====CREAZIONE====="   << std::endl;
    for (int i = 0; i < nOfAnimals; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    
    Cat Garfield;

    Garfield.displayIdeas();

    std::cout   << "=====DISTRUZIONE====="   << std::endl;
    for (int i = 0; i < nOfAnimals; i++)
        delete array[i];
}
