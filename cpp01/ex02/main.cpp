#include <iostream>

// void funPTR(std::string *stringPTR)
// {
// 	std::cout << "\tfunREF declared : " << stringPTR << " :: " << &stringPTR << std::endl;
// 	*stringPTR = "FunPTR";
// }

// void funREF(std::string &stringREF)
// {
// 	std::cout << "\tfunREF declared : " << stringREF << " :: " << &stringREF << std::endl;
// 	stringREF = "FunREF";
// }

int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << "address of the string variable : " << &var << std::endl;
	std::cout << "address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "address held by stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value of the string variable : " << var << std::endl;
	std::cout << "value pointed to by stringPTR : " << stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;

	// std::cout << "var : " << var << std::endl;
	// std::cout << "stringPTR : " << stringPTR << std::endl;
	// std::cout << "*stringPTR : " << *stringPTR << std::endl;
	// std::cout << "stringREF : " << stringREF << std::endl;
	// std::cout << "&stringREF : " << &stringREF << std::endl;
	
	// std::cout << "************" << std::endl;

	// var = "Hello";

	// std::cout << "var : " << var << std::endl;
	// std::cout << "stringPTR : " << stringPTR << std::endl;
	// std::cout << "*stringPTR : " << *stringPTR << std::endl;
	// std::cout << "stringREF : " << stringREF << std::endl;
	// std::cout << "&stringREF : " << &stringREF << std::endl;

	// std::cout << "************" << std::endl;

	// stringREF = "newHello";

	// std::cout << "var : " << var << std::endl;
	// std::cout << "stringPTR : " << stringPTR << std::endl;
	// std::cout << "*stringPTR : " << *stringPTR << std::endl;
	// std::cout << "&stringPTR : " << &stringPTR << std::endl;
	// std::cout << "stringREF : " << stringREF << std::endl;
	// std::cout << "&stringREF : " << &stringREF << std::endl;

	// std::cout << "************" << std::endl;
	
	// funPTR(stringPTR);

	// std::cout << "var : " << var << std::endl;
	// std::cout << "stringPTR : " << stringPTR << std::endl;
	// std::cout << "*stringPTR : " << *stringPTR << std::endl;
	// std::cout << "&stringPTR : " << &stringPTR << std::endl;
	// std::cout << "stringREF : " << stringREF << std::endl;
	// std::cout << "&stringREF : " << &stringREF << std::endl;

	// std::cout << "************" << std::endl;
	
	// funREF(stringREF);

	// std::cout << "var : " << var << std::endl;
	// std::cout << "stringPTR : " << stringPTR << std::endl;
	// std::cout << "*stringPTR : " << *stringPTR << std::endl;
	// std::cout << "stringREF : " << stringREF << std::endl;
	// std::cout << "&stringREF : " << &stringREF << std::endl;

	// std::cout << "************" << std::endl;
}
