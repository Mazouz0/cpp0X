#pragma once
#include <iostream>



class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(std::string input);
	~Zombie();
	Zombie(const Zombie &other);

	void set_name(std::string input);

	Zombie& operator=(const Zombie &other);

	void announce( void );
};

Zombie* zombieHorde( int N, std::string name );
