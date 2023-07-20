//Implement a program to check if a given string is a palindrome using string functions.

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string str) {

    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());

    return str == reversed;
}

int main() {

    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    if (isPalindrome(str)) {
        std::cout << "The string is a palindrome." << std::endl;
    } 
    else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}
