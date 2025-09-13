#include "Intern.hpp"

AForm* Intern::makeForm(const std::string &fName, const std::string &target) const {
    AForm   *form = NULL;

    if (fName == "Shrubbery")
        form = new ShrubberyCreationForm(target);
    else if (fName == "Robotomy")
        form = new RobotomyRequestForm(target);
    else if (fName == "Presidential")
        form = new PresidentialPardonForm(target);
    
    if (form)
        std::cout << "Intern creates " << fName << std::endl;
    else
        std::cout << "Error: form \"" << fName << "\" does not exist." << std::endl;

    return (form);
}

// ORTHODOX
Intern::Intern() {}

Intern::Intern(const Intern &other) {
    (void)other;
}

Intern &Intern::operator=(const Intern &other) {
    (void)other;
    return (*this);
}

Intern::~Intern() {}
    