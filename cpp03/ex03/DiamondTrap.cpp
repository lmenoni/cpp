
#include "DiamondTrap.hpp"

void    DiamondTrap::checkUp( void ) {
    std::cout   << Name
                << " has:"      << std::endl
                << HP           << " HP"    << std::endl
                << EP           << " EP"    << std::endl
                << Atk          << " Atk"   << std::endl
                << std::endl;
}

void    DiamondTrap::whoAmI( void ) {

    std::cout   << "i'm ClapTrap "          << ClapTrap::Name
                << " but also DiamondTrap "  << Name
                << std::endl;
}

 // ORTHODOX
DiamondTrap::DiamondTrap( const std::string& NewName )
    :   ClapTrap(NewName + "_clap_name"),
        FragTrap(),
        ScavTrap(),
        Name(NewName) {

    HP = 100;
    EP = 50;
    Atk = 30;

    std::cout   << "DiamondTrap Constructor Called!"   << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other )
    :   ClapTrap(other),
        FragTrap(),
        ScavTrap() {

    HP = other.HP;
    EP = other.EP;
    Atk = other.Atk;
}

DiamondTrap&   DiamondTrap::operator=( const DiamondTrap& other ) {

    if (this != &other)
        ClapTrap::operator=(other);
    return (*this);
}

DiamondTrap::~DiamondTrap( void )
{ std::cout << "DiamondTrap Destructor Called!"    << std::endl; }


// aggiungere default constructors su fragtrap e scavtrap, implementare funzione who am i, dilemma del nome 