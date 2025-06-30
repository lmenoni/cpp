/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 17:27:05 by lmenoni           #+#    #+#             */
/*   Updated: 2025/06/30 17:27:07 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class   Zombie{
    private:

        std::string name;

    public:

        Zombie(void);
        Zombie(const std::string new_name);
        Zombie(const Zombie& other);
        Zombie& operator=(const Zombie& other);
        ~Zombie();

        void    announce(void);
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif