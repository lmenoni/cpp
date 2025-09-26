#include "Span.hpp"
#include <iostream>
#include <cstdlib>   // per std::rand
#include <ctime>     // per std::time

int main( void ) {
    // Test base (5 numeri)
    try {
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Base test:" << std::endl;
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl; // 2
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;   // 14
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    // Test con 10.000 numeri casuali
    try {
        const int N = 10000;
        Span bigSpan(N);
        std::srand(std::time(0)); // inizializza seme random
        std::vector<int> randomNumbers;
        for (int i = 0; i < N; i++) {
            randomNumbers.push_back(std::rand());
        }
        // Inserimento in un colpo solo usando iterators
        bigSpan.addRange(randomNumbers.begin(), randomNumbers.end());
        std::cout << "\nBig test (10000 elements):" << std::endl;
        std::cout << "Shortest span: " << bigSpan.shortestSpan() << std::endl;
        std::cout << "Longest span: " << bigSpan.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    // Test eccezioni
    try {
        Span empty(2);
        empty.shortestSpan(); // dovrebbe lanciare eccezione
    } catch (std::exception &e) {
        std::cout << "\nException test (empty span): " << e.what() << std::endl;
    }

    return 0;
}