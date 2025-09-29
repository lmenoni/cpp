#include "RPN.hpp"

void    RPN::addVal( const int val ) {
    _data.push(val);
}

void    RPN::calc( const char type ) {
    int latest;
    int before;

    if (_data.size() < 2)
        throw std::runtime_error("Error: bad input: less than 2 values.");
    latest = _data.top();
    _data.pop();
    before = _data.top();
    _data.pop();
    if (type == '+')
        _data.push(before + latest);
    else if (type == '-')
        _data.push(before - latest);
    else if (type == '*')
        _data.push(before * latest);
    else if (type == '/') {
        if (latest == 0)
            throw std::runtime_error("Error: bad input: division by 0.");
        _data.push(before / latest);
    }
    else
        throw std::runtime_error((std::string)"Error: bad input: unexpected token -" + type);
}

void    RPN::execExpr( const std::string& input ) {
    std::istringstream iss(input);
    std::string temp;

    while (iss >> temp) {
        if (temp.size() > 1) {
            std::cerr << "Error: bad input: unexpected token -" << temp << std::endl;
            return ;
        }
        if (temp[0] >= '0' && temp[0] <= '9')
            addVal(std::atoi(temp.c_str()));
        else {
            try {
                calc(temp[0]);
            }
            catch ( const std::exception& e) {
                std::cerr << e.what() << std::endl;
            }
        }
    }
    if (_data.size() != 1)
        std::cerr << "Error: bad input: values left to elaborate.\n";
    else
        std::cout << _data.top() << std::endl;
}

//ORTHODOX
RPN::RPN( void ) {}

RPN::RPN( const RPN& other ) : _data(other._data) {}

RPN& RPN::operator=( const RPN& other ) {
    if (this != &other) {
        _data = other._data;
    }
    return (*this);
}

RPN::~RPN( void ) {}
