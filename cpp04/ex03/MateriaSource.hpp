/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmenoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:29:40 by lmenoni           #+#    #+#             */
/*   Updated: 2025/08/01 14:29:41 by lmenoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_h
#define MATERIASOURCE_h

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:

    AMateria *_memory[4];

public:

    MateriaSource( void );
    MateriaSource( const MateriaSource& other );
    MateriaSource& operator=( const MateriaSource& other );
    ~MateriaSource( void );

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif
