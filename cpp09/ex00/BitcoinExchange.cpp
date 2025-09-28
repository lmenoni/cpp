#include "BitcoinExchange.hpp"

void    BitcoinExchange::Exchange(const std::string& date, const double val) {
    std::map<std::string, double>::iterator it = data.lower_bound(date);
    if (it == data.end() || it->first != date) {
        if (it == data.begin())
            ;
        else
            --it;
    }
    std::cout << date << " => " << val << " = " << val * it->second << std::endl;
}

void    BitcoinExchange::ParseInputLine( std::string& line, std::string* date, double* val) {
    if (line.size() < 14)
        throw std::runtime_error(std::string("Error: bad input => ") + line);

    if (line[4] != '-' || line[7] != '-' ||
        line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        throw std::runtime_error(std::string("Error: bad input => ") + line);

    std::string yearStr(line.substr(0, 4));
    std::string monthStr(line.substr(5, 2));
    std::string dayStr(line.substr(8, 2));

    for (int i = 0; i < 4; i++)
        if (!std::isdigit(yearStr[i])) throw std::runtime_error(std::string("Error: bad input => ") + line);
    for (int i = 0; i < 2; i++)
        if (!std::isdigit(monthStr[i])) throw std::runtime_error(std::string("Error: bad input => ") + line);
    for (int i = 0; i < 2; i++)
        if (!std::isdigit(dayStr[i])) throw std::runtime_error(std::string("Error: bad input => ") + line);

    int year = std::atoi(yearStr.c_str());
    int month = std::atoi(monthStr.c_str());
    int day = std::atoi(dayStr.c_str());

    if (year < 0 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31)
        throw std::runtime_error(std::string("Error: bad input => ") + line);

    *date = line.substr(0, 10);

    std::string value(line.substr(13));
    int i = 0;
    while (value[i] == '-' || value[i] == '+')
        i++;
    while (value[i]) {
        if (!std::isdigit(value[i]) && value[i] != '.')
            throw std::runtime_error(std::string("Error: bad input => ") + line);
        i++;
    }
    *val = std::atof(value.c_str());
    if (*val < 0)
        throw std::runtime_error("Error: not a positive number.");
    if (*val > 1000)
        throw std::runtime_error("Error: too large a number.");
}

void    BitcoinExchange::ExchangeSheet(std::ifstream& input) {
    std::string line;

    if (!std::getline(input, line)) {
        std::cerr << "Error: Empty file\n";
        return ;
    }
    while (std::getline(input, line)) {
        try {
            std::string date;
            double      val;
            ParseInputLine(line, &date, &val);
            Exchange(date, val);
        }
        catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}

//ORTHODOX
BitcoinExchange::BitcoinExchange(std::ifstream& file) {
    std::string line;

    if (!std::getline(file, line)) {
        std::cerr << "Error: Empty file\n";
        return ;
    }
    while (std::getline(file, line)) {
        std::string::size_type pos = line.find(',');
        if (pos == std::string::npos) {
            std::cerr << "Error: bad line in DB." << std::endl;
            continue;
        }
        std::string date = line.substr(0, pos);
        double val = std::atof(line.substr(pos + 1).c_str());
        data[date] = val;
    }
}
    
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) {
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) {
    if (this != &other) {
        data = other.data;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange( void ) {}
