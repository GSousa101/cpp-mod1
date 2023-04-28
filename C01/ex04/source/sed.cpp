#include "../include/sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2) {
    _filename = filename;
    _s1 = s1;
    _s2 = s2;
    _infile.open(filename.c_str());
}

int Sed::errInput() {
    if (!this->_infile.is_open()) {
        std::cout << "Unable to read file" << std::endl;
        return (1);
    }
    if (this->_infile.peek() == std::ifstream::traits_type::eof()) {
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
    std::ofstream outfile((this->_filename + ".replace").c_str());


    while (std::getline(this->_infile, line)) {
        int beginIndex = line.find(this->_s1);
        while (beginIndex != -1) {
            line.erase(beginIndex, this->_s1.size());
            line.insert(beginIndex, this->_s2);
            beginIndex = line.find(this->_s1, beginIndex + this->_s2.size());
        }
        outfile << line << std::endl;
    }
    this->_infile.close();
    outfile.close();
}