/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 14:13:33 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/30 14:13:35 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>

class Brain
{
private:

    std::string ideas[100];

public:

    Brain( void );
    ~Brain( void );
    Brain( const Brain& other );
    Brain& operator=( const Brain& other );

};

#endif
