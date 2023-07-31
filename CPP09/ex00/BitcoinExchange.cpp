#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
  this->_map = other._map;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
  if (this == &other) return *this;
  this->_map = other._map;
  return *this;
}

BitcoinExchange::~BitcoinExchange()
{}

/**
 * -------------- METHODS ------------------
*/
void BitcoinExchange::parseDataFile()
{
    std::ifstream inputFile("data.csv");
    std::string currentLine;

    while (getline(inputFile, currentLine)) {
        std::string date = currentLine.substr(0, 10);
        std::string rateStr = currentLine.substr(11);
        float rate = atof(rateStr.c_str());
        this->_map.insert(std::make_pair(date, rate));
    }
}