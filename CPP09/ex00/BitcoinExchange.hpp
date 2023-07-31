#pragma once
#include <fstream>
#include <iostream>
#include <map>

class BitcoinExchange {
    public:
        // Constructors and Destructors
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        ~BitcoinExchange();

        // Methods
        void parseDataFile();

    private:
        std::map<std::string, float> _map;

};