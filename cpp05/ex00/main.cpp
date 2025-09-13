#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Alice", 2);
        Bureaucrat b("Bob", 149);

        std::cout << a << std::endl;
        std::cout << b << std::endl;

        a.incrementGrade(); // da 2 a 1
        std::cout << a << std::endl;
        a.incrementGrade(); // errore: troppo alto
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat c("Charlie", 151); // errore subito
    }
    catch (std::exception &e)
    {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
}
