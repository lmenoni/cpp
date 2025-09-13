#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
private:

    std::string _target;

public:

    PresidentialPardonForm( const PresidentialPardonForm& other );
    PresidentialPardonForm( const std::string &target);
    PresidentialPardonForm& operator=( const PresidentialPardonForm& other );
    ~PresidentialPardonForm( void );


    void executeAction( void ) const;
};

#endif