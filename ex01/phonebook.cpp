#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
	index = 0;
}

void	PhoneBook::NewContact()
{
	std::string	input;
	
	while(true)
	{
		std::cout << "Enter your first name: ";
		std::getline(std::cin, input);
	    
		if (std::cin.eof())  
		{
			return;
		}
	    
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a first name. Try again:\n";
		}
		else
		{
			contact[index].SetFirstName(input);
			break;
		}
}

	while(true)
	{
		std::cout << "Enter your last name: ";
		std::getline(std::cin, input);

		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a last name. Try again:\n";
		}
		else
		{
			contact[index].SetLastName(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your Nickname: ";
		std::getline(std::cin, input);

		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a Nickname. Try again:\n";
		}
		else
		{
			contact[index].SetNickname(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your Dark secret: ";
		std::getline(std::cin, input);

		if (std::cin.eof())  
		{
			return;
		}
		if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a Dark Secret. Try again:\n";
		}
		else
		{
			contact[index].SetDarkestSecret(input);
			break;
		}
	}

	while(true)
	{
		std::cout << "Enter your Phone number: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			return;
		}
		else if (input.empty())
		{
			std::cout << "Oops! You forgot to enter a Phone number. Try again:\n";
		}
		else
		{
			contact[index].SetPhoneNumber(input);
			break;
		}
	}
}
