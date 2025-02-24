#include "Weapon.hpp"

Weapon::Weapon(std::string input)
{
	type = input;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string input)
{
	type = input;
}
