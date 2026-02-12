#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCatCat destructor called" << std::endl;
}

std::string	WrongCat::getType() const
{
	return type;
}

void	WrongCat::makeSound() const
{
	std::cout << "A WrongCat makes sound: Meow!" << std::endl;
}
