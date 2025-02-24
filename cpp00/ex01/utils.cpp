#include "main.hpp"

std::string get_line()
{
	std::string input;

	std::getline(std::cin, input);
	if (std::cin.eof()) {
		std::cout << std::endl << "EOF ... !!" << std::endl;
		exit(2);
	}
	return input;

}

int	not_number(std::string input)
{
	for (int i = 0; input[i]; i ++){
		if (input[i] < '0' || input[i] > '9')
			return 1;
	}

	return 0;
}

std::string ft_itoa(int number)
{
    std::stringstream str;
    str << number;
    return str.str();
}

int ft_atoi(std::string input)
{
	std::istringstream str(input);
	int nbr;

	str >> nbr;
	return nbr;
}

void draw_case(std::string str)
{
	int size = 9;
	int len = str.length();
	
	int t = 0;
	for (; size - len >= 0; size--, t++){
		std::cout << ' ';
	}
	for (int i = 0; str[i] && t <= 9; i++, t++){
		if (t == 9 && str[i + 1])
			std::cout << '.';
		else
			std::cout << str[i];
	}
	std::cout << '|';
}

void draw_table(std::string case1, std::string case2, std::string case3, std::string case4)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << '|';
	draw_case(case1);
	draw_case(case2);
	draw_case(case3);
	draw_case(case4);
	std::cout << std::endl;
}