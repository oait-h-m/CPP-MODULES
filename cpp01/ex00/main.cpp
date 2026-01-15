#include "Zombie.hpp"

int main()
{
	std::string input1 = "Oussama";
	std::string input2 = "Ait HMAD";

	std::cout << "Stack : " << std::endl;
	randomChump(input1);

	std::cout << "Heap : " << std::endl;
	Zombie *obj = newZombie(input2);
	
	obj->announce();
	delete obj;
}
