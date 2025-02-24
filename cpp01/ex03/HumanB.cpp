#include "HumanB.hpp"

HumanB::HumanB(std::string n_name)
{
	name = n_name;
	has_weapon = false;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (has_weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
	weapon = &weap;
	has_weapon = true;
}
