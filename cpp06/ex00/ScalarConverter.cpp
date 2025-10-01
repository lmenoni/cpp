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

LiteralType detectType(const std::string& s) {
    if (s.length() == 1 && !std::isdigit(s[0]))
        return (L_CHAR);
    
    int start = 0;
    if (s[0] == '-' || s[0] == '+')
        start++;
    int isInt = true;
    for (int i = start; s[i]; i++) {
        if (!std::isdigit(s[i])) {
            isInt = false;
            break;
        }
    }
    if (isInt)
        return (L_INT);

    bool hasDot = false;
    if (s[s.length() - 1] == 'f' && s.length() - start >= 4) {
        for (size_t i = start; i < s.length() - 1; i++) {
            if (s[i] == '.' && !hasDot) {
                hasDot = true;
                continue;
            }
            if (!std::isdigit(s[i])) {
                hasDot = false;
                break;
            }
        }
        if (hasDot)
            return (L_FLOAT);
    }

    hasDot = false;
    if (s.length() - start >= 3) {
        for (size_t i = start; i < s.length(); i++) {
            if (s[i] == '.' && !hasDot) {
                hasDot = true;
                continue;
            }
            if (!std::isdigit(s[i])) {
                hasDot = false;
                break;
            }
        }
        if (hasDot)
                return (L_DOUBLE);
    }

    return (L_INVALID);
}

long double charToDouble (const std::string s) {
    return (static_cast<long double>(s[0]));
}

long double intToDouble (const std::string s) {
    std::istringstream iss(s);
    long double n;
    iss >> n;
    return (n);
}

void ScalarConverter::convert( const std::string& s ) {
    long double ld = 0.0;
    
    if (HandleSpecialCases(s))
        return ;

    LiteralType type = detectType(s);
    if (type == L_CHAR)
        ld = charToDouble(s);
    else if (type == L_INT || type == L_FLOAT || type == L_DOUBLE)
        ld = intToDouble(s);
    else if (type == L_INVALID) {
        std::cout   << "char: Impossible" << std::endl;
        std::cout   << "int: Impossible" << std::endl;
        std::cout   << "float: Impossible" << std::endl;
        std::cout   << "double: Impossible" << std::endl;
        return ;
    }
    IntCharConvert(ld);
    FloatDoubleConvert(ld);
}