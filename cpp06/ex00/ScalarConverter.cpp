#include "ScalarConverter.hpp"

static bool HandleSpecialCases(const std::string& s) {
    if (s == "+inf" || s == "+inff") {
        std::cout   << "char: Impossible" << std::endl;
        std::cout   << "int: Impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
        return (true);
    }
    if (s == "nan" || s == "nanf") {
        std::cout   << "char: Impossible" << std::endl;
        std::cout   << "int: Impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
        return (true);
    }
    if (s == "-inf" || s == "-inff") {
        std::cout   << "char: Impossible" << std::endl;
        std::cout   << "int: Impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
        return (true);
    }
    return (false);
}

static void FloatDoubleConvert(long double val) {
    if (val <= static_cast<long double>(std::numeric_limits<float>::max())
        && val >= static_cast<long double>(-std::numeric_limits<float>::max()))
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(val) << "f" << std::endl;
    else
        std::cout << "float: Impossible" << std::endl;
    
    if (val <= static_cast<long double>(std::numeric_limits<double>::max())
        && val >= static_cast<long double>(-std::numeric_limits<double>::max()))
            std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(val) << std::endl;
    else
        std::cout << "double: Impossible" << std::endl;
}

static void IntCharConvert(long double val) {
    if (val >= CHAR_MIN && val <= CHAR_MAX) {
        if (isprint(static_cast<char>(val))) {
            std::cout   << "char: '" << static_cast<char>(val) << "'" << std::endl;
        }
        else {
            std::cout   << "char: Non displayable" << std::endl;
        }
    }
    else
        std::cout   << "char: Impossible" << std::endl;
    
    if (val >= INT_MIN && val <= INT_MAX )
        std::cout   << "int: " << static_cast<int>(val) << std::endl;
    else
        std::cout   << "int: Impossible" << std::endl;
}

void ScalarConverter::convert( const std::string& s ) {
    long double ld = 0.0;

    if (HandleSpecialCases(s))
        return ;
    std::stringstream ss(s);
    ss >> ld;
    if (ss.fail()) {
        std::cout   << "char: Impossible" << std::endl;
        std::cout   << "int: Impossible" << std::endl;
        std::cout   << "float: Impossible" << std::endl;
        std::cout   << "double: Impossible" << std::endl;
        return ;
    }
    IntCharConvert(ld);
    FloatDoubleConvert(ld);
}