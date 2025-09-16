#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <climits>
#include <iomanip>
#include <limits>

class ScalarConverter {
private:

    ScalarConverter( void ) {}

public:

    static void convert( const std::string& s );

};


#endif