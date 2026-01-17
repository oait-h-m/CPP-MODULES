#include  "Zombie.hpp"

int main()
{
	int Size = 5;
	std::string name = "Koyo";
	Zombie *zObject = zombieHorde(Size, name);

	for(int i = 0; i < Size; i++)
	{
		zObject->announce();
	}
	delete[] zObject;
}
