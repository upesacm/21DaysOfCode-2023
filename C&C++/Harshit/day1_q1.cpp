#include <iostream>
#include <string>

int main() 
{
	std::string s{};
	std::cout << "Enter Your Name : ";
	std::cin >> s;
	std::cout << "Hello " << s << "!" << std::endl;
}
