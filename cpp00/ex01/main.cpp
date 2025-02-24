#include "main.hpp"

int add_func(int ix, PhoneBook *phonebook)
{
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string dark_s;
	std::string phone_nbr;

	std::cout << "Enter contact field : " << std::endl;
	std::cout << "\tfirst name : " ;
	f_name = get_line();
	if (f_name == "")
	{
		std::cerr << "Empty Field !!" << std::endl;
		return 1;
	}
	std::cout << "\tlast name : " ;
	l_name = get_line();
	if (l_name == "")
	{
		std::cerr << "Empty Field !!" << std::endl;
		return 1;
	}
	std::cout << "\tnickname : " ;
	n_name = get_line();
	if (n_name == "")
	{
		std::cerr << "Empty Field !!" << std::endl;
		return 1;
	}
	std::cout << "\tdarkest secret : " ;
	dark_s = get_line();
	if (dark_s == "")
	{
		std::cerr << "Empty Field !!" << std::endl;
		return 1;
	}
	std::cout << "\tphone number : " ;
	phone_nbr = get_line();
	if (phone_nbr == "" || not_number(phone_nbr))
	{
		std::cerr << "Empty Field Or Invalid Number !!" << std::endl;
		return 1;
	}
	phonebook->set_data(ix, f_name, l_name, n_name, dark_s, phone_nbr);
	return 0;
}

void search_func(PhoneBook phone_book)
{
	int index;
	std::string input;

	draw_table("Index", "First Name", "Last Lame", "Nickname");
	phone_book.affich_table();
	std::cout << "Select Index : ";
	input = get_line();
	if (not_number(input) || phone_book.out_index(input)){
		std::cout << "Invalide Index !!" << std::endl;
		return;
	}
	index = ft_atoi(input);
	phone_book.affich_book(index);
}


int main()
{
	int	index = 1;
	std::string input;
	PhoneBook phone_book;

	while (true){
		if (index > 8)
			index -= 8;
		std::cout << "Enter one of three command : ADD, SEARCH or EXIT" << std::endl;
		input = get_line();
		if (input == "ADD") {
			if (add_func(index, &phone_book))
				continue;
			index ++;
		}
		else if (input == "SEARCH")
			search_func(phone_book);
		else if (input == "EXIT")
			break;
	}

	return 0;
}