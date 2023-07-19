#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& sentence) {
    std::istringstream iss(sentence);

    int wordCount = 0;
    std::string word;
    while (iss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::string inputSentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, inputSentence);
    int wordCount = countWords(inputSentence);

    std::cout << "Number of words in the sentence: " << wordCount << std::endl;

    return 0;
}
