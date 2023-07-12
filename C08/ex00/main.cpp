
#include "easyfind.hpp"

int main( void ) {
    try 
    {
        std::vector<int> g1;
        for (int i = 0; i < 5; i++) {
            g1.push_back(i);
        }
        std::vector<int>::iterator nbr = easyfind(g1, 4);
        std::cout << "Number four of vector is at: " << *nbr << std::endl;

        std::list<int>   g2;
        for (int i = 0; i < 10 ; i++) {
            g2.push_back(i);
        }
        std::list<int>::iterator nbr2 = easyfind(g2, 7);
        std::cout << "Number seven of list is at: " << *nbr2 << std::endl;

        std::deque<int>     g3;
        for (int i = 0; i < 20 ; i++) {
            g2.push_front(i);
        }
        std::deque<int>::iterator nbr3 = easyfind(g3, 20);
        std::cout << "Number twenty (non-exit) of list is at: " << *nbr3 << std::endl;

    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
