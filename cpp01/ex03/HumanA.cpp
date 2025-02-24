#include "HumanA.hpp"

HumanA::HumanA(std::string n_name, Weapon& weap) : weapon(weap)
{
	name = n_name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " + weapon.getType() << std::endl;
}
