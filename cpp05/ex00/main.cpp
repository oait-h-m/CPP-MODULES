#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat joe("Bob", 0);
        std::cout << joe << std::endl;
    }
    catch (std::exception &e)
    {
       std::cout << e.what() << std::endl; 
    }
}