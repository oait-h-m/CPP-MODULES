#include "contact.hpp"

void	Contact::SetFirstName(std::string input)
{
	
	FirstName = input;
}

std::string	Contact::GetFirstName()
{
	return FirstName;
}

void	Contact::SetLastName(std::string input)
{
	LastName = input;
}

std::string	Contact::GetLastName()
{
	return LastName;
}

void	Contact::SetNickname(std::string input)
{
	Nickname = input;
}

std::string	Contact::GetNickname()
{
	return Nickname;
}

void	Contact::SetDarkestSecret(std::string input)
{
	DarkestSecret = input;
}

std::string	Contact::GetDarkestSecret()
{
	return DarkestSecret;
}

void	Contact::SetPhoneNumber(std::string input)
{
	PhoneNumber = input;
}

std::string	Contact::GetPhoneNumber()
{
	return PhoneNumber;
}
