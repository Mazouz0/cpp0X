#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie *zombie_list = zombieHorde( n, "FOO");

	for (int i = 0; i < n; i++) {
		zombie_list[i].announce();
	}
	delete[] zombie_list;
}