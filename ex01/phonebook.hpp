#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];
	int	count;
	int	index;
public:
	void	NewContact();
	void	Search();

};

#endif
