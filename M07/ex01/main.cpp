#include "iter.hpp"

int main()
{
    char    c[5] = {'A', 'r', 'r', 'a', 'y'};

    iter(c, 5, print);
    std::cout << std::endl;
}
