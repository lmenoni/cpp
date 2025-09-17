#include "Span.hpp"

Span::Span( const int size ) : _data(0), _size(0) {
    _data = new int(size);
}

Span::Span( const Span& other ) : _data(0), _size(0) {
    *this = other;
}

Span& Span::operator=( const Span& other ) {
    if (this != &other) {
        delete _data;
        _data = new int(other._size);
        for (int i = 0; i < other._size; i++)
            _data[i] = other._data[i];
        _size = other._size;
    }
    return (*this);
}
Span::~Span( void ) {
    delete _data;
}

// da implementare
void    Span::addNumber( const int val );
int     Span::shortestSpan( void ) const;
int     Span::longestSpan( void ) const;