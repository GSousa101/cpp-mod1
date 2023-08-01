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

// --------------- static functions for check errors ------------
static bool     isValidDate(std::string const& date)
{
    int qtdDelimeter = std::count(date.begin(), date.end(), '-');
    if (qtdDelimeter != 2 || date.size() != 11
        || date[date.size() - 1] != ' '
        || date[4] != '-' || date[7] != '-')
    { 
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;    
    }

    std::string validChars = "0123456789-";
    for (size_t i = 0; i < date.size() - 1; i++) {
        if (validChars.find(date[i]) == std::string::npos)
        {
            std::cerr << "Error: This date has invalid characters: " << date << std::endl;
            return false;        
        }
    }

    int year = std::atof(date.substr(0, 4).c_str());
    int month = std::atof(date.substr(5, 2).c_str());
    int day = std::atof(date.substr(8, 2).c_str());

    int lastDayMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year < 2009 || month < 1 || month > 12 || day < 1
        || day > lastDayMonth[month - 1]) {
        std::cerr << "Error: bad input => " << date << std::endl;
        return false;    
    }
    return true;
}

static bool isValidValue(std::string const& valueStr)
{
    float value = std::atof(valueStr.c_str());
    if (value < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if (value > 1000) {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

static bool isValidPipe(std::string const& line)
{
    int qtdPipes = std::count(line.begin(), line.end(), '|');
    if (qtdPipes != 1)
    {
        std::cerr << "Error: bad input => " << line << std::endl;
        return false;
    }
    return true;
}

/**
 * ------------------- METHODS -----------------------
*/

void        BitcoinExchange::analyzeLine(std::string const& line) {
    int             pipeIndex = line.find('|');
    std::string     valueStr = line.substr(pipeIndex + 1);

    if (!isValidPipe(line)
        || !isValidDate(line.substr(0, pipeIndex))
        || !isValidValue(valueStr))
        return;

    float           value = std::atof(valueStr.c_str());
    std::string     date = date.substr(0, 10);

    float theDayRate = (--this->_map.upper_bound(date))->second;
    float totalExchange = value * theDayRate;

    std::cout << date << " => " << value << " = " << totalExchange << std::endl;
}

void BitcoinExchange::fillDatabase( void )
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

void    BitcoinExchange::action(std::string const& filename)
{
    this->fillDatabase();

    std::ifstream   inputFile(filename.c_str());
    std::string     currentLine;
    getline(inputFile, currentLine);
    while (getline(inputFile, currentLine)) {
            analyzeLine(currentLine);
    }
}