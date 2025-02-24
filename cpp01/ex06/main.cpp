#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 1){
		std::cout << "[ OH !! That's great no complaning at all ]" << std::endl;
		return 0;
	}

	std::string level = av[1];
	Harl h;
	h.complain(level);

	// if (lvl < 0){
	// 	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	// 	return 0;
	// }

	// for ( ; lvl < 4; lvl ++){
	// 	std::cout << "[ " << arr[lvl] << "]" << std::endl;
	// 	h.complain(arr[lvl]);
	// }


}