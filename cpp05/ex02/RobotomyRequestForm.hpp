#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm {
private:

    std::string _target;

public:

    RobotomyRequestForm( const RobotomyRequestForm& other );
    RobotomyRequestForm( const std::string &target);
    RobotomyRequestForm& operator=( const RobotomyRequestForm& other );
    ~RobotomyRequestForm( void );


    void executeAction( void ) const;
};

#endif