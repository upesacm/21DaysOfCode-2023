//Implement a function to search for a specific word in a text file and display its occurrences.

#include <iostream>
#include <fstream>
#include <string>

void countWords(const std::string& file_path, const std::string& word) {
    
    std::ifstream file(file_path);

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << file_path << std::endl;
        return;
    }

    std::string line;
    int line_number = 1;
    int occurrences = 0;
    
    while (std::getline(file, line)) {

        size_t pos = line.find(word);
        while (pos != std::string::npos) {
            std::cout << "Found at line " << line_number << ", position " << pos + 1 << std::endl;
            occurrences++;
            pos = line.find(word, pos + 1);
        }

        line_number++;
    }

    if (occurrences == 0) {
        std::cout << "The word '" << word << "' was not found in the file." << std::endl;
    } 
    else {
        std::cout << "Total occurrences of '" << word << "': " << occurrences << std::endl;
    }

}

int main() {

    std::string file_path;
    std::cout << "Enter the path of the text file: ";
    std::getline(std::cin, file_path);

    std::string word;
    std::cout << "Enter the word to search for: ";
    std::getline(std::cin, word);

    countWords(file_path, word);

    return 0;
}
