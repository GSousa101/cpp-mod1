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
void BitcoinExchange::parseDataFile( void )
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


// --------------- Methods for check errors ------------
bool BitcoinExchange::isValidDate(std::string const& date)
{
    int dateDelimiter = std::count(date.begin(), date.end(), '-');
    if (dateDelimiter != 2 || date.size() != 11
        || date[date.size() - 1] != ' ' || date[4] != '-' || date[7] != '-')
    { 
        std::cerr << "This date is not in the right pattern: " << date << std::endl;
        return false;    
    }

    std::string validChars = "0123456789-";
    for (size_t i = 0; i < date.size() - 1; i++) {
        if (validChars.find(date[i] < 0)) {
            std::cerr << "This date has invalid characters: " << date << std::endl;
            return false;        
        }
    }

    int year = std::atof(date.substr(0, 4).c_str());
    int month = std::atof(date.substr(5, 2).c_str());
    int day = std::atof(date.substr(8, 2).c_str());

    int lastDayMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year < 2009 || month < 1 || month > 12 || day < 1
        || day > lastDayMonth[month - 1]) {
        std::cerr << "This date is out of the limit: " << date << std::endl;
        return false;    
    }
    return true;
}


void BitcoinExchange::handleExchangeFileLine(const std::string &line) {
    if (!isValidLine(line))
        return;
    int pipeIndex = line.find('|');

    std::string date = line.substr(0, pipeIndex);
    if (!isValidDate(date))
        return;

    std::string rateStr = line.substr(pipeIndex + 1);
    if (!isRateValid(rateStr)) return;

    std::string dateWithoutFinalSpace = date.substr(0, 10);
    float rate = std::atof(rateStr.c_str());

    float exchangeRate = rate * (--this->_map.upper_bound(dateWithoutFinalSpace))->second;

    std::cout << dateWithoutFinalSpace << " => " << rate << " = " << exchangeRate << std::endl;
}

void BitcoinExchange::processExchangeFile(const std::string &filename) {
    std::ifstream   inputFile(filename);
    std::string     currentLine;
    int             count = 0;

    getline(inputFile, currentLine);
    while (getline(inputFile, currentLine)) {
            handleExchangeFileLine(currentLine);
    }
}

void    BitcoinExchange::calculateValue(std::string const& filename) {
    this->parseDataFile();
    this->processExchangeFile(filename);
}