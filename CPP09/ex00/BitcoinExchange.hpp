#pragma once
#include <fstream>
#include <iostream>
#include <map>
#include <algorithm>    

class BitcoinExchange {
    public:
        // Constructors and Destructors
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        // Methods
        void    action(std::string const& filename);

    private:
        std::map<std::string, float>    _map;
        void    fillDatabase();
        void    analyzeLine(std::string const& line);

};