//Write a program that copies the contents of one file to another file.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file1;
    std::ofstream file2;
    std::string line;

    file1.open("file1.txt");
    if (!file1.is_open()) {
        std::cerr << "Error opening the source file: " << std::endl;
    }

    file2.open("file2.txt");
    if (!file2.is_open()) {
        std::cerr << "Error opening the destination file: " << std::endl;
        file1.close();
    }

    while (std::getline(file1, line)) {
        file2 << line << std::endl;
    }

    file1.close();
    file2.close();

    std::cout << "File copied successfully!" << std::endl;

    return 0;
}
