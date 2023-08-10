#include "iter.hpp"

void    marlowSays(std::string const& str)
{
    std::cout << "In a hurricane Marlow says " << str << ". DO OR DIE!" << std::endl;
}

void    isEven( const int& num)
{
    std::cout << num << " is even: " << std::boolalpha << (num % 2 == 0) << std::endl;
}

int main( void )
{
    int nbArray[] = {1, 4, 54, 99, 342, 2, 5, 6534, 12, 91};
    std::string strArray[] = { "Hull", "Mast", "Rudder", "Keel", "Bow" };

    ::iter<int>(nbArray, 8, isEven);
    ::iter<std::string>(strArray, 5, marlowSays);
    return 0;
}
