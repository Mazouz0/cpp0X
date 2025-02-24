#include "PhoneBook_Class.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::get_index(int i)
{
	return cont_list[i].get_index();
}

void PhoneBook::set_data(int i, std::string f_name, std::string l_name, std::string n_name, std::string dark_s, std::string phone_nbr)
{
	cont_list[i - 1].set_index(ft_itoa(i));
	cont_list[i - 1].set_first_name(f_name);
	cont_list[i - 1].set_last_name(l_name);
	cont_list[i - 1].set_nickname(n_name);
	cont_list[i - 1].set_phone_number(phone_nbr);
	cont_list[i - 1].set_darkest_secret(dark_s);
}

void PhoneBook::affich_table()
{
	for (int i = 0; i < 8 && cont_list[i].get_index() != "0"; i ++){
		draw_table( cont_list[i].get_index(),
					cont_list[i].get_first_name(),
					cont_list[i].get_last_name(),
					cont_list[i].get_nickname());
	}
	std::cout << "---------------------------------------------" << std::endl;
}

int PhoneBook::out_index(std::string input)
{
	for (int i = 0; i < 8  && get_index(i) != "0"; i ++){
		if (get_index(i) == input)
			return 0;
	}
	return 1;
}

void PhoneBook::affich_book(int i)
{
	i -=1;
	std::cout << "---------------------------------------" << std::endl;
	
	std::cout << "\tfirst name : " << cont_list[i].get_first_name() << std::endl;
	std::cout << "\tlast name : " << cont_list[i].get_last_name() << std::endl;
	std::cout << "\tnickname : " << cont_list[i].get_nickname() << std::endl;
	std::cout << "\tphone number : " << cont_list[i].get_phone_number() << std::endl;
	std::cout << "\tdarkest secret : " << cont_list[i].get_darkest_secret() << std::endl;

	std::cout << "---------------------------------------" << std::endl;
}
