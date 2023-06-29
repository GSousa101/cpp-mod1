#include "include/Scalar.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Invalid parameter. usage: ./convert <param>" << std::endl;
            return (1);
    }
    Scalar::convert(argv[1]);
    return (0);
}
