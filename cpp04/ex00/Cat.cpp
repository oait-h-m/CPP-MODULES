#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat() 
{
	std::cout << "Cat destructor called" << std::endl;
}

std::string	Cat::getType() const
{
	return type;
}

void	Cat::makeSound() const
{
	std::cout << "A Cat makes sound: Meow!" << std::endl;
}
