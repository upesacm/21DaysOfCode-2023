//Create a program to split a sentence into words and count the number of words using string functions.

#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::string word;
    int count = 0;

    while (iss >> word) {
        count++;
    }

    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    int wordCount = countWords(sentence);
    std::cout << "Number of words in the sentence are: " << wordCount << std::endl;

    return 0;
}
