#pragma once

#include "main.hpp"

class PhoneBook
{
private:
	Contact cont_list[8];
public:
	PhoneBook();
	~PhoneBook();

	std::string get_index(int i);
	void set_data(int i, std::string f_name, std::string l_name, std::string n_name, std::string dark_s, std::string phone_nbr);
	void affich_table();
	int out_index(std::string input);
	void affich_book(int i);
};
