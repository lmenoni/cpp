#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat alice("Alice", 1);
        Bureaucrat bob("Bob", 50);
        Bureaucrat charlie("Charlie", 150);

        std::cout << "\n--- Creazione form ---\n";
        ShrubberyCreationForm shrubForm("home");
        RobotomyRequestForm robotForm("Bender");
        PresidentialPardonForm pardonForm("Marvin");

        std::cout << shrubForm << std::endl;
        std::cout << robotForm << std::endl;
        std::cout << pardonForm << std::endl;

        std::cout << "\n--- Firma dei form ---\n";
        bob.signForm(shrubForm);     // dovrebbe funzionare
        charlie.signForm(robotForm); // troppo basso, fallisce
        alice.signForm(pardonForm);  // dovrebbe funzionare

        std::cout << "\n--- Esecuzione dei form ---\n";
        alice.executeForm(shrubForm);   // esegue
        bob.executeForm(robotForm);     // non firmato o grado basso, fallisce
        alice.executeForm(robotForm);
        alice.executeForm(pardonForm);  // esegue

        std::cout << "\n--- Fine test ---\n";

    } catch (std::exception &e) {
        std::cerr << "Eccezione catturata nel main: " << e.what() << std::endl;
    }
}

