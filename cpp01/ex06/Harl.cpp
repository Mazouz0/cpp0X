#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
								enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
								years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	get_lvl(std::string level)
{
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i ++){
		if (level == arr[i])
			return i;
	}
	return -1;
}

void Harl::complain(std::string level)
{
	fun_ptr cmplain_arr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int lvl = get_lvl(level);
	
	// if (lvl != -1)
	// 	(this->*cmplain_arr[lvl])();
	// else
	// 	std::cout << "Invalide Level !!" << std::endl;
	for ( ; lvl < 4; lvl ++) {
		switch (lvl)
		{
		case 0:
			(this->*cmplain_arr[lvl])();
			break;
		case 1:
			(this->*cmplain_arr[lvl])();
			break;
		case 2:
			(this->*cmplain_arr[lvl])();
			break;
		case 3:
			(this->*cmplain_arr[lvl])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		}
		if (lvl == -1)
			break;
	}
}
