#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat joe("Bob", 190);
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl; 
    }
}