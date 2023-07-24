//Implement a C/C++ program that takes input from the user and generates the multiplication table of the given number up to 10, displaying the results in a well-formatted manner. Ensure the program handles different edge cases gracefully and provides appropriate feedback to the user when needed.

#include <iostream>
#include <limits>

int main() {
    int num;

    std::cout << "Please enter a positive integer: ";

    while (!(std::cin >> num)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a positive integer: ";
    }

    while (num <= 0) {
        std::cout << "Invalid input. Please enter a positive integer: ";
        std::cin >> num;
    }

    std::cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << (num * i) << std::endl;
    }

    return 0;
}
