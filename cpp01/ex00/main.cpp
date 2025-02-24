#include "Zombie.hpp"

int main()
{
	Zombie z1 = Zombie("FOO");
	Zombie *z2 = newZombie("BOO");

	z1.announce();
	z2->announce();

	randomChump("DOO");
	delete z2;
}