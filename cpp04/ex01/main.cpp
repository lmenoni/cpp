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
    Animal  *array[20];

    std::cout   << "   CREAZIONE"   << std::endl;
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    // scrivere funzione di stampa di tutte le idee per controllare che funzioni tutto correttamente
    std::cout   << "   DISTRUZIONE"   << std::endl;
    for (int i = 0; i < 20; i++)
        delete array[i];
}
