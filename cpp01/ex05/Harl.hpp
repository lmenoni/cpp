/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:19:47 by lmenoni           #+#    #+#             */
/*   Updated: 2025/07/02 13:19:49 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class   Harl{
    private:

        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

    public:

        Harl( void );
        ~Harl( void );
        Harl(const Harl& other);
        Harl&   operator=(const Harl& other);

        void    complain( std::string level );
};

#endif
