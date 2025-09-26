#include "Span.hpp"

// ORTHODOX

Span::Span( const unsigned int size ) : _data(0), _size(size) {}

Span::Span( const Span& other ) : _data(other._data), _size(other._size) {}

Span& Span::operator=( const Span& other ) {
    if (this != &other) {
        _size = other._size;
        _data = other._data;
    }
    return *this;
}

Span::~Span( void ) {}


void    Span::addNumber( const int val ) {
    if (_data.size() >= _size)
        throw std::runtime_error("Span is full");
    _data.push_back(val);
}

int     Span::shortestSpan( void ) const {
    if (_data.size() < 2)
        throw std::runtime_error("Too few items");
    std::vector<int>    sorted = _data;
    std::sort(sorted.begin(), sorted.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); i++) {
        int diff = sorted[i] - sorted[i - 1];
        if (minSpan > diff)
            minSpan = diff;
    }
    return (minSpan);
}
int     Span::longestSpan( void ) const {
    if (_data.size() < 2)
        throw std::runtime_error("Too few items");
    
    int minVal = *std::min_element(_data.begin(), _data.end());
    int maxVal = *std::max_element(_data.begin(), _data.end());
    return maxVal - minVal;
}
