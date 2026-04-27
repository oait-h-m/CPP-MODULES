#include "iter.hpp"
#include <iostream>

void printInt(int const& x) 
{
    std::cout << x << " ";
}
void addOne(int& x)
{ 
    ++x;
}

int main()
{
	int a[] = {1, 2, 3};
	int const b[] = {10, 20, 30};

	iter(a, 3, printInt);
	iter(a, 3, addOne);
	std::cout << "\n";
	iter(a, 3, printInt);
	std::cout << "\n";

	iter(b, 3, printInt);
	std::cout << "\n";
}