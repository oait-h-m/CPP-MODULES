#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() 
{
	Form f1("FieldTrip", 30, 10);
	std::cout << f1 << std::endl;

	try 
	{
		Form f2("TopSecret", 0, 15);
	}
	catch (std::exception &e)
	{
		std::cout << "Failed to create TopSecret: " << e.what() << std::endl;
	}

	try
	{
		Form f3("EasyPaper", 75, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Failed to create EasyPaper: " << e.what() << std::endl;
	}

    Bureaucrat alice("Alice", 25);
    Bureaucrat bob("Bob", 100);

    std::cout << alice << std::endl;
    std::cout << bob << std::endl;

    bob.signForm(f1);
    alice.signForm(f1);
    std::cout << f1 << std::endl;
    alice.signForm(f1);

    return 0;
}
