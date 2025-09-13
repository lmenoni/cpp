#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat boss("Boss", 1);
        Bureaucrat intern("Intern", 140);

        Form tax("Tax Form", 50, 20);
        Form report("Report", 140, 100);

        std::cout << tax << std::endl;
        std::cout << report << std::endl;

        // Intern prova a firmare
        intern.signForm(tax);   // dovrebbe fallire
        intern.signForm(report); // dovrebbe riuscire

        // Boss prova a firmare
        boss.signForm(tax); // dovrebbe riuscire

        std::cout << tax << std::endl;
        std::cout << report << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}
