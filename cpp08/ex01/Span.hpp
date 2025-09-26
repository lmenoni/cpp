#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <limits>

class Span
{
private:
    
    std::vector<int>    _data;
    unsigned int        _size;

public:

    Span( const unsigned int size );
    Span( const Span& other );
    Span& operator=( const Span& other );
    ~Span( void );

    void    addNumber( const int val );
    int     shortestSpan( void ) const;
    int     longestSpan( void ) const;

    template <typename IT>
    void    addRange(IT begin, IT end) {
        if (_data.size() + std::distance(begin, end) > _size)
            throw std::runtime_error("Span has not enough space");
        _data.insert(_data.end(), begin, end);
    }
};

#endif