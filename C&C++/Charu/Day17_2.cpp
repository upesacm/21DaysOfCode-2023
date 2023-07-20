#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int countWords(const std::string& sentence) {
    istringstream iss(sentence);
    int count = 0;
    string word;

    while (iss >> word) {
        count++;
    }

    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = countWords(sentence);
    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}
