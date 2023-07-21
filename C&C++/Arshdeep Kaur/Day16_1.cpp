//Write a program that reads a text file line by line and prints each line to the console.

#include <iostream>
#include <fstream>

int main() {

    std::ifstream file;
    std::string line;

    file.open("example.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening the file: " << std::endl;
    }

    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    return 0;
}
