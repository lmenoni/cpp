#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Error: invalid n of arguments.\n";
        return (1);
    }
    
    RPN calculator;
    calculator.execExpr(av[1]);
}