#ifndef SPAN_HPP
#define SPAN_HPP

class Span
{
private:
    
    int *_data;
    int _size;

public:

    Span( const int size );
    Span( const Span& other );
    Span& operator=( const Span& other );
    ~Span( void );

    void    addNumber( const int val );
    int     shortestSpan( void ) const;
    int     longestSpan( void ) const;

};


#endif