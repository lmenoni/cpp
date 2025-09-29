#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN {
private:

    std::stack<int> _data;

public:

    RPN( void );
    RPN( const RPN& other );
    RPN& operator=( const RPN& other );
    ~RPN( void );

    void    addVal( const int val );
    void    calc( const char type );
    void    execExpr( const std::string& input );
};

#endif