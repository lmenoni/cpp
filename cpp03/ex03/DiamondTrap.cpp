
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( const std::string& NewName )
    :   ClapTrap(NewName + "_clap_name"),
        FragTrap(),
        ScavTrap(),
        name(NewName) {

    HP = 100;
    EP = 100;
    Atk = 30;

    std::cout   << "DiamondTrap Constructor Called!"   << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
    :   ClapTrap(other) {}

DiamondTrap&   DiamondTrap::operator=( const DiamondTrap& other ) {

    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

DiamondTrap::~DiamondTrap( void )
{ std::cout << "DiamondTrap Destructor Called!"    << std::endl; }


// aggiungere default constructors su fragtrap e scavtrap, implementare funzione who am i, dilemma del nome 