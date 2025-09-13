#include "RobotomyRequestForm.hpp"

void    RobotomyRequestForm::executeAction( void ) const {
    static bool seeded = false;
    if (!seeded) {
        std::srand(std::time(NULL));
        seeded = true;
    }

    std::cout << "* drilling noises * Bzzzz... bzzzz..." << std::endl;

    if (std::rand() % 2 == 0) { // 50% chance
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    }
    else {
        std::cout << "The robotomy of " << _target << " failed!" << std::endl;
    }
}

// ORTHODOX
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
: AForm(other), _target(other._target) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: AForm("RobotomyRequest", 72, 45), _target(target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}