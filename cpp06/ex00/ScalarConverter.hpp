#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <iomanip>
#include <limits>

enum LiteralType {
    L_CHAR,
    L_INT,
    L_FLOAT,
    L_DOUBLE,
    L_INVALID
};

class ScalarConverter {
private:

    ScalarConverter( void ) {}

public:

    static void convert( const std::string& s );

};


#endif