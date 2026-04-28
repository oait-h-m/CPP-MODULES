#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> a(3);
    a[0] = 10;
    a[1] = 20;
    a[2] = 30;
    std::cout << a[1] << "\n";

    Array<int> b(a);
    a[1] = 99;
    std::cout << b[1] << "\n";

    try
    {
        std::cout << a[3] << "\n";
    }
    catch (std::exception const&)
    {
        std::cout << "out of bounds\n";
    }
    return 0;
}