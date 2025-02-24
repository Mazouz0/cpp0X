#include "Harl.hpp"

int main()
{
	Harl h;
	std::string dbg("DEBUG"), inf("INFO"), wrg("WARNING"), err("ERROR");

	std::cout << "[ " << dbg << "]" << std::endl;
	h.complain(dbg);
	std::cout << "[ " << inf << "]" << std::endl;
	h.complain(inf);
	std::cout << "[ " << wrg << "]" << std::endl;
	h.complain(wrg);
	std::cout << "[ " << err << "]" << std::endl;
	h.complain(err);
	std::cout << "[ " << "Invalid" << "]" << std::endl;
	h.complain("Invalid");
}