#include "PresidentialPardonForm.hpp"

void    PresidentialPardonForm::executeAction( void ) const {
    std::cout   << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

// ORTHODOX
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
: AForm(other), _target(other._target) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: AForm("PresidentialPardon", 25, 5), _target(target) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}