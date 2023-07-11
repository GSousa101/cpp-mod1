
#include "easyfind.hpp"

int main( void ) {
    try 
    {
        {
	std::cout << "----- Vector -----" << std::endl;

	int	elements[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::vector<int> v(elements, elements + sizeof(elements) / sizeof(int));
	std::cout << "easyfind(42) = ";
	if (easyfind(v,42) == v.end())
		std::cout << "Couldn't find 42" << std::endl;
	else
		std::cout << *(easyfind(v,42)) << std::endl;
		
	std::cout << "easyfind(9) = " << *(easyfind(v, 9)) << std::endl;
	std::cout << "easyfind(0) = " << *(easyfind(v, 0)) << std::endl;

	std::cout << std::endl;
}
        // std::vector<int> g1;
        // for (int i = 0; i < 5; i++) {
        //     g1.push_back(i);
        // }
        // std::vector<int>::iterator nbr = easyfind<std::vector>(g1, 4);
        // std::cout << "Number four of vector is at: " << std::vector<int>::nbr << std::endl;
        //
        // std::list<int>   g2;
        // for (int i = 0; i < 10 ; i++) {
        //     g2.push_back(i);
        // }
        // nbr = easyfind<std::list>(g2, 7);
        // std::cout << "Number seven of list is at: " << std::list<int>::nbr << std::endl;
        //
        // std::deque<int>     g3;
        // for (int i = 0; i < 20 ; i++) {
        //     g2.push_front(i);
        // }
        // nbr = easyfind<std::deque>(g3, 20);
        // std::cout << "Number twenty (non-exit) of list is at: " << std::deque<int>::nbr << std::endl;

    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
