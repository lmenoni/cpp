#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

class PmergeMe
{
private:

    std::vector<int>    _vect;
    std::deque<int>     _deque;

public:

    void    addToVect( const char **input );
    void    sortVect( const char **input );
    void    addToDeque( const char **input );
    void    sortDeque( const char **input );


    //ORTHODOX
    PmergeMe( void ) {}
    ~PmergeMe( void ) {}
    PmergeMe( const PmergeMe& other ) {
        *this = other;
    }
    PmergeMe& operator= ( const PmergeMe& other ) {
        if (this != &other) {
            _vect = other._vect;
            _deque = other._deque;
        }
        return (*this);
    }
};

#endif