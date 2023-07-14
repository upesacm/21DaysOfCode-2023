//2. Write a program to calculate the natural logarithm (base e) of a given number using the log() function from the <cmath> library.

#include <iostream>
#include <cmath>

int main() {
    double number, result;

    std::cout << "Enter a number: ";
    std::cin >> number;

    result = log(number);

    std::cout << "The natural logarithm of " << number << " is: " << result << std::endl;

    return 0;
}

