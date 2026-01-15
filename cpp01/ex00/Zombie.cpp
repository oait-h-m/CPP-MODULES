#include "Zombie.hpp"

Zombie::Zombie(std::string input)
{
	name = input;
}

Zombie::~Zombie()
{
	std::cout << "Zombie "<< name << " is being destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
