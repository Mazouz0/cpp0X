#include "replace.hpp"

std::string replaced_line(std::string str, std::string old_s, std::string new_s)
{
	if (str.empty() || old_s.empty() || old_s == new_s)
		return str;

	std::string result;
	size_t found, start = 0;

	while ((found = str.find(old_s, start)) != std::string::npos)
	{
		result.append(str, start, found - start);
		result.append(new_s);
		
		start = found + old_s.length();
	}

	if (start < str.length())
		result.append(str, start, std::string::npos);

	return result;
}

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Invalide Input !!" << std::endl;
		return 1;
	}
	
	std::string file_name(av[1]), old_str(av[2]), new_str(av[3]);
	std::string name_replace(file_name);
	name_replace.append(".replace");
	
	std::ifstream file_oregine(file_name.c_str());

	if (!file_oregine.good()) {
		std::cout << "Invalide Fie Name : " << file_name << " !!" << std::endl;
		return 2;
	}

	std::ofstream file_replace(name_replace.c_str());

	std::string old_line, new_line;

	while (std::getline(file_oregine, old_line))
	{
		new_line = replaced_line(old_line, old_str, new_str);
		file_replace << new_line << std::endl;
	}
	
	file_replace.close();
	file_oregine.close();
}