//Implement a function to count the number of lines in a text file.

#include <iostream>
#include <fstream>
#include <string>

int countLines(const std::string& file_path) {
    
    std::ifstream file(file_path);
    if (!file.is_open()) {
        std::cerr << "Error opening the file: " << std::endl;
        return 0;
    }

    int count = 0;
    std::string line;
    while (std::getline(file, line)) {
        count++;
    }

    return count;
}

int main() {

    std::string file_path;
    std::cout << "Enter the path of the text file: ";
    std::getline(std::cin, file_path);

    int count = countLines(file_path);
    std::cout << "Number of lines in the file: " << count << std::endl;

    return 0;
}
