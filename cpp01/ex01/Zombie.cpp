#include "Zombie.hpp"

Zombie::Zombie() { }

Zombie::Zombie(std::string input) : name(input) { }

Zombie::~Zombie()
{
	std::cout << "Destructor of < " << name << " > Called !" << std::endl;
}

Zombie::Zombie(const Zombie &other) : name(other.name) { }

void Zombie::set_name(std::string input)
{
	name = input;
}

Zombie &Zombie::operator=(const Zombie &other)
{
	if (this != &other)
		name = other.name;
	return *this;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
