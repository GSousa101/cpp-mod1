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
        void parseDataFile();
        bool BitcoinExchange::isValidDate(std::string const& date);

    private:
        std::map<std::string, float> _map;

};