#include "../include/sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) {
  _filename = filename;
  _s1 = s1;
  _s2 = s2;
}

int Sed::errInput() {
    std::ifstream infile(this->_filename);

    if (!infile.is_open()) {
        std::cout << "Unable to read file" << std::endl;
        return (1);
    }
    if (infile.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "File is empty" << std::endl;
        return (1);
    }
    if (!this->_s1.size() || !this->_s2.size()) {
        std::cout << "Strings cannot be empty" << std::endl;
        return (1);
    }
    return (0);
}

void    Sed::replace() {
    std::string line;
    std::ifstream infile(this->_filename);
    std::ofstream outfile(this->_filename + ".replace");

    infile.is_open();
    while (std::getline(infile, line)) {
        int beginIndex = line.find(this->_s1);
        while (beginIndex != -1) {
            line.replace(beginIndex, this->_s1.size(), this->_s2);
            beginIndex = line.find(this->_s1, beginIndex + this->_s2.size());
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
}