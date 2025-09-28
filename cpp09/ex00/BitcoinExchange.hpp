#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange
{
private:
    
    std::map<std::string, double> data;

public:

    BitcoinExchange(std::ifstream& file);
    BitcoinExchange(const BitcoinExchange& other);
    BitcoinExchange& operator=(const BitcoinExchange& other);
    ~BitcoinExchange( void );

    void    Exchange(const std::string& date, const double val);
    void    ExchangeSheet(std::ifstream& input);
    void    ParseInputLine( std::string& line, std::string* date, double* val);
};

#endif