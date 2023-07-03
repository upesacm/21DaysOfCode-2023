#include <iostream>
#include <string>

int main()
{
	int num{};
	std::cout << "Enter a 3 Digit Number : ";
	std::cin >> num;
	int sum{};
	int digit{};
	while (num != 0) {
		digit = num % 10;
		num /= 10;
		sum = sum + digit;
	}
	std::cout << "The Total sum of All Digits is " << sum;
}
