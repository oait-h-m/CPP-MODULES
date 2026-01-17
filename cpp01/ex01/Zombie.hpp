#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string	name;

public:
	void	setName(std::string input);
	void	announce();
	Zombie();
	~Zombie();
};

    Zombie* zombieHorde(int N, std::string name);

#endif
