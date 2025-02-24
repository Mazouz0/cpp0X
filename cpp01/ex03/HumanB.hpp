#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon *weapon;
	bool has_weapon;
public:
	HumanB(std::string n_name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &weap);
};