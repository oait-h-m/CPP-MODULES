#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "Zombie "<< name << " is being destroyed" << std::endl;
}

void	Zombie::setName(std::string input)
{
	name = input;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}