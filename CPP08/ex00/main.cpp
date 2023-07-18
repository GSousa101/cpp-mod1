
#include "easyfind.hpp"

int main( void ) {
    try 
    {
        std::vector<int> g1;
        for (int i = 0; i < 5; i++) {
            g1.push_back(i - 2);
        }
        std::vector<int>::iterator nbr = easyfind(g1, -1);
        std::cout << "The number you asked for is : " << *nbr << std::endl;

        std::list<int>   g2;
        for (int i = 0; i < 10 ; i++) {
            g2.push_back(i - 5);
        }
        std::list<int>::iterator nbr2 = easyfind(g2, 3);
        std::cout << "The number you asked for is : " << *nbr2 << std::endl;

        std::deque<int>     g3;
        for (int i = 0; i < 20 ; i++) {
            g3.push_front(i - 10);
        }
        std::deque<int>::iterator nbr3 = easyfind(g3, 20);
        std::cout << "The number you asked for is : " << *nbr3 << std::endl;

    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
