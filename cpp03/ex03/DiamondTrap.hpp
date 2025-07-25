#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class   DiamondTrap : public FragTrap, public ScavTrap {
    
    private:

        std::string Name;

    public:

        DiamondTrap( const std::string& NewName );
        ~DiamondTrap( void );
        DiamondTrap( const DiamondTrap& other );
        DiamondTrap& operator=( const DiamondTrap& other );

        void    whoAmI( void );
        void    checkUp( void );
};

#endif