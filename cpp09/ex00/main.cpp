#include "BitcoinExchange.hpp"

int main(int ac, char **av) {
    std::ifstream db("data.csv");
    std::ifstream input(av[1]);
    (void)ac;

    if (!db.is_open() || !input.is_open()) {
        std::cerr << "Error: could not open file/s.\n";
        return (1);
    }
    BitcoinExchange _db(db);
    _db.ExchangeSheet(input);
}