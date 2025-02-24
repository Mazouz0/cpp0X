#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& weapon;
public:
	HumanA(std::string n_name, Weapon& weap);
	~HumanA();

	void attack();
};
