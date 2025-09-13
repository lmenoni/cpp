#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
    try {
        Intern someIntern;
        Bureaucrat alice("Alice", 1); // grado massimo

        std::cout << "\n--- Test ShrubberyCreationForm ---\n";
        AForm* form1 = someIntern.makeForm("Shrubbery", "home");
        if (form1) {
            alice.signForm(*form1);
            alice.executeForm(*form1);
            delete form1;
        }

        std::cout << "\n--- Test RobotomyRequestForm ---\n";
        AForm* form2 = someIntern.makeForm("Robotomy", "Bender");
        if (form2) {
            alice.signForm(*form2);
            alice.executeForm(*form2);
            delete form2;
        }

        std::cout << "\n--- Test PresidentialPardonForm ---\n";
        AForm* form3 = someIntern.makeForm("Presidential", "Marvin");
        if (form3) {
            alice.signForm(*form3);
            alice.executeForm(*form3);
            delete form3;
        }

        std::cout << "\n--- Test invalid form ---\n";
        AForm* form4 = someIntern.makeForm("InvalidForm", "Nobody");
        if (form4)
            delete form4;

    } catch (std::exception &e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }

    return 0;
}
