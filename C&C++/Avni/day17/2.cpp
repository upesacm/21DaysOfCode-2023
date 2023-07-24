#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(std::cin, sentence);
    std::stringstream ss(sentence);

    int wordCount = 0;
    std::string word;
    while (ss >> word) {
        wordCount++;
    }
    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}
