#include "ScalarConverter.hpp"

static bool handleSpecialCases(const std::string& s) {
    if (s == "nan" || s == "nanf") {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan\n";
        return true;
    }
    if (s == "+inf" || s == "+inff") {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf\n";
        return true;
    }
    if (s == "-inf" || s == "-inff") {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf\n";
        return true;
    }
    return false;
}

static void printChar(long double value) {
    if (value < std::numeric_limits<char>::min() ||
        value > std::numeric_limits<char>::max())
        std::cout << "char: impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
}

static void printInt(long double value) {
    if (value < std::numeric_limits<int>::min() ||
        value > std::numeric_limits<int>::max())
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void printFloatDouble(long double value) {
    if (value > std::numeric_limits<float>::max() ||
        value < -std::numeric_limits<float>::max())
        std::cout << "float: impossible" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1)
                  << static_cast<float>(value) << "f" << std::endl;

    if (value > std::numeric_limits<double>::max() ||
        value < -std::numeric_limits<double>::max())
        std::cout << "double: impossible" << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(1)
                  << static_cast<double>(value) << std::endl;
}

static LiteralType detectType(const std::string& s) {
    if (s.length() == 1 && !std::isdigit(s[0]))
        return L_CHAR;

    bool hasDot = false;
    bool hasF = false;
    size_t i = 0;

    if (s[i] == '+' || s[i] == '-')
        ++i;

    for (; i < s.length(); ++i) {
        if (s[i] == '.' && !hasDot)
            hasDot = true;
        else if (s[i] == 'f' && i == s.length() - 1)
            hasF = true;
        else if (!std::isdigit(s[i]))
            return L_INVALID;
    }

    if (hasDot && hasF)
        return L_FLOAT;
    if (hasDot)
        return L_DOUBLE;
    if (!hasDot && !hasF)
        return L_INT;
    return L_INVALID;
}

static bool stringToLongDouble(const std::string& s, long double& out) {
    std::istringstream iss(s);
    iss >> out;
    return !iss.fail();
}

void ScalarConverter::convert( const std::string& s ) {
    long double ld = 0.0;
    
    if (handleSpecialCases(s))
        return ;

    LiteralType type = detectType(s);
    if (type == L_CHAR)
        ld = static_cast<long double>(s[0]);
    else if (type == L_INT || type == L_FLOAT || type == L_DOUBLE){
        if (!stringToLongDouble(s, ld)) {
            std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
            return;
        }
    }
    else if (type == L_INVALID) {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
        return ;
    }
    printChar(ld);
    printInt(ld);
    printFloatDouble(ld);
}