#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./RPN \"<expression>\" " << std::endl;
        return 1;
    }
    try {
        int result = calculate(argv[1]);
        std::cout << "Result: " << result << std::endl;
    }
    catch (std::exception e) {
        std::cerr << "Invalid operator or numbers of operand." << std::endl;
        return 1;
    }
    return 0;
}
