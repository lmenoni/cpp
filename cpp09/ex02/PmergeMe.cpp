#include "PmergeMe.hpp"

void    PmergeMe::addToVect( const char **input ) {
    int i = 0;

    while (input[i]) {
        int j = 0;
        while (input[i][j]) {
            if (!std::isdigit(input[i][j]))
                throw std::runtime_error((std::string)"Error: bad token '" + input[i] + "'");
            j++;
        }
        _vect.push_back(std::atoi(input[i]));
        i++;
    }
}

// Inserisci le coppie → separa maggiori e minori.
// Ordina i maggiori (merge o insertion).
// Inserisci i minori nell’array già ordinato.

void    PmergeMe::addToDeque( const char **input ) {
    int i = 0;

    while (input[i]) {
        int j = 0;
        while (input[i][j]) {
            if (!std::isdigit(input[i][j]))
                throw std::runtime_error((std::string)"Error: bad token '" + input[i] + "'");
            j++;
        }
        _deque.push_back(std::atoi(input[i]));
        i++;
    }
}

void    sortVect( const char **input );
void    sortDeque( const char **input );