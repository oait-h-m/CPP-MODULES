#include  <iostream>

int main()
{
	std::string	text = "HI THIS IS BRAIN";
	std::string*	stringPTR = &text;
	std::string&	stringREF = text;

	std::cout << "The memory address of the string variable is: " << &text << std::endl;
	std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;

	std::cout << "The value of the string variable is: " << text << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;
}
