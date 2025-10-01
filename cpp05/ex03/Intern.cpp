#include "Intern.hpp"

static AForm* createShrubbery(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string &target) {
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string &fName, const std::string &target) const {
    std::string types[3] = {"Shrubbery", "Robotomy", "Presidential"};

    AForm *(*create[3])(const std::string&) = {&createShrubbery, &createRobotomy, &createPresidential};
    for (int i = 0; i < 3; i++) {
        if (fName == types[i]) {
            std::cout << "Intern creates " << fName << std::endl;
            return (create[i](target));
        }
    }
    std::cout << "Error: form \"" << fName << "\" does not exist." << std::endl;
    return (NULL);
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
    