#include "BitcoinExchange.hpp"

bool isValidFile(std::string const& filename)
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile
        || inputFile.peek() == std::ifstream::traits_type::eof())
    {
        return false;
    }
    return true;
}

int main(int argc, char **argv)
{
    if (argc != 2 || !isValidFile(argv[1])) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    BitcoinExchange btc;
    btc.action(argv[1]);
    return 0;
}
