#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm {
private:

    std::string _target;

public:

    ShrubberyCreationForm( const ShrubberyCreationForm& other );
    ShrubberyCreationForm( const std::string &target);
    ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );
    ~ShrubberyCreationForm( void );


    void executeAction( void ) const;
};

#endif