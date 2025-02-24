#pragma once

#include <iostream>

class Contact
{
private:
	std::string	index;
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
	
public:
	Contact();
	~Contact();
	
	void set_index(std::string input);
	void set_first_name(std::string input);
	void set_last_name(std::string input);
	void set_nickname(std::string input);
	void set_phone_number(std::string input);
	void set_darkest_secret(std::string input);

	std::string get_index();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
};
